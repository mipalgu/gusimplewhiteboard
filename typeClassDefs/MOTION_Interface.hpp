/**                                                                     
 *  /file MOTION_Interface.h
 *                                                                      
 *  Created by Carl Lusty in 2013.                                      
 *  Copyright (c) 2013 Carl Lusty                                       
 *  All rights reserved.                                                
 */                                                                     

                                                                        
#ifndef MOTION_Interface_DEFINED
#define MOTION_Interface_DEFINED
#define MOTION_Commands_DEFINED
#define MOTION_Status_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cctype>
#include <cstdlib>
#endif // WHITEBOARD_POSTER_STRING_CONVERSION

#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <gu_util.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wpadded"

#define MOTION_DIR "/data/motions/"
#define MOTION_FILE_POSTFIX ".mot"
#define JOINT_CHAIN_MAXSIZE 10
#define CHAIN_IGNORED_MOTION_DURATION 100 //cycles
#define TRANSITION_NAME(s, e) TRANSITION_NAME_FROM_STRING(stance_strings[s], stance_strings[e])
#define TRANSITION_NAME_FROM_STRING(s, e) ((((std::string("transition_") += s) += "_") += e) += MOTION_FILE_POSTFIX)
#define ACTION_NAME(a, s) ((((std::string("action_") += stance_strings[s]) += "_") += action_strings[a]) += MOTION_FILE_POSTFIX)
#define STANCE_NAME(s) STANCE_NAME_FROM_STRING(stance_strings[s])
#define STANCE_NAME_FROM_STRING(s) std::string("stance_").append(std::string(s).append(MOTION_FILE_POSTFIX))

#define MAP_ACTION_ENTRY(a, s, c) v[a] = Action_Transition(a, s, c);

#define MY_CHECK_ENUM(s,p,v)       if (strstr((s), #v)) p = v


namespace guWhiteboard                                                  
{
        namespace Motions
        {
		/**
 		* @brief This is the file format of the .mot files. It is used when parsing them in the Nao motion module.
 		*/  
                enum motion_file_layout
                {
                        NAO_Version = 0,        ///< V3 = 0, V4 = 1
                        Units,                  ///< RAD = 0 or DEG = 1
                        Stiffness,              ///< 0 - 100
                        Joints,                 ///< Joint numbers, see SensorInfo.h 'jointNames' array
                        Motions                 ///< The rest of the file is comma seperated joints and 10ms seperated lines
                };

		/**
 		* @brief enum values for all stances
 		*/  
                enum stance
                {
                        Standby_stance = 0, 	///< Gorilla position, releases stiffness when done (implemented in the Nao motion module)
                        Kneeling_stance, 	///< default kneeling stance - no stiffness by default (implemented in the Nao motion module)
                        Standing_stance,	///< standing up, this is mirrored by the Nao walk engines 'Initialise' pose and means that a motion transition is not required to turn on the Nao walk engine.
                        GoalieSaveLeft_stance,	///< Half kneeling and leaning to the left
                        GoalieSaveRight_stance,	///< Half kneeling and leaning to the right
                        FallenForward_stance, 	///< The robot has fallen face down. There is no path to the fallen stances, these can only be gotten to by the fall manager FSM overwriting the current stance
                        FallenBack_stance,	///< The robot has fallen backwards. There is no path to the fallen stances, these can only be gotten to by the fall manager FSM overwriting the current stance
                        NUM_OF_STANCES		///< Handy counter for the number of enums
                };

		/**
 		* @brief enum values for all actions that can be done 
 		*/  
                enum action
                {
                        Kneeling_wave = 0,	///< When kneeling, wave with one arm
            		Kneeling_quickwave,	///< When kneeling, wave quickly with one arm (originally for the RoboCup sound demo)
                        Kneeling_flagwave, 	///< When kneeling, wave as if holding a flag - Jeremy's Flag Wave
                        Kneeling_raiseright, 	///< When kneeling, raise right arm - Vlad's treat to hit
                        Kneeling_signal, 	///< When kneeling, signal right arm - Vlad's where to hit
                        Standing_leftkick,	///< When standing, kick with the left foot
                        Standing_rightkick,	///< When standing, kick with the right foot
                        Standing_leftpass,	///< When standing, kick sideways, moving the object in front of the robot left
                        Standing_rightpass,	///< When standing, kick sideways, moving the object in front of the robot right
                        Standing_wave,		///< When standing, wave with one arm
                        NUM_OF_ACTIONS		///< Handy counter for the number of enums
                };
                
		/**
 		* @brief Pretty print and parsing string values, these need to line up with the enum values in 'stance'
 		*/  
                static const char *stance_strings[NUM_OF_STANCES] =
                {
                        "Standby_stance",
                        "Kneeling_stance",
                        "Standing_stance",
                        "GoalieSaveLeft_stance",
                        "GoalieSaveRight_stance",
                        "FallenForward_stance",
                        "FallenBack_stance",
                };

		/**
 		* @brief Pretty print and parsing string values, these need to line up with the enum values in 'action'
 		*/  
                static const char *action_strings[NUM_OF_ACTIONS] =
                {
                        "Kneeling_wave",
                        "Kneeling_quickwave",
                        "Kneeling_flagwave", // Jeremy's Flag Wave
                        "Kneeling_raiseright", // Vlad's's Threat to Hit
                        "Kneeling_signal", // Vlad's's signal where to Hit
                        "Standing_leftkick",
                        "Standing_rightkick",
                        "Standing_leftpass",
                        "Standing_rightpass",
                        "Standing_wave"
                };

		/**
 		* @brief Internal struct for representing a transition from one from one 'Stance' to another
 		*/  
                struct Stance_Transition
                {
                        stance _s;		///< the starting stance of this transition
                        stance _e;		///< the ending stance of this transition
                        int _cost;		///< how long this will take
                        std::string _name;	///< the string name of this transition
			/** @brief Constructor */
                        Stance_Transition(stance s, stance e, int cost) : _s(s), _e(e), _cost(cost), _name(TRANSITION_NAME(s, e)) { }
                };

		/**
 		* @brief Simple struct to store the hardcoded motion transitions from one 'Stance' to another
 		*/  
                struct T{
			/**
 			* @brief These are the hardcoded transitions from one Stance to another 
			* @return The hardcoded vector of Stance transitions
			*/
                        static std::vector<Stance_Transition> create_transitions() //many paths to a stance will work (picks shortest by using the cost)
                        {
                                std::vector<Stance_Transition> v;
                                v.push_back(Stance_Transition(Standby_stance,           Kneeling_stance,        230));
                                v.push_back(Stance_Transition(Kneeling_stance,          Standby_stance,         300));
                                v.push_back(Stance_Transition(Kneeling_stance,          Standing_stance,        150));
                                v.push_back(Stance_Transition(Standing_stance,          Kneeling_stance,        100)); 
                                v.push_back(Stance_Transition(Standing_stance,  	GoalieSaveLeft_stance,  1));
                                v.push_back(Stance_Transition(Standing_stance,  	GoalieSaveRight_stance, 1));
                                v.push_back(Stance_Transition(FallenForward_stance,     Standby_stance,         400));
                                v.push_back(Stance_Transition(FallenBack_stance, 	Standing_stance,        5));
                                v.push_back(Stance_Transition(Kneeling_stance,          GoalieSaveLeft_stance,  150));
                                v.push_back(Stance_Transition(GoalieSaveLeft_stance,    Kneeling_stance,        225));
                                v.push_back(Stance_Transition(Kneeling_stance,          GoalieSaveRight_stance, 480));
                                v.push_back(Stance_Transition(GoalieSaveRight_stance,   Kneeling_stance,        225));
                                v.push_back(Stance_Transition(FallenForward_stance,     Standing_stance,         1));

                                return v;
                        }
                        static const std::vector<Stance_Transition> _transitions; ///< the storage used for the hardcoded Stance transitions
                };

		/**
 		* @brief Internal struct for representing a motion 'Action' such as Kicking
 		*/       
                struct Action_Transition
                {
                        action _a; 		///< the action to be performed, somehow this is 'not really needed here', I can't remember why.
                        stance _s;		///< the stance required to perform the action
                        int _cost;   		///< how long this will take
                        std::string _name;	///< the string name of the action
			/** @brief Constructor */
                        Action_Transition(action a = Kneeling_wave, stance s = Kneeling_stance, int cost = 1): _a(a), _s(s), _cost(cost), _name(ACTION_NAME(a, s)) { }
                };

		/**
 		* @brief Simple struct to store the hardcoded motion 'Actions'
 		*/  
                struct A{//CHANGE FROM MAP TO VECTOR AND USE THE ENUM INDEX TO GET THE ACTION_TRANSITION O(1)
			/**
 			* @brief These are the hardcoded Actions that can be used and the Stances required to use them 
			* @return The hardcoded map of actions
			*/
                        static std::map<action, Action_Transition> create_actions() //each action may only have one stance
                        {
                                std::map<action, Action_Transition> v;
                                MAP_ACTION_ENTRY(Kneeling_wave,         Kneeling_stance, 550) //cost should be time to perform the action
                                MAP_ACTION_ENTRY(Kneeling_quickwave,    Kneeling_stance, 450) //cost should be time to perform the action
                                // Jeremy's Flag Wave Action. 
                                MAP_ACTION_ENTRY(Kneeling_flagwave,     Kneeling_stance, 465)
                                MAP_ACTION_ENTRY(Kneeling_raiseright,     Kneeling_stance, 505)
                                MAP_ACTION_ENTRY(Kneeling_signal,     Kneeling_stance, 950)
                                MAP_ACTION_ENTRY(Standing_leftkick,     Standing_stance, 443)
                                MAP_ACTION_ENTRY(Standing_rightkick,    Standing_stance, 443)
                                MAP_ACTION_ENTRY(Standing_leftpass,     Standing_stance, 1)
                                MAP_ACTION_ENTRY(Standing_rightpass,    Standing_stance, 1)
                                MAP_ACTION_ENTRY(Standing_wave,         Standing_stance, 1)

                                return v;
                        }
                        static const std::map<action, Action_Transition> _actions; ///< This stores all the actions that this API can use and what stance is required to use them
                };
                

		/**
 		* @brief Internal class for cost based graph search paths, in this case motion paths
		*
		* This is used to find a valid motion path from one stance to another based on the 'cost' aka the duration of time the motions will take.
		*
 		*/     
                class Stance_Path
                {
                private:
                        int _cost;	///< current path cost
                        int _off;	///< current offset in the _stances array
                        bool _reached;	///< has the desired stance been reached
                public:
                        u_int8_t _stances[JOINT_CHAIN_MAXSIZE];	///< the path taken

			/**
 			* @brief Constructor
			*/
                        Stance_Path(): _cost(0), _off(0), _reached(false) { }
                        int offset() { return _off; }	///< @brief offset getter
                        bool valid() { return _cost != -1 ? true : false; }	///< @brief is this a valid motion transition
                        void invalidate() { _cost = -1; }	///< @brief set this path in invalid
                        void reached() { _reached = true; } 	///< @brief did this path get to the desired stance
                        int cost() { return _cost; }		///< @brief getter for the path cost (aka time)

			/**
 			* @brief Add the first stance to this path
			* @param s the stance
			* @param cost the transition cost from the current stance to the new stance 's'
			*/
                        void add_stance(stance s, int cost) { if(_off == (JOINT_CHAIN_MAXSIZE-1)) { invalidate(); } _stances[_off] = static_cast<u_int8_t>(s); _off++; _cost += cost; } //JOINT_CHAIN_MAXSIZE-1 leaves room for an action
			/**
 			* @brief Add the first stance to this path
			* @param s the stance
			* @param cost the transition cost from the current stance to the new stance 's'
			* @param transition the index of the transition in the _transitions vector
			*/
                        void add_stance(stance s, int cost, int transition) { if(_off == (JOINT_CHAIN_MAXSIZE-1)) { invalidate(); } _stances[_off] = static_cast<u_int8_t>(transition+NUM_OF_STANCES+NUM_OF_ACTIONS); _off++; _stances[_off] = static_cast<u_int8_t>(s); _off++; _cost += cost; } //JOINT_CHAIN_MAXSIZE-1 leaves room for an action
			/**
 			* @brief pretty print of the stance path (mainly for debugging)
			*/
                        void pretty_print()
                        {
                                std::stringstream ss;
                                ss << "Stance_Path: " << static_cast<int>(_off) << " ";
                                for(int i = 0; i < _off; i++)
                                {
                                        if(_stances[i] < NUM_OF_STANCES)
                                                ss << "-> " << static_cast<int>(_stances[i]) << " " << stance_strings[_stances[i]];
                                        else
                                                ss << " transition: " << static_cast<int>(_stances[i]) << " ";
                                }
                                fprintf(stderr, "%s\n", ss.str().c_str());
                        }
			/**
 			* @brief Check if the current stance path includes the passed in stance
			* @param s the stance to check for
			* @return true, if the path contained the stance
			*/
                        bool contains(stance s)
                        {
                                for(int i = 0; i < _off; i++)
                                {
                                        if(_stances[i] == s)
                                                return true;
                                }
                                return false;
                        }
                };
        }

	/**
 	* @brief Motion Status class, this class reports the status of the Motion engine via the Whiteboard
	*
	* This class tells you what 'Stance' the robot is in. This comes from two main variables, the expected_stance is the last 'Stance' that the robot was in and the verified_stance uses the Joint values to verify that the expected_stance is actually correct (within some error). The last option is that the motion engine is currently changing 'Stance' or performing an 'Action', in this case both 'Stance' estimates should be ignored.
	*
	* Examples
	* --------
	*
	* Put examples of what to do with the class 
	*
	*     MOTION_Status_t.get().isRunning() //Is there a motion currently running?
	*     MOTION_Status_t.get().expectedStance() //What was the last 'Stance' that motion got to.
	*     MOTION_Status_t.get().verifiedStance() //What is the actual 'Stance', based on the Joint values (NYI)
	*
 	*/     
	class MOTION_Status
	{

    		/** Is there a motion currently running? */
                BIT_PROPERTY(running) 

    		/** What was the last 'Stance' that motion got to. */
                PROPERTY(int8_t, expected_stance) 

    		/** What is the actual 'Stance', based on the Joint values (NYI) */
                PROPERTY(int8_t, verified_stance) 

		public:

		/**
 		* Constructor
		* @param running sets running
		* @param expected sets the expected_stance
		* @param verified sets the verified_stance
 		*/
		MOTION_Status(bool running, int8_t expected, int8_t verified)
		{
			_running = running;
			_expected_stance = expected;
			_verified_stance = verified;
		}

		/**
 		* Bool wrapper around the bit that stores the 'running' state 
		* @return running property
 		*/
		bool isRunning() { return _running; }

		/**
 		* Motions::stance wrapper for expected_stance 
		* @return expected_stance
 		*/
		Motions::stance expectedStance() { return static_cast<Motions::stance>(_expected_stance); }

		/**
 		* Motions::stance wrapper for verified_stance 
		* @return verified_stance
 		*/
		Motions::stance verifiedStance() { return static_cast<Motions::stance>(_verified_stance); }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
       		/**
 		* String constructor (NYI)
		* @param str the string to parse and use to recreate the this object
		*/
                MOTION_Status(const std::string &str) { from_string(str); }

                /**
 		* Parser for recreating this class (NYI) 
		* @param str the string to parse and use to recreate the this object
		*/
		void from_string(const std::string &str)
                {
			if(str.size() == 0)
				return;
			//NYI
                }

                /**
 		* Description method for pretty printing the values in this class
		* @return pretty printed string
		*/             
                std::string description() 
                {
                        std::stringstream ss;
			ss << "Running: " << isRunning() << ", ";

			ss << "Expected: ";
			Motions::stance e = expectedStance();
			if(e != Motions::NUM_OF_STANCES)
				ss << Motions::stance_strings[e];
			else
				ss << "unknown";	
			ss << ", ";

			ss << "Verified (NYI): ";
			Motions::stance v = verifiedStance();
			if(v != Motions::NUM_OF_STANCES)
				ss << Motions::stance_strings[v];
			else
				ss << "unknown";	

			return ss.str();
                }
#endif // WHITEBOARD_POSTER_STRING_CONVERSION
	};
        
	/**
 	* @brief Motion Command class, this class is used to send commands to a motion module via the Whiteboard
	*
	* Allows commands to be sent to the motion module to change from one 'Stance' to another or to perform an 'Action'. Once complete an 'Action' returns the robot back to its previous 'Stance'. ie. stance::Standing -> action::Kick returns to stance::Standing once complete. Stance changes and Actions can be chained together in the same message to a limit of NUM_OF_STANCES per message sent to the motion module. Stance changes are graph mapped, you can ask to go from stance::Fallen -> stance::Kneeling -> stance::Standing directly or simply ask for stance::Fallen -> stance::Standing. A cost function is used to determine which stance path to use if multiple paths exist. Stiffness is generally managed by the motion files, there are overwriting properties for changing it manually, this is not advised unless you know what you're doing. 
	*
	* Examples
	* --------
	*
	* ### Transition from stance::Kneeling to stance::Standing
	*
	*     MOTION_Commands m; 
	*     m.GoToStance(stance::Kneeling, stance::Standing); //Kneeling to Standing
	*     MOTION_Commands_t.set(m) //Set in Whiteboard
	*
	* ### From stance::Standing perform an action::left_kick
	*
	*     MOTION_Commands m; 
	*     m.DoAction(stance::Standing, action::left_kick); //from standing, do a left kick
	*     MOTION_Commands_t.set(m) //Set in Whiteboard
	*
	* ### Transition from stance::Kneeling to stance::Standing then do an action::left_kick
	*
	*     MOTION_Commands m; 
	*     m.GoToStance(stance::Kneeling, stance::Standing); //transition from Kneeling to Standing
	*     m.DoAction(stance::Standing, action::left_kick); //from standing, do a left kick
	*     MOTION_Commands_t.set(m) //Set in Whiteboard
	*
 	*/     
        class MOTION_Commands
        {
		/** Storage for stance/action queue. Use GoToStance and DoAction, do not modify directly. */
                ARRAY_PROPERTY(u_int8_t, stance_action, JOINT_CHAIN_MAXSIZE) 
		/** used to keep track of how many commands have been issued in the queue, do not modify directly */
                PROPERTY(int8_t, num_of_stance_actions) 

		/** used to determine if the queue needs to be read, if new commands have been added */
                BIT_PROPERTY(stance_action_mask) 
		/** Do not perform the transitions between motions, just go directly to the final joint positions, normally this is a VERY BAD idea. Joints can get stuck and damaged when this is used wrongly. */
                BIT_PROPERTY(ignore_chain) 
		/** Has the ignore_chain flag changed. */
                BIT_PROPERTY(ignore_chain_mask) 
                
		/** Overwrite the head stiffness with the value given. (Stance actions will set the stiffness to the value required in the motion file, these do not need to be called in general) */
                BIT_PROPERTY(head_stiffness) 
		/** Overwrite the body stiffness with the value given. (Stance actions will set the stiffness to the value required in the motion file, these do not need to be called in general)*/
                BIT_PROPERTY(body_stiffness) 

                /* Control bits */
		/** head_stiffness mask */
                BIT_PROPERTY(head_stiffness_mask) 
		/** body_stiffness mask */
                BIT_PROPERTY(body_stiffness_mask) 

        public:                

		/**
 		* Constructor
		* @param head_stiffness sets head stiffness (does not set the mask)
		* @param body_stiffness sets body stiffness (does not set the mask)
		* @param masks sets both head and body stiffness masks (head_stiffness_mask and body_stiffness_mask)
 		*/
                MOTION_Commands(bool head_stiffness = false, bool body_stiffness = false, bool masks = false/*, Motions::stance stance = Motions::Kneeling_stance*/)
                {
                    memset(this, 0, sizeof(*this));
                    _head_stiffness = head_stiffness;
                    _body_stiffness = body_stiffness;
                    _stance_action_mask = false;
                    _ignore_chain_mask = false;
                    _head_stiffness_mask = masks;
                    _body_stiffness_mask = masks;
                    //goto stance stance_action! NYI
//                  _motion_player = motion_player;
                }

        private:

		/**
 		* Recursive cost function for finding motion paths from one stance to another, used privately. (loosly based on Dijkstra's)
		* @param current current path it's evaluating 
		* @param desired the stance it's trying to get to 
		* @param p the path it used to get here
		* @return the path it took to get here
 		*/
                Motions::Stance_Path decide_stance(Motions::stance current, Motions::stance desired, Motions::Stance_Path p)
                {
                        const std::vector<Motions::Stance_Transition> _transitions = Motions::T::create_transitions(); // move this out of here!

                        if(current == desired)
                        {
                                p.reached();
                                return p;                                
                        }

                        Motions::Stance_Path r;
                        r.invalidate();

                        for (unsigned i = 0; i < _transitions.size(); i++)
                        {
                                if(_transitions[i]._s == current && !p.contains(_transitions.at(i)._e)) // I can use this transiton from my current stance
                                {
                                        Motions::Stance_Path p2 = p;
                                        p2.add_stance(_transitions.at(i)._e, _transitions.at(i)._cost, int(i));

                                        Motions::Stance_Path c = decide_stance(_transitions.at(i)._e, desired, p2);
                                        if(!r.valid() || (c.cost() < r.cost() && c.valid()))
                                                r = c;
                                }
                        }

                        return r;
                }


        public:

		/**
 		* Transition from one 'Stance' to another
		* @param current the current stance  
		* @param desired the stance it's trying to get to 
		* @return the time in micro seconds that the motion should take (subject to people keeping the motion times correct in this header)
 		*/
                long GoToStance(Motions::stance current, Motions::stance desired)
                {
                        if(current == Motions::NUM_OF_STANCES || desired == Motions::NUM_OF_STANCES)
                        {
                            fprintf(stderr, "MOTION_Interface.h:    \n"\
                                    "\tGoToStance:                  \n"\
                                    "\t\tGoToStance change aborted! \n"\
                                    "\t\tThe passed variables 'current' and 'desired' must not be equal to Motions::NUM_OF_STANCES. \n"\
                                    "\t\tYou may be trying to set them with expected_stance(). This only provides you with a reference to the last Stance that Motion got to. If this is the first Stance change then expected_stance() is set to Motions::NUM_OF_STANCES and you are getting this error.\n");
                            return -1;
                        }
                        Motions::Stance_Path p;
                        p.add_stance(current, 1);                        
                        p = decide_stance(current, desired, p);
                        p.pretty_print();

                        memcpy(_stance_action, p._stances, sizeof(p._stances));
                        _num_of_stance_actions = static_cast<int8_t>(p.offset());
                        _stance_action_mask = true;

                        return p.cost();
                }

		/**
 		* Perform an 'Action'
		* @param current the current stance  
		* @param a the 'Action' to perform 
		* @return the time in micro seconds that the motion should take (subject to people keeping the motion times correct in this header)
 		*/
                long DoAction(Motions::stance current, Motions::action a)
                {
                        std::map<Motions::action, Motions::Action_Transition> _actions = Motions::A::create_actions(); // move this out of here!
                        Motions::Action_Transition at = _actions[a];

                        Motions::Stance_Path p;
                        p.add_stance(current, 1);

                        p = decide_stance(current, at._s, p); //I would use GoToStance however I need the path step offset
                        memcpy(_stance_action, p._stances, sizeof(p._stances));

                        _stance_action[p.offset()] = static_cast<uint8_t>(Motions::NUM_OF_STANCES) + static_cast<uint8_t>(a);

                        _num_of_stance_actions = static_cast<int8_t>(p.offset()+1);
                        _stance_action_mask = true;

                        return p.cost() + at._cost;
                }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
                /**
 		* String constructor
		* @param str the string to parse and use to recreate the this object
		*/
                MOTION_Commands(const std::string &str) { from_string(str); }

                /**
 		* Parser for recreating this class. Sets head and/or body stiffness, and/or starts a motion. [0|1][,0|1][[,]motion_command] 
		* @param str the string to parse and use to recreate the this object
		*/
                void from_string(const std::string &str)
                {
                        set_ignore_chain_mask(false);
                        
                        using namespace Motions;
                        const char *s = str.c_str();
                        bool want_head_stiffness = isdigit(*s);

                        if (want_head_stiffness)
                        {
                                set_head_stiffness_mask();
                                set_head_stiffness(unsigned(atoi(s)));
                                while (isdigit(*s)) s++;
                        }
                        else set_head_stiffness_mask(false);
                        if (*s == ',' && isdigit(*++s)) // check body stiffness?
                        {
                                set_body_stiffness_mask();
                                set_body_stiffness(unsigned(atoi(s)));
                                while (isdigit(*s)) s++;
                        }
                        else set_body_stiffness_mask(false);

                        if(*s != ',')
                        {
                                set_stance_action_mask(false);
                                return;
                        }
                        const char *ss = s;
                        ss++;
                        const char *p = strchr(ss, ',');
                        set_stance_action_mask(p != NULLPTR);
                        std::string str2(ss);
                        str2 = str2.substr(0, unsigned(p-ss+1));
                        
                        stance s1;
                        MY_CHECK_ENUM(str2.c_str(), s1, Standby_stance);
                        else MY_CHECK_ENUM(str2.c_str(), s1, Kneeling_stance);
                        else MY_CHECK_ENUM(str2.c_str(), s1, Standing_stance);
                        else MY_CHECK_ENUM(str2.c_str(), s1, GoalieSaveLeft_stance);
                        else MY_CHECK_ENUM(str2.c_str(), s1, GoalieSaveRight_stance);
                        else MY_CHECK_ENUM(str2.c_str(), s1, FallenForward_stance);
                        else MY_CHECK_ENUM(str2.c_str(), s1, FallenBack_stance);
                        else s1 = NUM_OF_STANCES;

                        while (*(++s) != ',') ;

                        action a2;
                        MY_CHECK_ENUM(s, a2, Kneeling_wave);
			else MY_CHECK_ENUM(s, a2, Kneeling_quickwave);
			else MY_CHECK_ENUM(s, a2, Kneeling_flagwave);
			else MY_CHECK_ENUM(s, a2, Standing_leftkick);
			else MY_CHECK_ENUM(s, a2, Standing_rightkick);
			else MY_CHECK_ENUM(s, a2, Standing_leftpass);
			else MY_CHECK_ENUM(s, a2, Standing_rightpass);
			else MY_CHECK_ENUM(s, a2, Standing_wave);
                        else a2 = NUM_OF_ACTIONS;

			if(a2 != NUM_OF_ACTIONS)   
			{
				DoAction(s1, a2);
				return;
			}

                        stance s2;
                        MY_CHECK_ENUM(s, s2, Standby_stance);
                        else MY_CHECK_ENUM(s, s2, Kneeling_stance);
                        else MY_CHECK_ENUM(s, s2, Standing_stance);
                        else MY_CHECK_ENUM(s, s2, GoalieSaveLeft_stance);
                        else MY_CHECK_ENUM(s, s2, GoalieSaveRight_stance);
                        else MY_CHECK_ENUM(s, s2, FallenForward_stance);
                        else MY_CHECK_ENUM(s, s2, FallenBack_stance);
                        else s2 = NUM_OF_STANCES;

                        GoToStance(s1, s2);
                }

#pragma clang diagnostic ignored "-Wcovered-switch-default"
#pragma clang diagnostic ignored "-Wunreachable-code"

                /**
 		* Description method for pretty printing the values in this class
		* @return pretty printed string
		*/               
                std::string description() const
                {
                        std::stringstream ss;
                        ss << head_stiffness() << "," << body_stiffness();
                        return ss.str();
                }
#endif // WHITEBOARD_POSTER_STRING_CONVERSION
       };
}

#pragma clang diagnostic pop

#endif //MOTION_Commands_DEFINED
