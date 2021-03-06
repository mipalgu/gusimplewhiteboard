/**
 *  /file guwhiteboardtypelist_generated.h
 *
 *  Created by Carl Lusty in 2018.
 *  Copyright (c) 2013-2020 Carl Lusty and Rene Hexel
 *  All rights reserved.
 */

#ifndef WB_GUWHITEBOARDTYPELIST_GENERATED_H
#define WB_GUWHITEBOARDTYPELIST_GENERATED_H

#include "guWhiteboard_gugenericwhiteboardobject.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wpadded"
#pragma clang diagnostic ignored "-Wc++98-compat"

#undef CPP_WHITEBOARD_NAMESPACE
#define CPP_WHITEBOARD_NAMESPACE guWhiteboard

extern "C"
{
#include "guwhiteboardtypelist_c_generated.h"
}

namespace guWhiteboard {


typedef ::wb_types wb_types;

typedef wb_types WBTypes;


    /** WB Ptr Class: wb_reserved_SubscribeToAllTypes_t @brief Global subscription type. Do not add content to this type, it is for global subscriptions only */ 
    class wb_reserved_SubscribeToAllTypes_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: wb_reserved_SubscribeToAllTypes_t */ 
        wb_reserved_SubscribeToAllTypes_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_wb_reserved_SubscribeToAllTypes_v, true) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: wb_reserved_SubscribeToAllTypes_t */ 
wb_reserved_SubscribeToAllTypes_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_wb_reserved_SubscribeToAllTypes_v, wbd, true) {}

        static const wb_types slot = kwb_wb_reserved_SubscribeToAllTypes_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[wb_reserved_SubscribeToAllTypes_t::slot];
        }
    };

    /** WB Ptr Class: Print_t @brief print to stdout */ 
    class Print_t: public  wb_generic_whiteboard_object<std::string > {
        public: 
        /** Constructor: Print_t */ 
        Print_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(wbd, kwb_Print_v, true) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Print_t */ 
Print_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(value, kwb_Print_v, wbd, true) {}

        static const wb_types slot = kwb_Print_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Print_t::slot];
        }
    };

    /** WB Ptr Class: Say_t @brief speech output message */ 
    class Say_t: public  wb_generic_whiteboard_object<std::string > {
        public: 
        /** Constructor: Say_t */ 
        Say_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(wbd, kwb_Say_v, true) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Say_t */ 
Say_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(value, kwb_Say_v, wbd, true) {}

        static const wb_types slot = kwb_Say_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Say_t::slot];
        }
    };

    /** WB Ptr Class: Speech_t @brief debug speech message */ 
    class Speech_t: public  wb_generic_whiteboard_object<std::string > {
        public: 
        /** Constructor: Speech_t */ 
        Speech_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(wbd, kwb_Speech_v, true) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Speech_t */ 
Speech_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(value, kwb_Speech_v, wbd, true) {}

        static const wb_types slot = kwb_Speech_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Speech_t::slot];
        }
    };

    /** WB Ptr Class: QSay_t @brief speech output message (queued) */ 
    class QSay_t: public  wb_generic_whiteboard_object<std::string > {
        public: 
        /** Constructor: QSay_t */ 
        QSay_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(wbd, kwb_QSay_v, true) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: QSay_t */ 
QSay_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(value, kwb_QSay_v, wbd, true) {}

        static const wb_types slot = kwb_QSay_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[QSay_t::slot];
        }
    };

    /** WB Ptr Class: QSpeech_t @brief debug speech message (queued) */ 
    class QSpeech_t: public  wb_generic_whiteboard_object<std::string > {
        public: 
        /** Constructor: QSpeech_t */ 
        QSpeech_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(wbd, kwb_QSpeech_v, true) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: QSpeech_t */ 
QSpeech_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(value, kwb_QSpeech_v, wbd, true) {}

        static const wb_types slot = kwb_QSpeech_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[QSpeech_t::slot];
        }
    };

    /** WB Ptr Class: SpeechOutput_t @brief toggle, treat speech messages as silent output unless this is turned on */ 
    class SpeechOutput_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: SpeechOutput_t */ 
        SpeechOutput_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_SpeechOutput_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: SpeechOutput_t */ 
SpeechOutput_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_SpeechOutput_v, wbd, false) {}

        static const wb_types slot = kwb_SpeechOutput_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SpeechOutput_t::slot];
        }
    };

    /** WB Ptr Class: GCGameState_t @brief game state as posted by the game controller state machine */ 
    class GCGameState_t: public  wb_generic_whiteboard_object<class GCGameState > {
        public: 
        /** Constructor: GCGameState_t */ 
        GCGameState_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class GCGameState >(wbd, kwb_GCGameState_v, false) {}
        

        static const wb_types slot = kwb_GCGameState_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[GCGameState_t::slot];
        }
    };

    /** WB Ptr Class: SensorsHandSensors_t @brief Posts the sensor information for the hands via the DCM loop (read only) */ 
    class SensorsHandSensors_t: public  wb_generic_whiteboard_object<class SensorsHandSensors > {
        public: 
        /** Constructor: SensorsHandSensors_t */ 
        SensorsHandSensors_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SensorsHandSensors >(wbd, kwb_SensorsHandSensors_v, false) {}
        

        static const wb_types slot = kwb_SensorsHandSensors_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SensorsHandSensors_t::slot];
        }
    };

    /** WB Ptr Class: SensorsHeadSensors_t @brief Posts the sensor information for the head via the DCM loop (read only) */ 
    class SensorsHeadSensors_t: public  wb_generic_whiteboard_object<class SensorsHeadSensors > {
        public: 
        /** Constructor: SensorsHeadSensors_t */ 
        SensorsHeadSensors_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SensorsHeadSensors >(wbd, kwb_SensorsHeadSensors_v, false) {}
        

        static const wb_types slot = kwb_SensorsHeadSensors_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SensorsHeadSensors_t::slot];
        }
    };

    /** WB Ptr Class: MOTION_Commands_t @brief WB interface for sending motion commands */ 
    class MOTION_Commands_t: public  wb_generic_whiteboard_object<class MOTION_Commands > {
        public: 
        /** Constructor: MOTION_Commands_t */ 
        MOTION_Commands_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class MOTION_Commands >(wbd, kwb_MOTION_Commands_v, false) {}
        

        static const wb_types slot = kwb_MOTION_Commands_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[MOTION_Commands_t::slot];
        }
    };

    /** WB Ptr Class: MOTION_Status_t @brief WB interface for checking the status of commands sent */ 
    class MOTION_Status_t: public  wb_generic_whiteboard_object<class MOTION_Status > {
        public: 
        /** Constructor: MOTION_Status_t */ 
        MOTION_Status_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class MOTION_Status >(wbd, kwb_MOTION_Status_v, false) {}
        

        static const wb_types slot = kwb_MOTION_Status_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[MOTION_Status_t::slot];
        }
    };

    /** WB Ptr Class: HAL_HeadTarget_t @brief Used to alter the head position via the DCM */ 
    class HAL_HeadTarget_t: public  wb_generic_whiteboard_object<class HAL_HeadTarget > {
        public: 
        /** Constructor: HAL_HeadTarget_t */ 
        HAL_HeadTarget_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HAL_HeadTarget >(wbd, kwb_HAL_HeadTarget_v, false) {}
        

        static const wb_types slot = kwb_HAL_HeadTarget_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_HeadTarget_t::slot];
        }
    };

    /** WB Ptr Class: SensorsFootSensors_t @brief Posts the sensor information for the feet via the DCM loop (read only) */ 
    class SensorsFootSensors_t: public  wb_generic_whiteboard_object<class SensorsFootSensors > {
        public: 
        /** Constructor: SensorsFootSensors_t */ 
        SensorsFootSensors_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SensorsFootSensors >(wbd, kwb_SensorsFootSensors_v, false) {}
        

        static const wb_types slot = kwb_SensorsFootSensors_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SensorsFootSensors_t::slot];
        }
    };

    /** WB Ptr Class: SensorsBodySensors_t @brief Posts the sensor information for the body via the DCM loop (read only) */ 
    class SensorsBodySensors_t: public  wb_generic_whiteboard_object<class SensorsBodySensors > {
        public: 
        /** Constructor: SensorsBodySensors_t */ 
        SensorsBodySensors_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SensorsBodySensors >(wbd, kwb_SensorsBodySensors_v, false) {}
        

        static const wb_types slot = kwb_SensorsBodySensors_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SensorsBodySensors_t::slot];
        }
    };

    /** WB Ptr Class: SENSORSLedsSensors_t @brief Posts the current LEDs info, can be modified. (read/write) */ 
    class SENSORSLedsSensors_t: public  wb_generic_whiteboard_object<class SENSORSLedsSensors > {
        public: 
        /** Constructor: SENSORSLedsSensors_t */ 
        SENSORSLedsSensors_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SENSORSLedsSensors >(wbd, kwb_SENSORSLedsSensors_v, false) {}
        

        static const wb_types slot = kwb_SENSORSLedsSensors_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SENSORSLedsSensors_t::slot];
        }
    };

    /** WB Ptr Class: SENSORSLegJointTemps_t @brief Posts the temperature of the leg joints via the DCM loop (read only) */ 
    class SENSORSLegJointTemps_t: public  wb_generic_whiteboard_object<class SENSORSLegJointTemps > {
        public: 
        /** Constructor: SENSORSLegJointTemps_t */ 
        SENSORSLegJointTemps_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SENSORSLegJointTemps >(wbd, kwb_SENSORSLegJointTemps_v, false) {}
        

        static const wb_types slot = kwb_SENSORSLegJointTemps_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SENSORSLegJointTemps_t::slot];
        }
    };

    /** WB Ptr Class: SENSORSTorsoJointTemps_t @brief Posts the temperature of the torso joints via the DCM loop (read only) */ 
    class SENSORSTorsoJointTemps_t: public  wb_generic_whiteboard_object<class SENSORSTorsoJointTemps > {
        public: 
        /** Constructor: SENSORSTorsoJointTemps_t */ 
        SENSORSTorsoJointTemps_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SENSORSTorsoJointTemps >(wbd, kwb_SENSORSTorsoJointTemps_v, false) {}
        

        static const wb_types slot = kwb_SENSORSTorsoJointTemps_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SENSORSTorsoJointTemps_t::slot];
        }
    };

    /** WB Ptr Class: SENSORSLegJointSensors_t @brief Posts the joint angles of the legs via the DCM loop (read only) */ 
    class SENSORSLegJointSensors_t: public  wb_generic_whiteboard_object<class SENSORSLegJointSensors > {
        public: 
        /** Constructor: SENSORSLegJointSensors_t */ 
        SENSORSLegJointSensors_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SENSORSLegJointSensors >(wbd, kwb_SENSORSLegJointSensors_v, false) {}
        

        static const wb_types slot = kwb_SENSORSLegJointSensors_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SENSORSLegJointSensors_t::slot];
        }
    };

    /** WB Ptr Class: SENSORSTorsoJointSensors_t @brief Posts the joint angles of the torso via the DCM loop (read only) */ 
    class SENSORSTorsoJointSensors_t: public  wb_generic_whiteboard_object<class SENSORSTorsoJointSensors > {
        public: 
        /** Constructor: SENSORSTorsoJointSensors_t */ 
        SENSORSTorsoJointSensors_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SENSORSTorsoJointSensors >(wbd, kwb_SENSORSTorsoJointSensors_v, false) {}
        

        static const wb_types slot = kwb_SENSORSTorsoJointSensors_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SENSORSTorsoJointSensors_t::slot];
        }
    };

    /** WB Ptr Class: SENSORSSonarSensors_t @brief Posts the sonar readings via the DCM loop (read only) */ 
    class SENSORSSonarSensors_t: public  wb_generic_whiteboard_object<class SENSORSSonarSensors > {
        public: 
        /** Constructor: SENSORSSonarSensors_t */ 
        SENSORSSonarSensors_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SENSORSSonarSensors >(wbd, kwb_SENSORSSonarSensors_v, false) {}
        

        static const wb_types slot = kwb_SENSORSSonarSensors_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SENSORSSonarSensors_t::slot];
        }
    };

    /** WB Ptr Class: FSM_Control_t @brief Suspend, Resume, or Restart a finite state machine (clfsm) */ 
    class FSM_Control_t: public  wb_generic_whiteboard_object<class FSMControlStatus > {
        public: 
        /** Constructor: FSM_Control_t */ 
        FSM_Control_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class FSMControlStatus >(wbd, kwb_FSM_Control_v, true) {}
        

        static const wb_types slot = kwb_FSM_Control_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FSM_Control_t::slot];
        }
    };

    /** WB Ptr Class: FSM_Status_t @brief Current status indicating the suspended state of all FSMs.  The highest bit that is always set is the number of machines plus one. */ 
    class FSM_Status_t: public  wb_generic_whiteboard_object<class FSMControlStatus > {
        public: 
        /** Constructor: FSM_Status_t */ 
        FSM_Status_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class FSMControlStatus >(wbd, kwb_FSM_Status_v, true) {}
        

        static const wb_types slot = kwb_FSM_Status_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FSM_Status_t::slot];
        }
    };

    /** WB Ptr Class: FSM_Names_t @brief Request or return the names of the currently loaded FSMs.  End of list is denoted by an empty string.  Requests need to put an empty string into the first FSM name; */ 
    class FSM_Names_t: public  wb_generic_whiteboard_object<class FSMNames > {
        public: 
        /** Constructor: FSM_Names_t */ 
        FSM_Names_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class FSMNames >(wbd, kwb_FSM_Names_v, true) {}
        

        static const wb_types slot = kwb_FSM_Names_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FSM_Names_t::slot];
        }
    };

    /** WB Ptr Class: SoloTypeExample_t @brief This is an example of a type definition that does not generate anything other than a wb type */ 
    class SoloTypeExample_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: SoloTypeExample_t */ 
        SoloTypeExample_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_SoloTypeExample_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: SoloTypeExample_t */ 
SoloTypeExample_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_SoloTypeExample_v, wbd, false) {}

        static const wb_types slot = kwb_SoloTypeExample_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SoloTypeExample_t::slot];
        }
    };

    /** WB Ptr Class: FilteredGoalSighting_t @brief Class that contains the Kalman filtered goal objects after sighting from vision */ 
    class FilteredGoalSighting_t: public  wb_generic_whiteboard_object<class FilteredArrayOneDimObjects > {
        public: 
        /** Constructor: FilteredGoalSighting_t */ 
        FilteredGoalSighting_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class FilteredArrayOneDimObjects >(wbd, kwb_FilteredGoalSighting_v, false) {}
        

        static const wb_types slot = kwb_FilteredGoalSighting_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FilteredGoalSighting_t::slot];
        }
    };

    /** WB Ptr Class: NAO_State_t @brief Stores the orientation of the robot as well as the chest button status (more to come). */ 
    class NAO_State_t: public  wb_generic_whiteboard_object<class NAO_State > {
        public: 
        /** Constructor: NAO_State_t */ 
        NAO_State_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NAO_State >(wbd, kwb_NAO_State_v, false) {}
        

        static const wb_types slot = kwb_NAO_State_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[NAO_State_t::slot];
        }
    };

    /** WB Ptr Class: UDPRN_t @brief game state notfication from the UDP receiver. */ 
    class UDPRN_t: public  wb_generic_whiteboard_object<class GCGameState > {
        public: 
        /** Constructor: UDPRN_t */ 
        UDPRN_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class GCGameState >(wbd, kwb_UDPRN_v, false) {}
        

        static const wb_types slot = kwb_UDPRN_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[UDPRN_t::slot];
        }
    };

    /** WB Ptr Class: PlayerNumber_t @brief what player number is this robot wearing at RoboCup in its back, retrieved from data/playernumber and posted by the UDPreceiver */ 
    class PlayerNumber_t: public  wb_generic_whiteboard_object<int8_t > {
        public: 
        /** Constructor: PlayerNumber_t */ 
        PlayerNumber_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(wbd, kwb_PlayerNumber_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: PlayerNumber_t */ 
PlayerNumber_t(int8_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(value, kwb_PlayerNumber_v, wbd, false) {}

        static const wb_types slot = kwb_PlayerNumber_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[PlayerNumber_t::slot];
        }
    };

    /** WB Ptr Class: ManuallyPenalized_t @brief what player number is this robot wearing at RoboCup in its back whn manually penalized, from GameController FSM sent to the UDPreceiver to forward to the JAVA referee */ 
    class ManuallyPenalized_t: public  wb_generic_whiteboard_object<int8_t > {
        public: 
        /** Constructor: ManuallyPenalized_t */ 
        ManuallyPenalized_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(wbd, kwb_ManuallyPenalized_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: ManuallyPenalized_t */ 
ManuallyPenalized_t(int8_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(value, kwb_ManuallyPenalized_v, wbd, false) {}

        static const wb_types slot = kwb_ManuallyPenalized_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[ManuallyPenalized_t::slot];
        }
    };

    /** WB Ptr Class: VisionControl_t @brief Used to set various paramaters of guvision */ 
    class VisionControl_t: public  wb_generic_whiteboard_object<class VisionControlStatus > {
        public: 
        /** Constructor: VisionControl_t */ 
        VisionControl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionControlStatus >(wbd, kwb_VisionControl_v, false) {}
        

        static const wb_types slot = kwb_VisionControl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionControl_t::slot];
        }
    };

    /** WB Ptr Class: VisionStatus_t @brief Posted by guvision once per pipeline iteration to report various paramaters */ 
    class VisionStatus_t: public  wb_generic_whiteboard_object<class VisionControlStatus > {
        public: 
        /** Constructor: VisionStatus_t */ 
        VisionStatus_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionControlStatus >(wbd, kwb_VisionStatus_v, false) {}
        

        static const wb_types slot = kwb_VisionStatus_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionStatus_t::slot];
        }
    };

    /** WB Ptr Class: FFTStatus_t @brief stereo channel RMS and list of dominant frequencies from FFT */ 
    class FFTStatus_t: public  wb_generic_whiteboard_object<class FFTStatus > {
        public: 
        /** Constructor: FFTStatus_t */ 
        FFTStatus_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class FFTStatus >(wbd, kwb_FFTStatus_v, false) {}
        

        static const wb_types slot = kwb_FFTStatus_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FFTStatus_t::slot];
        }
    };

    /** WB Ptr Class: FSOsighting_t @brief Class that contains the Karman filtered  SONAR objects after a sighting */ 
    class FSOsighting_t: public  wb_generic_whiteboard_object<class FilteredArrayOneDimSonar > {
        public: 
        /** Constructor: FSOsighting_t */ 
        FSOsighting_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class FilteredArrayOneDimSonar >(wbd, kwb_FSOsighting_v, false) {}
        

        static const wb_types slot = kwb_FSOsighting_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FSOsighting_t::slot];
        }
    };

    /** WB Ptr Class: TopParticles_t @brief Class that contains the top particles for possible robot positions */ 
    class TopParticles_t: public  wb_generic_whiteboard_object<class TopParticles > {
        public: 
        /** Constructor: TopParticles_t */ 
        TopParticles_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class TopParticles >(wbd, kwb_TopParticles_v, false) {}
        

        static const wb_types slot = kwb_TopParticles_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TopParticles_t::slot];
        }
    };

    /** WB Ptr Class: FilteredBallSighting_t @brief Class that contains the Kalman filtered top and bottom ball objects after sighting from vision */ 
    class FilteredBallSighting_t: public  wb_generic_whiteboard_object<class FilteredArrayBallSightings > {
        public: 
        /** Constructor: FilteredBallSighting_t */ 
        FilteredBallSighting_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class FilteredArrayBallSightings >(wbd, kwb_FilteredBallSighting_v, false) {}
        

        static const wb_types slot = kwb_FilteredBallSighting_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FilteredBallSighting_t::slot];
        }
    };

    /** WB Ptr Class: PF_ControlStatus_Modes_t @brief what to post in the whiteboard to cause the Particle Filetr to reset, but running has no effect, it is the PF response */ 
    class PF_ControlStatus_Modes_t: public  wb_generic_whiteboard_object<int32_t > {
        public: 
        /** Constructor: PF_ControlStatus_Modes_t */ 
        PF_ControlStatus_Modes_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int32_t >(wbd, kwb_PF_ControlStatus_Modes_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: PF_ControlStatus_Modes_t */ 
PF_ControlStatus_Modes_t(int32_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int32_t >(value, kwb_PF_ControlStatus_Modes_v, wbd, false) {}

        static const wb_types slot = kwb_PF_ControlStatus_Modes_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[PF_ControlStatus_Modes_t::slot];
        }
    };

    /** WB Ptr Class: WEBOTS_NXT_bridge_t @brief WIP Class that contains a command for WEBOTS or NXt trough a bridge */ 
    class WEBOTS_NXT_bridge_t: public  wb_generic_whiteboard_object<class WEBOTS_NXT_bridge > {
        public: 
        /** Constructor: WEBOTS_NXT_bridge_t */ 
        WEBOTS_NXT_bridge_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class WEBOTS_NXT_bridge >(wbd, kwb_WEBOTS_NXT_bridge_v, false) {}
        

        static const wb_types slot = kwb_WEBOTS_NXT_bridge_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WEBOTS_NXT_bridge_t::slot];
        }
    };

    /** WB Ptr Class: WEBOTS_NXT_encoders_t @brief Class that contains data from encoders all for WEBOTS or NXt trough a bridge */ 
    class WEBOTS_NXT_encoders_t: public  wb_generic_whiteboard_object<class WEBOTS_NXT_encoders > {
        public: 
        /** Constructor: WEBOTS_NXT_encoders_t */ 
        WEBOTS_NXT_encoders_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class WEBOTS_NXT_encoders >(wbd, kwb_WEBOTS_NXT_encoders_v, false) {}
        

        static const wb_types slot = kwb_WEBOTS_NXT_encoders_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WEBOTS_NXT_encoders_t::slot];
        }
    };

    /** WB Ptr Class: WEBOTS_NXT_camera_t @brief Class that contains data from cameta channels of  WEBOTS trough a bridge */ 
    class WEBOTS_NXT_camera_t: public  wb_generic_whiteboard_object<class WEBOTS_NXT_camera > {
        public: 
        /** Constructor: WEBOTS_NXT_camera_t */ 
        WEBOTS_NXT_camera_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class WEBOTS_NXT_camera >(wbd, kwb_WEBOTS_NXT_camera_v, false) {}
        

        static const wb_types slot = kwb_WEBOTS_NXT_camera_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WEBOTS_NXT_camera_t::slot];
        }
    };

    /** WB Ptr Class: WEBOTS_NXT_walk_isRunning_t @brief Class that contains boolean for checking if motion walks is running in  WEBOTS trough a bridge */ 
    class WEBOTS_NXT_walk_isRunning_t: public  wb_generic_whiteboard_object<class WEBOTS_NXT_walk_isRunning > {
        public: 
        /** Constructor: WEBOTS_NXT_walk_isRunning_t */ 
        WEBOTS_NXT_walk_isRunning_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class WEBOTS_NXT_walk_isRunning >(wbd, kwb_WEBOTS_NXT_walk_isRunning_v, false) {}
        

        static const wb_types slot = kwb_WEBOTS_NXT_walk_isRunning_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WEBOTS_NXT_walk_isRunning_t::slot];
        }
    };

    /** WB Ptr Class: WEBOTS_NXT_deadReakoning_walk_t @brief Class for dead reckoning walks in  WEBOTS trough a bridge */ 
    class WEBOTS_NXT_deadReakoning_walk_t: public  wb_generic_whiteboard_object<class WEBOTS_NXT_deadReakoning_walk > {
        public: 
        /** Constructor: WEBOTS_NXT_deadReakoning_walk_t */ 
        WEBOTS_NXT_deadReakoning_walk_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class WEBOTS_NXT_deadReakoning_walk >(wbd, kwb_WEBOTS_NXT_deadReakoning_walk_v, false) {}
        

        static const wb_types slot = kwb_WEBOTS_NXT_deadReakoning_walk_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WEBOTS_NXT_deadReakoning_walk_t::slot];
        }
    };

    /** WB Ptr Class: WEBOTS_NXT_colorLine_walk_t @brief Class for commands followign a line in  WEBOTS trough a bridge */ 
    class WEBOTS_NXT_colorLine_walk_t: public  wb_generic_whiteboard_object<class WEBOTS_NXT_colorLine_walk > {
        public: 
        /** Constructor: WEBOTS_NXT_colorLine_walk_t */ 
        WEBOTS_NXT_colorLine_walk_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class WEBOTS_NXT_colorLine_walk >(wbd, kwb_WEBOTS_NXT_colorLine_walk_v, false) {}
        

        static const wb_types slot = kwb_WEBOTS_NXT_colorLine_walk_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WEBOTS_NXT_colorLine_walk_t::slot];
        }
    };

    /** WB Ptr Class: WEBOTS_NXT_gridMotions_t @brief Class for walks on a grid of colored lines for WEBOTS trough a bridge */ 
    class WEBOTS_NXT_gridMotions_t: public  wb_generic_whiteboard_object<class WEBOTS_NXT_gridMotions > {
        public: 
        /** Constructor: WEBOTS_NXT_gridMotions_t */ 
        WEBOTS_NXT_gridMotions_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class WEBOTS_NXT_gridMotions >(wbd, kwb_WEBOTS_NXT_gridMotions_v, false) {}
        

        static const wb_types slot = kwb_WEBOTS_NXT_gridMotions_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WEBOTS_NXT_gridMotions_t::slot];
        }
    };

    /** WB Ptr Class: VisionBall_t @brief Class that reports the ball that vision sees. */ 
    class VisionBall_t: public  wb_generic_whiteboard_object<class VisionBall > {
        public: 
        /** Constructor: VisionBall_t */ 
        VisionBall_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionBall >(wbd, kwb_VisionBall_v, false) {}
        

        static const wb_types slot = kwb_VisionBall_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionBall_t::slot];
        }
    };

    /** WB Ptr Class: VisionGoals_t @brief Class that reports the goals that vision sees. */ 
    class VisionGoals_t: public  wb_generic_whiteboard_object<class VisionGoals > {
        public: 
        /** Constructor: VisionGoals_t */ 
        VisionGoals_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionGoals >(wbd, kwb_VisionGoals_v, false) {}
        

        static const wb_types slot = kwb_VisionGoals_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionGoals_t::slot];
        }
    };

    /** WB Ptr Class: WalkData_t @brief Class to report Walk Data. */ 
    class WalkData_t: public  wb_generic_whiteboard_object<class WalkData > {
        public: 
        /** Constructor: WalkData_t */ 
        WalkData_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class WalkData >(wbd, kwb_WalkData_v, false) {}
        

        static const wb_types slot = kwb_WalkData_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WalkData_t::slot];
        }
    };

    /** WB Ptr Class: TeleoperationControlStatus_t @brief Class for sending teleoperation commands */ 
    class TeleoperationControlStatus_t: public  wb_generic_whiteboard_object<class TeleoperationControlStatus > {
        public: 
        /** Constructor: TeleoperationControlStatus_t */ 
        TeleoperationControlStatus_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class TeleoperationControlStatus >(wbd, kwb_TeleoperationControlStatus_v, false) {}
        

        static const wb_types slot = kwb_TeleoperationControlStatus_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TeleoperationControlStatus_t::slot];
        }
    };

    /** WB Ptr Class: TeleoperationConnection_t @brief Integer indication which remote whiteboard teleoperation instructions are on */ 
    class TeleoperationConnection_t: public  wb_generic_whiteboard_object<int8_t > {
        public: 
        /** Constructor: TeleoperationConnection_t */ 
        TeleoperationConnection_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(wbd, kwb_TeleoperationConnection_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: TeleoperationConnection_t */ 
TeleoperationConnection_t(int8_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(value, kwb_TeleoperationConnection_v, wbd, false) {}

        static const wb_types slot = kwb_TeleoperationConnection_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TeleoperationConnection_t::slot];
        }
    };

    /** WB Ptr Class: UDPWBNumber_t @brief ID number being used to broadcast udp whiteboard */ 
    class UDPWBNumber_t: public  wb_generic_whiteboard_object<int8_t > {
        public: 
        /** Constructor: UDPWBNumber_t */ 
        UDPWBNumber_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(wbd, kwb_UDPWBNumber_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: UDPWBNumber_t */ 
UDPWBNumber_t(int8_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(value, kwb_UDPWBNumber_v, wbd, false) {}

        static const wb_types slot = kwb_UDPWBNumber_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[UDPWBNumber_t::slot];
        }
    };

    /** WB Ptr Class: WEBOTS_NXT_bumper_t @brief Class that contains data from 2 rouch sensors in an NXT bumper by the bridge */ 
    class WEBOTS_NXT_bumper_t: public  wb_generic_whiteboard_object<class WEBOTS_NXT_bumper > {
        public: 
        /** Constructor: WEBOTS_NXT_bumper_t */ 
        WEBOTS_NXT_bumper_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class WEBOTS_NXT_bumper >(wbd, kwb_WEBOTS_NXT_bumper_v, false) {}
        

        static const wb_types slot = kwb_WEBOTS_NXT_bumper_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WEBOTS_NXT_bumper_t::slot];
        }
    };

    /** WB Ptr Class: WEBOTS_NXT_vector_bridge_t @brief Class that will define actuators for the Diferential motor bridge */ 
    class WEBOTS_NXT_vector_bridge_t: public  wb_generic_whiteboard_object<class WEBOTS_NXT_vector_bridge > {
        public: 
        /** Constructor: WEBOTS_NXT_vector_bridge_t */ 
        WEBOTS_NXT_vector_bridge_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class WEBOTS_NXT_vector_bridge >(wbd, kwb_WEBOTS_NXT_vector_bridge_v, false) {}
        

        static const wb_types slot = kwb_WEBOTS_NXT_vector_bridge_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WEBOTS_NXT_vector_bridge_t::slot];
        }
    };

    /** WB Ptr Class: TopVisionLines_t @brief Class that reports the lines that vision sees in the top camera. */ 
    class TopVisionLines_t: public  wb_generic_whiteboard_object<class VisionLines > {
        public: 
        /** Constructor: TopVisionLines_t */ 
        TopVisionLines_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionLines >(wbd, kwb_TopVisionLines_v, false) {}
        

        static const wb_types slot = kwb_TopVisionLines_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TopVisionLines_t::slot];
        }
    };

    /** WB Ptr Class: BottomVisionLines_t @brief Class that reports the lines that vision sees in the bottom camera. */ 
    class BottomVisionLines_t: public  wb_generic_whiteboard_object<class VisionLines > {
        public: 
        /** Constructor: BottomVisionLines_t */ 
        BottomVisionLines_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionLines >(wbd, kwb_BottomVisionLines_v, false) {}
        

        static const wb_types slot = kwb_BottomVisionLines_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[BottomVisionLines_t::slot];
        }
    };

    /** WB Ptr Class: DifferentialRobotStatus_t @brief Class that reads differential robot status */ 
    class DifferentialRobotStatus_t: public  wb_generic_whiteboard_object<class DifferentialRobotControlStatus > {
        public: 
        /** Constructor: DifferentialRobotStatus_t */ 
        DifferentialRobotStatus_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class DifferentialRobotControlStatus >(wbd, kwb_DifferentialRobotStatus_v, false) {}
        

        static const wb_types slot = kwb_DifferentialRobotStatus_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[DifferentialRobotStatus_t::slot];
        }
    };

    /** WB Ptr Class: DifferentialRobotControl_t @brief Class that sends commands to the robot from the whiteboard */ 
    class DifferentialRobotControl_t: public  wb_generic_whiteboard_object<class DifferentialRobotControlStatus > {
        public: 
        /** Constructor: DifferentialRobotControl_t */ 
        DifferentialRobotControl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class DifferentialRobotControlStatus >(wbd, kwb_DifferentialRobotControl_v, false) {}
        

        static const wb_types slot = kwb_DifferentialRobotControl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[DifferentialRobotControl_t::slot];
        }
    };

    /** WB Ptr Class: XEyesPos_t @brief Just a hook for an xeyes interface */ 
    class XEyesPos_t: public  wb_generic_whiteboard_object<class Point2D > {
        public: 
        /** Constructor: XEyesPos_t */ 
        XEyesPos_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Point2D >(wbd, kwb_XEyesPos_v, true) {}
        

        static const wb_types slot = kwb_XEyesPos_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[XEyesPos_t::slot];
        }
    };

    /** WB Ptr Class: VisionFace_t @brief Face seen by Vision */ 
    class VisionFace_t: public  wb_generic_whiteboard_object<std::vector<int> > {
        public: 
        /** Constructor: VisionFace_t */ 
        VisionFace_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::vector<int> >(wbd, kwb_VisionFace_v, true) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: VisionFace_t */ 
VisionFace_t(std::vector<int> value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::vector<int> >(value, kwb_VisionFace_v, wbd, true) {}

        static const wb_types slot = kwb_VisionFace_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionFace_t::slot];
        }
    };

    /** WB Ptr Class: Draw_t @brief Used by the half made GUDraw module in posix */ 
    class Draw_t: public  wb_generic_whiteboard_object<std::string > {
        public: 
        /** Constructor: Draw_t */ 
        Draw_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(wbd, kwb_Draw_v, true) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Draw_t */ 
Draw_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(value, kwb_Draw_v, wbd, true) {}

        static const wb_types slot = kwb_Draw_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Draw_t::slot];
        }
    };

    /** WB Ptr Class: FSM_States_t @brief Idempotent Message publicising the state -about to be executed- (0-254) of up-to the first 128 machines (0-127).  State -INVALDMACHINE- (255) is posted for MachineIDs that are not currently loaded. */ 
    class FSM_States_t: public  wb_generic_whiteboard_object<class FSMState > {
        public: 
        /** Constructor: FSM_States_t */ 
        FSM_States_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class FSMState >(wbd, kwb_FSM_States_v, true) {}
        

        static const wb_types slot = kwb_FSM_States_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FSM_States_t::slot];
        }
    };

    /** WB Ptr Class: Giraff_Interface_Status_t @brief Serial interface for the main motor and sensor board of the giraff */ 
    class Giraff_Interface_Status_t: public  wb_generic_whiteboard_object<class Giraff_MainSerialInterface > {
        public: 
        /** Constructor: Giraff_Interface_Status_t */ 
        Giraff_Interface_Status_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Giraff_MainSerialInterface >(wbd, kwb_Giraff_Interface_Status_v, false) {}
        

        static const wb_types slot = kwb_Giraff_Interface_Status_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Giraff_Interface_Status_t::slot];
        }
    };

    /** WB Ptr Class: Giraff_Interface_Command_t @brief Serial interface for the main motor and sensor board of the giraff */ 
    class Giraff_Interface_Command_t: public  wb_generic_whiteboard_object<class Giraff_MainSerialInterface > {
        public: 
        /** Constructor: Giraff_Interface_Command_t */ 
        Giraff_Interface_Command_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Giraff_MainSerialInterface >(wbd, kwb_Giraff_Interface_Command_v, false) {}
        

        static const wb_types slot = kwb_Giraff_Interface_Command_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Giraff_Interface_Command_t::slot];
        }
    };

    /** WB Ptr Class: NXT_Status_t @brief Contains sensor data as well as motor encoder data from the objects attached to an NXT */ 
    class NXT_Status_t: public  wb_generic_whiteboard_object<class NXT_Interface > {
        public: 
        /** Constructor: NXT_Status_t */ 
        NXT_Status_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NXT_Interface >(wbd, kwb_NXT_Status_v, false) {}
        

        static const wb_types slot = kwb_NXT_Status_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[NXT_Status_t::slot];
        }
    };

    /** WB Ptr Class: NXT_Command_t @brief Can issue commands to set the motors of an NXT and reset the encoders */ 
    class NXT_Command_t: public  wb_generic_whiteboard_object<class NXT_Interface > {
        public: 
        /** Constructor: NXT_Command_t */ 
        NXT_Command_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NXT_Interface >(wbd, kwb_NXT_Command_v, false) {}
        

        static const wb_types slot = kwb_NXT_Command_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[NXT_Command_t::slot];
        }
    };

    /** WB Ptr Class: APM_Status_t @brief Contains sensor data from an APM */ 
    class APM_Status_t: public  wb_generic_whiteboard_object<class APM_Interface > {
        public: 
        /** Constructor: APM_Status_t */ 
        APM_Status_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class APM_Interface >(wbd, kwb_APM_Status_v, false) {}
        

        static const wb_types slot = kwb_APM_Status_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[APM_Status_t::slot];
        }
    };

    /** WB Ptr Class: APM_Command_t @brief Can issue commands to an APM */ 
    class APM_Command_t: public  wb_generic_whiteboard_object<class APM_Interface > {
        public: 
        /** Constructor: APM_Command_t */ 
        APM_Command_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class APM_Interface >(wbd, kwb_APM_Command_v, false) {}
        

        static const wb_types slot = kwb_APM_Command_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[APM_Command_t::slot];
        }
    };

    /** WB Ptr Class: REMOVED3_t @brief Old class, can be removed from tsl file during the next wb version bump */ 
    class REMOVED3_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: REMOVED3_t */ 
        REMOVED3_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_REMOVED3_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: REMOVED3_t */ 
REMOVED3_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_REMOVED3_v, wbd, false) {}

        static const wb_types slot = kwb_REMOVED3_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[REMOVED3_t::slot];
        }
    };

    /** WB Ptr Class: REMOVED4_t @brief Old class, can be removed from tsl file during the next wb version bump */ 
    class REMOVED4_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: REMOVED4_t */ 
        REMOVED4_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_REMOVED4_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: REMOVED4_t */ 
REMOVED4_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_REMOVED4_v, wbd, false) {}

        static const wb_types slot = kwb_REMOVED4_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[REMOVED4_t::slot];
        }
    };

    /** WB Ptr Class: CBall_t @brief Status Message for the color of the ball */ 
    class CBall_t: public  wb_generic_whiteboard_object<int8_t > {
        public: 
        /** Constructor: CBall_t */ 
        CBall_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(wbd, kwb_CBall_v, true) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: CBall_t */ 
CBall_t(int8_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(value, kwb_CBall_v, wbd, true) {}

        static const wb_types slot = kwb_CBall_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[CBall_t::slot];
        }
    };

    /** WB Ptr Class: OculusPrime_Command_t @brief Class used to control the Oculus Prime movements, controls etc. */ 
    class OculusPrime_Command_t: public  wb_generic_whiteboard_object<class OculusPrimeInterface > {
        public: 
        /** Constructor: OculusPrime_Command_t */ 
        OculusPrime_Command_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class OculusPrimeInterface >(wbd, kwb_OculusPrime_Command_v, false) {}
        

        static const wb_types slot = kwb_OculusPrime_Command_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[OculusPrime_Command_t::slot];
        }
    };

    /** WB Ptr Class: Input3D_t @brief for 3d input devices such as the leap or a joystick */ 
    class Input3D_t: public  wb_generic_whiteboard_object<class Input3D > {
        public: 
        /** Constructor: Input3D_t */ 
        Input3D_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Input3D >(wbd, kwb_Input3D_v, false) {}
        

        static const wb_types slot = kwb_Input3D_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Input3D_t::slot];
        }
    };

    /** WB Ptr Class: Oculus_Prime_Command_t @brief Serial interface for the main motor and sensor board of the oculus prime */ 
    class Oculus_Prime_Command_t: public  wb_generic_whiteboard_object<class Oculus_PrimeSerialInterface > {
        public: 
        /** Constructor: Oculus_Prime_Command_t */ 
        Oculus_Prime_Command_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Oculus_PrimeSerialInterface >(wbd, kwb_Oculus_Prime_Command_v, false) {}
        

        static const wb_types slot = kwb_Oculus_Prime_Command_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Oculus_Prime_Command_t::slot];
        }
    };

    /** WB Ptr Class: IOPins_t @brief Arduino-style I/O pins */ 
    class IOPins_t: public  wb_generic_whiteboard_object<class IOPins > {
        public: 
        /** Constructor: IOPins_t */ 
        IOPins_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class IOPins >(wbd, kwb_IOPins_v, false) {}
        

        static const wb_types slot = kwb_IOPins_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[IOPins_t::slot];
        }
    };

    /** WB Ptr Class: NXT_Two_Touch_Status_t @brief Class that reads NXT's two buttons */ 
    class NXT_Two_Touch_Status_t: public  wb_generic_whiteboard_object<class NXT_Two_Touch_Status > {
        public: 
        /** Constructor: NXT_Two_Touch_Status_t */ 
        NXT_Two_Touch_Status_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NXT_Two_Touch_Status >(wbd, kwb_NXT_Two_Touch_Status_v, false) {}
        

        static const wb_types slot = kwb_NXT_Two_Touch_Status_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[NXT_Two_Touch_Status_t::slot];
        }
    };

    /** WB Ptr Class: NXT_Sound_Control_t @brief Class that produces NXT's sounds */ 
    class NXT_Sound_Control_t: public  wb_generic_whiteboard_object<class NXT_Sound_Control > {
        public: 
        /** Constructor: NXT_Sound_Control_t */ 
        NXT_Sound_Control_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NXT_Sound_Control >(wbd, kwb_NXT_Sound_Control_v, false) {}
        

        static const wb_types slot = kwb_NXT_Sound_Control_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[NXT_Sound_Control_t::slot];
        }
    };

    /** WB Ptr Class: NXT_Lights_Control_t @brief Class that places power in NXT's for lights */ 
    class NXT_Lights_Control_t: public  wb_generic_whiteboard_object<class NXT_Lights_Control > {
        public: 
        /** Constructor: NXT_Lights_Control_t */ 
        NXT_Lights_Control_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NXT_Lights_Control >(wbd, kwb_NXT_Lights_Control_v, false) {}
        

        static const wb_types slot = kwb_NXT_Lights_Control_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[NXT_Lights_Control_t::slot];
        }
    };

    /** WB Ptr Class: Clocks_t @brief Class for keeping track of time */ 
    class Clocks_t: public  wb_generic_whiteboard_object<class Clocks > {
        public: 
        /** Constructor: Clocks_t */ 
        Clocks_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Clocks >(wbd, kwb_Clocks_v, false) {}
        

        static const wb_types slot = kwb_Clocks_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Clocks_t::slot];
        }
    };

    /** WB Ptr Class: Channels_t @brief UPPAAL-Style synchronisation channels */ 
    class Channels_t: public  wb_generic_whiteboard_object<class Channels > {
        public: 
        /** Constructor: Channels_t */ 
        Channels_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Channels >(wbd, kwb_Channels_v, false) {}
        

        static const wb_types slot = kwb_Channels_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Channels_t::slot];
        }
    };

    /** WB Ptr Class: SwitchSubsumption_t @brief Uncommented */ 
    class SwitchSubsumption_t: public  wb_generic_whiteboard_object<class SwitchSubsumption > {
        public: 
        /** Constructor: SwitchSubsumption_t */ 
        SwitchSubsumption_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SwitchSubsumption >(wbd, kwb_SwitchSubsumption_v, false) {}
        

        static const wb_types slot = kwb_SwitchSubsumption_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SwitchSubsumption_t::slot];
        }
    };

    /** WB Ptr Class: TotoDoingMotion_t @brief Uncommented */ 
    class TotoDoingMotion_t: public  wb_generic_whiteboard_object<class TotoDoingMotion > {
        public: 
        /** Constructor: TotoDoingMotion_t */ 
        TotoDoingMotion_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class TotoDoingMotion >(wbd, kwb_TotoDoingMotion_v, false) {}
        

        static const wb_types slot = kwb_TotoDoingMotion_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TotoDoingMotion_t::slot];
        }
    };

    /** WB Ptr Class: Count_t @brief Uncommented */ 
    class Count_t: public  wb_generic_whiteboard_object<class Count > {
        public: 
        /** Constructor: Count_t */ 
        Count_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Count >(wbd, kwb_Count_v, false) {}
        

        static const wb_types slot = kwb_Count_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Count_t::slot];
        }
    };

    /** WB Ptr Class: GreenEWon_t @brief status of the EWgreen light */ 
    class GreenEWon_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: GreenEWon_t */ 
        GreenEWon_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_GreenEWon_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: GreenEWon_t */ 
GreenEWon_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_GreenEWon_v, wbd, false) {}

        static const wb_types slot = kwb_GreenEWon_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[GreenEWon_t::slot];
        }
    };

    /** WB Ptr Class: WarnEW_t @brief status of the recommendaiton of the EW light */ 
    class WarnEW_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: WarnEW_t */ 
        WarnEW_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_WarnEW_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: WarnEW_t */ 
WarnEW_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_WarnEW_v, wbd, false) {}

        static const wb_types slot = kwb_WarnEW_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WarnEW_t::slot];
        }
    };

    /** WB Ptr Class: TimeGTthirty_t @brief status of the timer with respect to 30 */ 
    class TimeGTthirty_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: TimeGTthirty_t */ 
        TimeGTthirty_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_TimeGTthirty_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: TimeGTthirty_t */ 
TimeGTthirty_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_TimeGTthirty_v, wbd, false) {}

        static const wb_types slot = kwb_TimeGTthirty_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TimeGTthirty_t::slot];
        }
    };

    /** WB Ptr Class: AmberEWon_t @brief status of the EWamber light */ 
    class AmberEWon_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: AmberEWon_t */ 
        AmberEWon_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_AmberEWon_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: AmberEWon_t */ 
AmberEWon_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_AmberEWon_v, wbd, false) {}

        static const wb_types slot = kwb_AmberEWon_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[AmberEWon_t::slot];
        }
    };

    /** WB Ptr Class: TurnRedEW_t @brief second status of the recommendaiton of the EW light */ 
    class TurnRedEW_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: TurnRedEW_t */ 
        TurnRedEW_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_TurnRedEW_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: TurnRedEW_t */ 
TurnRedEW_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_TurnRedEW_v, wbd, false) {}

        static const wb_types slot = kwb_TurnRedEW_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TurnRedEW_t::slot];
        }
    };

    /** WB Ptr Class: TimeGTfive_t @brief status of the timer with respect to 5 */ 
    class TimeGTfive_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: TimeGTfive_t */ 
        TimeGTfive_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_TimeGTfive_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: TimeGTfive_t */ 
TimeGTfive_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_TimeGTfive_v, wbd, false) {}

        static const wb_types slot = kwb_TimeGTfive_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TimeGTfive_t::slot];
        }
    };

    /** WB Ptr Class: RedEWon_t @brief status of the EWred light */ 
    class RedEWon_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: RedEWon_t */ 
        RedEWon_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_RedEWon_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: RedEWon_t */ 
RedEWon_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_RedEWon_v, wbd, false) {}

        static const wb_types slot = kwb_RedEWon_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[RedEWon_t::slot];
        }
    };

    /** WB Ptr Class: GreenNSon_t @brief status of the NSgreen light */ 
    class GreenNSon_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: GreenNSon_t */ 
        GreenNSon_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_GreenNSon_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: GreenNSon_t */ 
GreenNSon_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_GreenNSon_v, wbd, false) {}

        static const wb_types slot = kwb_GreenNSon_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[GreenNSon_t::slot];
        }
    };

    /** WB Ptr Class: WarnNS_t @brief status of the recommendaiton of the NS light */ 
    class WarnNS_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: WarnNS_t */ 
        WarnNS_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_WarnNS_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: WarnNS_t */ 
WarnNS_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_WarnNS_v, wbd, false) {}

        static const wb_types slot = kwb_WarnNS_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WarnNS_t::slot];
        }
    };

    /** WB Ptr Class: AmberNSon_t @brief status of the NSamber light */ 
    class AmberNSon_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: AmberNSon_t */ 
        AmberNSon_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_AmberNSon_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: AmberNSon_t */ 
AmberNSon_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_AmberNSon_v, wbd, false) {}

        static const wb_types slot = kwb_AmberNSon_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[AmberNSon_t::slot];
        }
    };

    /** WB Ptr Class: TurnRedNS_t @brief second status of the recommendaiton of the NS light */ 
    class TurnRedNS_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: TurnRedNS_t */ 
        TurnRedNS_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_TurnRedNS_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: TurnRedNS_t */ 
TurnRedNS_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_TurnRedNS_v, wbd, false) {}

        static const wb_types slot = kwb_TurnRedNS_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TurnRedNS_t::slot];
        }
    };

    /** WB Ptr Class: RedNSon_t @brief status of the NSred light */ 
    class RedNSon_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: RedNSon_t */ 
        RedNSon_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_RedNSon_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: RedNSon_t */ 
RedNSon_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_RedNSon_v, wbd, false) {}

        static const wb_types slot = kwb_RedNSon_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[RedNSon_t::slot];
        }
    };

    /** WB Ptr Class: TimerReset_t @brief flag to reset timer */ 
    class TimerReset_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: TimerReset_t */ 
        TimerReset_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_TimerReset_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: TimerReset_t */ 
TimerReset_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_TimerReset_v, wbd, false) {}

        static const wb_types slot = kwb_TimerReset_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TimerReset_t::slot];
        }
    };

    /** WB Ptr Class: SLOT_UNUSED_t @brief IoT message removed, feel free to use this slot */ 
    class SLOT_UNUSED_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: SLOT_UNUSED_t */ 
        SLOT_UNUSED_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_SLOT_UNUSED_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: SLOT_UNUSED_t */ 
SLOT_UNUSED_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_SLOT_UNUSED_v, wbd, false) {}

        static const wb_types slot = kwb_SLOT_UNUSED_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SLOT_UNUSED_t::slot];
        }
    };

    /** WB Ptr Class: CarSensorPressed_t @brief flag to indicate status of sensor for cars */ 
    class CarSensorPressed_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: CarSensorPressed_t */ 
        CarSensorPressed_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_CarSensorPressed_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: CarSensorPressed_t */ 
CarSensorPressed_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_CarSensorPressed_v, wbd, false) {}

        static const wb_types slot = kwb_CarSensorPressed_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[CarSensorPressed_t::slot];
        }
    };

    /** WB Ptr Class: SwitchSubsumptionTrafficLights_t @brief no comment entered */ 
    class SwitchSubsumptionTrafficLights_t: public  wb_generic_whiteboard_object<class SwitchSubsumptionTrafficLights > {
        public: 
        /** Constructor: SwitchSubsumptionTrafficLights_t */ 
        SwitchSubsumptionTrafficLights_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class SwitchSubsumptionTrafficLights >(wbd, kwb_SwitchSubsumptionTrafficLights_v, false) {}
        

        static const wb_types slot = kwb_SwitchSubsumptionTrafficLights_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SwitchSubsumptionTrafficLights_t::slot];
        }
    };

    /** WB Ptr Class: Ball_Found_t @brief whether ball is detected in STEM6 DetectBallColor */ 
    class Ball_Found_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Ball_Found_t */ 
        Ball_Found_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Ball_Found_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Ball_Found_t */ 
Ball_Found_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Ball_Found_v, wbd, false) {}

        static const wb_types slot = kwb_Ball_Found_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Ball_Found_t::slot];
        }
    };

    /** WB Ptr Class: Ball_Calibration_File_t @brief name of DLC file to load for STEM6 DetectBallColor */ 
    class Ball_Calibration_File_t: public  wb_generic_whiteboard_object<std::string > {
        public: 
        /** Constructor: Ball_Calibration_File_t */ 
        Ball_Calibration_File_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(wbd, kwb_Ball_Calibration_File_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Ball_Calibration_File_t */ 
Ball_Calibration_File_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(value, kwb_Ball_Calibration_File_v, wbd, false) {}

        static const wb_types slot = kwb_Ball_Calibration_File_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Ball_Calibration_File_t::slot];
        }
    };

    /** WB Ptr Class: Ball_Calibration_Num_t @brief number (size_t) to load with DLC file for STEM6 DetectBallColor */ 
    class Ball_Calibration_Num_t: public  wb_generic_whiteboard_object<int32_t > {
        public: 
        /** Constructor: Ball_Calibration_Num_t */ 
        Ball_Calibration_Num_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int32_t >(wbd, kwb_Ball_Calibration_Num_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Ball_Calibration_Num_t */ 
Ball_Calibration_Num_t(int32_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int32_t >(value, kwb_Ball_Calibration_Num_v, wbd, false) {}

        static const wb_types slot = kwb_Ball_Calibration_Num_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Ball_Calibration_Num_t::slot];
        }
    };

    /** WB Ptr Class: Ball_Color_Num_t @brief number for each ball color as defined in STEM6Master */ 
    class Ball_Color_Num_t: public  wb_generic_whiteboard_object<int32_t > {
        public: 
        /** Constructor: Ball_Color_Num_t */ 
        Ball_Color_Num_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int32_t >(wbd, kwb_Ball_Color_Num_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Ball_Color_Num_t */ 
Ball_Color_Num_t(int32_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int32_t >(value, kwb_Ball_Color_Num_v, wbd, false) {}

        static const wb_types slot = kwb_Ball_Color_Num_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Ball_Color_Num_t::slot];
        }
    };

    /** WB Ptr Class: HAL_LArmTarget_Ctrl_t @brief Used to control the left arm via DCM */ 
    class HAL_LArmTarget_Ctrl_t: public  wb_generic_whiteboard_object<class HalArmTarget > {
        public: 
        /** Constructor: HAL_LArmTarget_Ctrl_t */ 
        HAL_LArmTarget_Ctrl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalArmTarget >(wbd, kwb_HAL_LArmTarget_Ctrl_v, false) {}
        

        static const wb_types slot = kwb_HAL_LArmTarget_Ctrl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_LArmTarget_Ctrl_t::slot];
        }
    };

    /** WB Ptr Class: HAL_LArmTarget_Stat_t @brief Used to report DCM status of the left arm */ 
    class HAL_LArmTarget_Stat_t: public  wb_generic_whiteboard_object<class HalArmTarget > {
        public: 
        /** Constructor: HAL_LArmTarget_Stat_t */ 
        HAL_LArmTarget_Stat_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalArmTarget >(wbd, kwb_HAL_LArmTarget_Stat_v, false) {}
        

        static const wb_types slot = kwb_HAL_LArmTarget_Stat_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_LArmTarget_Stat_t::slot];
        }
    };

    /** WB Ptr Class: HAL_LArmTarget_Tolr_t @brief Used to set the joing angle tolerance for motion completion detection. */ 
    class HAL_LArmTarget_Tolr_t: public  wb_generic_whiteboard_object<class HalArmTarget > {
        public: 
        /** Constructor: HAL_LArmTarget_Tolr_t */ 
        HAL_LArmTarget_Tolr_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalArmTarget >(wbd, kwb_HAL_LArmTarget_Tolr_v, false) {}
        

        static const wb_types slot = kwb_HAL_LArmTarget_Tolr_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_LArmTarget_Tolr_t::slot];
        }
    };

    /** WB Ptr Class: HAL_RArmTarget_Ctrl_t @brief Used to control the right arm via DCM */ 
    class HAL_RArmTarget_Ctrl_t: public  wb_generic_whiteboard_object<class HalArmTarget > {
        public: 
        /** Constructor: HAL_RArmTarget_Ctrl_t */ 
        HAL_RArmTarget_Ctrl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalArmTarget >(wbd, kwb_HAL_RArmTarget_Ctrl_v, false) {}
        

        static const wb_types slot = kwb_HAL_RArmTarget_Ctrl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_RArmTarget_Ctrl_t::slot];
        }
    };

    /** WB Ptr Class: HAL_RArmTarget_Stat_t @brief Used to report DCM status of the right arm */ 
    class HAL_RArmTarget_Stat_t: public  wb_generic_whiteboard_object<class HalArmTarget > {
        public: 
        /** Constructor: HAL_RArmTarget_Stat_t */ 
        HAL_RArmTarget_Stat_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalArmTarget >(wbd, kwb_HAL_RArmTarget_Stat_v, false) {}
        

        static const wb_types slot = kwb_HAL_RArmTarget_Stat_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_RArmTarget_Stat_t::slot];
        }
    };

    /** WB Ptr Class: HAL_RArmTarget_Tolr_t @brief Used to set the joing angle tolerance for motion completion detection. */ 
    class HAL_RArmTarget_Tolr_t: public  wb_generic_whiteboard_object<class HalArmTarget > {
        public: 
        /** Constructor: HAL_RArmTarget_Tolr_t */ 
        HAL_RArmTarget_Tolr_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalArmTarget >(wbd, kwb_HAL_RArmTarget_Tolr_v, false) {}
        

        static const wb_types slot = kwb_HAL_RArmTarget_Tolr_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_RArmTarget_Tolr_t::slot];
        }
    };

    /** WB Ptr Class: VisionFieldFeatures_t @brief Posts information from vision about field corners and intersections */ 
    class VisionFieldFeatures_t: public  wb_generic_whiteboard_object<class VisionFieldFeatures > {
        public: 
        /** Constructor: VisionFieldFeatures_t */ 
        VisionFieldFeatures_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionFieldFeatures >(wbd, kwb_VisionFieldFeatures_v, false) {}
        

        static const wb_types slot = kwb_VisionFieldFeatures_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionFieldFeatures_t::slot];
        }
    };

    /** WB Ptr Class: WhistleBlown_t @brief Whistle blown flag */ 
    class WhistleBlown_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: WhistleBlown_t */ 
        WhistleBlown_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_WhistleBlown_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: WhistleBlown_t */ 
WhistleBlown_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_WhistleBlown_v, wbd, false) {}

        static const wb_types slot = kwb_WhistleBlown_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WhistleBlown_t::slot];
        }
    };

    /** WB Ptr Class: VolumeControl_t @brief Variable used by SMVolumeController to control the volume via pulse audio commands */ 
    class VolumeControl_t: public  wb_generic_whiteboard_object<uint8_t > {
        public: 
        /** Constructor: VolumeControl_t */ 
        VolumeControl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<uint8_t >(wbd, kwb_VolumeControl_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: VolumeControl_t */ 
VolumeControl_t(uint8_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<uint8_t >(value, kwb_VolumeControl_v, wbd, false) {}

        static const wb_types slot = kwb_VolumeControl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VolumeControl_t::slot];
        }
    };

    /** WB Ptr Class: VisionRobots_t @brief Class that reports the robots that vision sees. */ 
    class VisionRobots_t: public  wb_generic_whiteboard_object<class VisionRobots > {
        public: 
        /** Constructor: VisionRobots_t */ 
        VisionRobots_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionRobots >(wbd, kwb_VisionRobots_v, false) {}
        

        static const wb_types slot = kwb_VisionRobots_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionRobots_t::slot];
        }
    };

    /** WB Ptr Class: VisionDetectionHorizons_t @brief Class that reports the edge of an SPL field (the edge of the green bit). Array of two values, one for each camera. */ 
    class VisionDetectionHorizons_t: public  wb_generic_whiteboard_object<class VisionDetectionHorizons > {
        public: 
        /** Constructor: VisionDetectionHorizons_t */ 
        VisionDetectionHorizons_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionDetectionHorizons >(wbd, kwb_VisionDetectionHorizons_v, false) {}
        

        static const wb_types slot = kwb_VisionDetectionHorizons_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionDetectionHorizons_t::slot];
        }
    };

    /** WB Ptr Class: NaoWalkCommand_t @brief Class that controls the latest version of the UNSW 2014 walk engine. */ 
    class NaoWalkCommand_t: public  wb_generic_whiteboard_object<class NaoWalkCommand > {
        public: 
        /** Constructor: NaoWalkCommand_t */ 
        NaoWalkCommand_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NaoWalkCommand >(wbd, kwb_NaoWalkCommand_v, false) {}
        

        static const wb_types slot = kwb_NaoWalkCommand_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[NaoWalkCommand_t::slot];
        }
    };

    /** WB Ptr Class: NaoWalkStatus_t @brief Status class for the latest version of the UNSW 2014 walk engine. */ 
    class NaoWalkStatus_t: public  wb_generic_whiteboard_object<class NaoWalkStatus > {
        public: 
        /** Constructor: NaoWalkStatus_t */ 
        NaoWalkStatus_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NaoWalkStatus >(wbd, kwb_NaoWalkStatus_v, false) {}
        

        static const wb_types slot = kwb_NaoWalkStatus_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[NaoWalkStatus_t::slot];
        }
    };

    /** WB Ptr Class: HAL_LLegTarget_Ctrl_t @brief Used to control the left leg via DCM */ 
    class HAL_LLegTarget_Ctrl_t: public  wb_generic_whiteboard_object<class HalLegTarget > {
        public: 
        /** Constructor: HAL_LLegTarget_Ctrl_t */ 
        HAL_LLegTarget_Ctrl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalLegTarget >(wbd, kwb_HAL_LLegTarget_Ctrl_v, false) {}
        

        static const wb_types slot = kwb_HAL_LLegTarget_Ctrl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_LLegTarget_Ctrl_t::slot];
        }
    };

    /** WB Ptr Class: HAL_LLegTarget_Stat_t @brief Used to report DCM status of the left leg */ 
    class HAL_LLegTarget_Stat_t: public  wb_generic_whiteboard_object<class HalLegTarget > {
        public: 
        /** Constructor: HAL_LLegTarget_Stat_t */ 
        HAL_LLegTarget_Stat_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalLegTarget >(wbd, kwb_HAL_LLegTarget_Stat_v, false) {}
        

        static const wb_types slot = kwb_HAL_LLegTarget_Stat_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_LLegTarget_Stat_t::slot];
        }
    };

    /** WB Ptr Class: HAL_LLegTarget_Tolr_t @brief Used to set the joing angle tolerance for motion completion detection. */ 
    class HAL_LLegTarget_Tolr_t: public  wb_generic_whiteboard_object<class HalLegTarget > {
        public: 
        /** Constructor: HAL_LLegTarget_Tolr_t */ 
        HAL_LLegTarget_Tolr_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalLegTarget >(wbd, kwb_HAL_LLegTarget_Tolr_v, false) {}
        

        static const wb_types slot = kwb_HAL_LLegTarget_Tolr_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_LLegTarget_Tolr_t::slot];
        }
    };

    /** WB Ptr Class: HAL_RLegTarget_Ctrl_t @brief Used to control the right leg via DCM */ 
    class HAL_RLegTarget_Ctrl_t: public  wb_generic_whiteboard_object<class HalLegTarget > {
        public: 
        /** Constructor: HAL_RLegTarget_Ctrl_t */ 
        HAL_RLegTarget_Ctrl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalLegTarget >(wbd, kwb_HAL_RLegTarget_Ctrl_v, false) {}
        

        static const wb_types slot = kwb_HAL_RLegTarget_Ctrl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_RLegTarget_Ctrl_t::slot];
        }
    };

    /** WB Ptr Class: HAL_RLegTarget_Stat_t @brief Used to report DCM status of the right leg */ 
    class HAL_RLegTarget_Stat_t: public  wb_generic_whiteboard_object<class HalLegTarget > {
        public: 
        /** Constructor: HAL_RLegTarget_Stat_t */ 
        HAL_RLegTarget_Stat_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalLegTarget >(wbd, kwb_HAL_RLegTarget_Stat_v, false) {}
        

        static const wb_types slot = kwb_HAL_RLegTarget_Stat_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_RLegTarget_Stat_t::slot];
        }
    };

    /** WB Ptr Class: HAL_RLegTarget_Tolr_t @brief Used to set the joing angle tolerance for motion completion detection. */ 
    class HAL_RLegTarget_Tolr_t: public  wb_generic_whiteboard_object<class HalLegTarget > {
        public: 
        /** Constructor: HAL_RLegTarget_Tolr_t */ 
        HAL_RLegTarget_Tolr_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HalLegTarget >(wbd, kwb_HAL_RLegTarget_Tolr_v, false) {}
        

        static const wb_types slot = kwb_HAL_RLegTarget_Tolr_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HAL_RLegTarget_Tolr_t::slot];
        }
    };

    /** WB Ptr Class: VisionDetectionGoals_t @brief Reports robocup spl goals found with guvision and GoalRayTracer. */ 
    class VisionDetectionGoals_t: public  wb_generic_whiteboard_object<class VisionDetectionGoals > {
        public: 
        /** Constructor: VisionDetectionGoals_t */ 
        VisionDetectionGoals_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionDetectionGoals >(wbd, kwb_VisionDetectionGoals_v, false) {}
        

        static const wb_types slot = kwb_VisionDetectionGoals_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionDetectionGoals_t::slot];
        }
    };

    /** WB Ptr Class: TeleoperationControl_t @brief Control message for teleop VR app */ 
    class TeleoperationControl_t: public  wb_generic_whiteboard_object<class TeleoperationControl > {
        public: 
        /** Constructor: TeleoperationControl_t */ 
        TeleoperationControl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class TeleoperationControl >(wbd, kwb_TeleoperationControl_v, false) {}
        

        static const wb_types slot = kwb_TeleoperationControl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TeleoperationControl_t::slot];
        }
    };

    /** WB Ptr Class: TeleoperationStatus_t @brief Status message for teleop VR app */ 
    class TeleoperationStatus_t: public  wb_generic_whiteboard_object<class TeleoperationStatus > {
        public: 
        /** Constructor: TeleoperationStatus_t */ 
        TeleoperationStatus_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class TeleoperationStatus >(wbd, kwb_TeleoperationStatus_v, false) {}
        

        static const wb_types slot = kwb_TeleoperationStatus_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TeleoperationStatus_t::slot];
        }
    };

    /** WB Ptr Class: VisionDetectionBalls_t @brief Reports robocup spl ball found with guvision and BallRayTracer. */ 
    class VisionDetectionBalls_t: public  wb_generic_whiteboard_object<class VisionDetectionBalls > {
        public: 
        /** Constructor: VisionDetectionBalls_t */ 
        VisionDetectionBalls_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionDetectionBalls >(wbd, kwb_VisionDetectionBalls_v, false) {}
        

        static const wb_types slot = kwb_VisionDetectionBalls_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionDetectionBalls_t::slot];
        }
    };

    /** WB Ptr Class: TeleoperationControlVR_t @brief Virtual Reality extended class */ 
    class TeleoperationControlVR_t: public  wb_generic_whiteboard_object<class TeleoperationControlVR > {
        public: 
        /** Constructor: TeleoperationControlVR_t */ 
        TeleoperationControlVR_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class TeleoperationControlVR >(wbd, kwb_TeleoperationControlVR_v, false) {}
        

        static const wb_types slot = kwb_TeleoperationControlVR_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TeleoperationControlVR_t::slot];
        }
    };

    /** WB Ptr Class: ParticleOutputMap_t @brief Contains a path to a file containing the list of particles posted by the particle filter. */ 
    class ParticleOutputMap_t: public  wb_generic_whiteboard_object<uint64_t > {
        public: 
        /** Constructor: ParticleOutputMap_t */ 
        ParticleOutputMap_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<uint64_t >(wbd, kwb_ParticleOutputMap_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: ParticleOutputMap_t */ 
ParticleOutputMap_t(uint64_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<uint64_t >(value, kwb_ParticleOutputMap_v, wbd, false) {}

        static const wb_types slot = kwb_ParticleOutputMap_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[ParticleOutputMap_t::slot];
        }
    };

    /** WB Ptr Class: ParticleOutputMapControl_t @brief Posted by readers of the particles list to notify the filter to swap buffers. */ 
    class ParticleOutputMapControl_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: ParticleOutputMapControl_t */ 
        ParticleOutputMapControl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_ParticleOutputMapControl_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: ParticleOutputMapControl_t */ 
ParticleOutputMapControl_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_ParticleOutputMapControl_v, wbd, false) {}

        static const wb_types slot = kwb_ParticleOutputMapControl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[ParticleOutputMapControl_t::slot];
        }
    };

    /** WB Ptr Class: FFTControl_t @brief Turn on or off the FFT module */ 
    class FFTControl_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: FFTControl_t */ 
        FFTControl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_FFTControl_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: FFTControl_t */ 
FFTControl_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_FFTControl_v, wbd, false) {}

        static const wb_types slot = kwb_FFTControl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FFTControl_t::slot];
        }
    };

    /** WB Ptr Class: MachineFilteredNaoVision_t @brief Vision filtering and distance estimates. */ 
    class MachineFilteredNaoVision_t: public  wb_generic_whiteboard_object<class MachineFilteredVision > {
        public: 
        /** Constructor: MachineFilteredNaoVision_t */ 
        MachineFilteredNaoVision_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class MachineFilteredVision >(wbd, kwb_MachineFilteredNaoVision_v, false) {}
        

        static const wb_types slot = kwb_MachineFilteredNaoVision_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[MachineFilteredNaoVision_t::slot];
        }
    };

    /** WB Ptr Class: MicrowaveStatus_t @brief External Variables for the One Minute Microwave. */ 
    class MicrowaveStatus_t: public  wb_generic_whiteboard_object<class MicrowaveStatus > {
        public: 
        /** Constructor: MicrowaveStatus_t */ 
        MicrowaveStatus_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class MicrowaveStatus >(wbd, kwb_MicrowaveStatus_v, false) {}
        

        static const wb_types slot = kwb_MicrowaveStatus_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[MicrowaveStatus_t::slot];
        }
    };

    /** WB Ptr Class: Buttons_t @brief External Variables for the Incrementing LLFSM. */ 
    class Buttons_t: public  wb_generic_whiteboard_object<class Buttons > {
        public: 
        /** Constructor: Buttons_t */ 
        Buttons_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Buttons >(wbd, kwb_Buttons_v, false) {}
        

        static const wb_types slot = kwb_Buttons_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Buttons_t::slot];
        }
    };

    /** WB Ptr Class: MachineFilteredLocalisationVision_t @brief Vision filtering and distance estimates for landmarks: goal, lines and horizon. */ 
    class MachineFilteredLocalisationVision_t: public  wb_generic_whiteboard_object<class MachineFilteredLocalisationVision > {
        public: 
        /** Constructor: MachineFilteredLocalisationVision_t */ 
        MachineFilteredLocalisationVision_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class MachineFilteredLocalisationVision >(wbd, kwb_MachineFilteredLocalisationVision_v, false) {}
        

        static const wb_types slot = kwb_MachineFilteredLocalisationVision_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[MachineFilteredLocalisationVision_t::slot];
        }
    };

    /** WB Ptr Class: SensorsJointCurrent_t @brief Posts the current flowing through each joint via the DCM loop (read only) */ 
    class SensorsJointCurrent_t: public  wb_generic_whiteboard_object<class NaoJointListFloat > {
        public: 
        /** Constructor: SensorsJointCurrent_t */ 
        SensorsJointCurrent_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NaoJointListFloat >(wbd, kwb_SensorsJointCurrent_v, false) {}
        

        static const wb_types slot = kwb_SensorsJointCurrent_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[SensorsJointCurrent_t::slot];
        }
    };

    /** WB Ptr Class: DataLogger_t @brief Controls the data logging within Naoqi Interface */ 
    class DataLogger_t: public  wb_generic_whiteboard_object<class DataLogger > {
        public: 
        /** Constructor: DataLogger_t */ 
        DataLogger_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class DataLogger >(wbd, kwb_DataLogger_v, false) {}
        

        static const wb_types slot = kwb_DataLogger_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[DataLogger_t::slot];
        }
    };

    /** WB Ptr Class: MachineFilteredLines_t @brief Vision filtering and distance estimates for lines. */ 
    class MachineFilteredLines_t: public  wb_generic_whiteboard_object<class MachineFilteredLines > {
        public: 
        /** Constructor: MachineFilteredLines_t */ 
        MachineFilteredLines_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class MachineFilteredLines >(wbd, kwb_MachineFilteredLines_v, false) {}
        

        static const wb_types slot = kwb_MachineFilteredLines_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[MachineFilteredLines_t::slot];
        }
    };

    /** WB Ptr Class: BallLocation_t @brief Location of the ball. */ 
    class BallLocation_t: public  wb_generic_whiteboard_object<class Location > {
        public: 
        /** Constructor: BallLocation_t */ 
        BallLocation_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Location >(wbd, kwb_BallLocation_v, false) {}
        

        static const wb_types slot = kwb_BallLocation_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[BallLocation_t::slot];
        }
    };

    /** WB Ptr Class: LeftGoalPostLocation_t @brief Location of the left goal post. */ 
    class LeftGoalPostLocation_t: public  wb_generic_whiteboard_object<class Location > {
        public: 
        /** Constructor: LeftGoalPostLocation_t */ 
        LeftGoalPostLocation_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Location >(wbd, kwb_LeftGoalPostLocation_v, false) {}
        

        static const wb_types slot = kwb_LeftGoalPostLocation_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[LeftGoalPostLocation_t::slot];
        }
    };

    /** WB Ptr Class: RightGoalPostLocation_t @brief Location of the right goal post. */ 
    class RightGoalPostLocation_t: public  wb_generic_whiteboard_object<class Location > {
        public: 
        /** Constructor: RightGoalPostLocation_t */ 
        RightGoalPostLocation_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Location >(wbd, kwb_RightGoalPostLocation_v, false) {}
        

        static const wb_types slot = kwb_RightGoalPostLocation_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[RightGoalPostLocation_t::slot];
        }
    };

    /** WB Ptr Class: GoalLocation_t @brief Location of the goal. */ 
    class GoalLocation_t: public  wb_generic_whiteboard_object<class Location > {
        public: 
        /** Constructor: GoalLocation_t */ 
        GoalLocation_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Location >(wbd, kwb_GoalLocation_v, false) {}
        

        static const wb_types slot = kwb_GoalLocation_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[GoalLocation_t::slot];
        }
    };

    /** WB Ptr Class: NaoSonarProtectedWalkCommand_t @brief Send walk protected by sonar. */ 
    class NaoSonarProtectedWalkCommand_t: public  wb_generic_whiteboard_object<class NaoSonarProtectedWalkCommand > {
        public: 
        /** Constructor: NaoSonarProtectedWalkCommand_t */ 
        NaoSonarProtectedWalkCommand_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NaoSonarProtectedWalkCommand >(wbd, kwb_NaoSonarProtectedWalkCommand_v, false) {}
        

        static const wb_types slot = kwb_NaoSonarProtectedWalkCommand_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[NaoSonarProtectedWalkCommand_t::slot];
        }
    };

    /** WB Ptr Class: NaoObstacleDirection_t @brief Send general direction if obstacle. */ 
    class NaoObstacleDirection_t: public  wb_generic_whiteboard_object<class NaoObstacleDirection > {
        public: 
        /** Constructor: NaoObstacleDirection_t */ 
        NaoObstacleDirection_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class NaoObstacleDirection >(wbd, kwb_NaoObstacleDirection_v, false) {}
        

        static const wb_types slot = kwb_NaoObstacleDirection_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[NaoObstacleDirection_t::slot];
        }
    };

    /** WB Ptr Class: DominantFrequencies_t @brief Dominant frequencies and RMS levels for the four microphones */ 
    class DominantFrequencies_t: public  wb_generic_whiteboard_object<class DominantFrequencies > {
        public: 
        /** Constructor: DominantFrequencies_t */ 
        DominantFrequencies_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class DominantFrequencies >(wbd, kwb_DominantFrequencies_v, false) {}
        

        static const wb_types slot = kwb_DominantFrequencies_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[DominantFrequencies_t::slot];
        }
    };

    /** WB Ptr Class: MissionPriorityForObstacles_t @brief notify trough the whiteboard the priority of the mission, high for chasing the ball, low for getting to a place in the field. */ 
    class MissionPriorityForObstacles_t: public  wb_generic_whiteboard_object<class MissionPriorityForObstacles > {
        public: 
        /** Constructor: MissionPriorityForObstacles_t */ 
        MissionPriorityForObstacles_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class MissionPriorityForObstacles >(wbd, kwb_MissionPriorityForObstacles_v, false) {}
        

        static const wb_types slot = kwb_MissionPriorityForObstacles_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[MissionPriorityForObstacles_t::slot];
        }
    };

    /** WB Ptr Class: WavLoad_t @brief request to load a wav file */ 
    class WavLoad_t: public  wb_generic_whiteboard_object<std::string > {
        public: 
        /** Constructor: WavLoad_t */ 
        WavLoad_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(wbd, kwb_WavLoad_v, true) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: WavLoad_t */ 
WavLoad_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<std::string >(value, kwb_WavLoad_v, wbd, true) {}

        static const wb_types slot = kwb_WavLoad_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WavLoad_t::slot];
        }
    };

    /** WB Ptr Class: WavPlay_t @brief forced, treat request to play wav file as forced output and sound will come out even if reproduce on is silent */ 
    class WavPlay_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: WavPlay_t */ 
        WavPlay_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_WavPlay_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: WavPlay_t */ 
WavPlay_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_WavPlay_v, wbd, false) {}

        static const wb_types slot = kwb_WavPlay_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[WavPlay_t::slot];
        }
    };

    /** WB Ptr Class: ReproduceWavNotSilent_t @brief toggle, treat request to play wav file as silent output unless this is turned on but can be overwritten by forced in WavPlay */ 
    class ReproduceWavNotSilent_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: ReproduceWavNotSilent_t */ 
        ReproduceWavNotSilent_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_ReproduceWavNotSilent_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: ReproduceWavNotSilent_t */ 
ReproduceWavNotSilent_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_ReproduceWavNotSilent_v, wbd, false) {}

        static const wb_types slot = kwb_ReproduceWavNotSilent_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[ReproduceWavNotSilent_t::slot];
        }
    };

    /** WB Ptr Class: FrequencyControl_t @brief Frequency limits control message for FFT analysis */ 
    class FrequencyControl_t: public  wb_generic_whiteboard_object<class FrequencyLimits > {
        public: 
        /** Constructor: FrequencyControl_t */ 
        FrequencyControl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class FrequencyLimits >(wbd, kwb_FrequencyControl_v, false) {}
        

        static const wb_types slot = kwb_FrequencyControl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FrequencyControl_t::slot];
        }
    };

    /** WB Ptr Class: FrequencyStatus_t @brief Current Frequency limits (status) for FFT analysis */ 
    class FrequencyStatus_t: public  wb_generic_whiteboard_object<class FrequencyLimits > {
        public: 
        /** Constructor: FrequencyStatus_t */ 
        FrequencyStatus_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class FrequencyLimits >(wbd, kwb_FrequencyStatus_v, false) {}
        

        static const wb_types slot = kwb_FrequencyStatus_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[FrequencyStatus_t::slot];
        }
    };

    /** WB Ptr Class: HeadJointSensors_t @brief Status of the head sensors in degrees. */ 
    class HeadJointSensors_t: public  wb_generic_whiteboard_object<class HeadJointSensors > {
        public: 
        /** Constructor: HeadJointSensors_t */ 
        HeadJointSensors_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class HeadJointSensors >(wbd, kwb_HeadJointSensors_v, false) {}
        

        static const wb_types slot = kwb_HeadJointSensors_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[HeadJointSensors_t::slot];
        }
    };

    /** WB Ptr Class: AdjustPositionConfidence_t @brief Changes the confidence of objects being tracked. */ 
    class AdjustPositionConfidence_t: public  wb_generic_whiteboard_object<class AdjustPositionConfidence > {
        public: 
        /** Constructor: AdjustPositionConfidence_t */ 
        AdjustPositionConfidence_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class AdjustPositionConfidence >(wbd, kwb_AdjustPositionConfidence_v, false) {}
        

        static const wb_types slot = kwb_AdjustPositionConfidence_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[AdjustPositionConfidence_t::slot];
        }
    };

    /** WB Ptr Class: GuVrTeleopVulkanControl_t @brief Control message for commands from the Vulkan VR teleop app */ 
    class GuVrTeleopVulkanControl_t: public  wb_generic_whiteboard_object<class GuVrTeleopVulkanControl > {
        public: 
        /** Constructor: GuVrTeleopVulkanControl_t */ 
        GuVrTeleopVulkanControl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class GuVrTeleopVulkanControl >(wbd, kwb_GuVrTeleopVulkanControl_v, false) {}
        

        static const wb_types slot = kwb_GuVrTeleopVulkanControl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[GuVrTeleopVulkanControl_t::slot];
        }
    };

    /** WB Ptr Class: TemperatureSensors_t @brief The fake status of the temperature sensors in the nao legs - FOR RESEARCH ONLY. */ 
    class TemperatureSensors_t: public  wb_generic_whiteboard_object<class TemperatureSensors > {
        public: 
        /** Constructor: TemperatureSensors_t */ 
        TemperatureSensors_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class TemperatureSensors >(wbd, kwb_TemperatureSensors_v, false) {}
        

        static const wb_types slot = kwb_TemperatureSensors_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[TemperatureSensors_t::slot];
        }
    };

    /** WB Ptr Class: Overheating_t @brief The fake combined status of the temperature sensors in the nao legs - FOR RESEARCH ONLY. */ 
    class Overheating_t: public  wb_generic_whiteboard_object<class Overheating > {
        public: 
        /** Constructor: Overheating_t */ 
        Overheating_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class Overheating >(wbd, kwb_Overheating_v, false) {}
        

        static const wb_types slot = kwb_Overheating_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Overheating_t::slot];
        }
    };

    /** WB Ptr Class: buttonPushed_t @brief The time remaining in the microwave - swiftfsm. */ 
    class buttonPushed_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: buttonPushed_t */ 
        buttonPushed_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_buttonPushed_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: buttonPushed_t */ 
buttonPushed_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_buttonPushed_v, wbd, false) {}

        static const wb_types slot = kwb_buttonPushed_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[buttonPushed_t::slot];
        }
    };

    /** WB Ptr Class: doorOpen_t @brief The time remaining in the microwave - swiftfsm. */ 
    class doorOpen_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: doorOpen_t */ 
        doorOpen_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_doorOpen_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: doorOpen_t */ 
doorOpen_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_doorOpen_v, wbd, false) {}

        static const wb_types slot = kwb_doorOpen_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[doorOpen_t::slot];
        }
    };

    /** WB Ptr Class: timeLeft_t @brief The time remaining in the microwave - swiftfsm. */ 
    class timeLeft_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: timeLeft_t */ 
        timeLeft_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_timeLeft_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: timeLeft_t */ 
timeLeft_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_timeLeft_v, wbd, false) {}

        static const wb_types slot = kwb_timeLeft_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[timeLeft_t::slot];
        }
    };

    /** WB Ptr Class: motor_t @brief The motor actuator for the microwave - swiftfsm. */ 
    class motor_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: motor_t */ 
        motor_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_motor_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: motor_t */ 
motor_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_motor_v, wbd, false) {}

        static const wb_types slot = kwb_motor_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[motor_t::slot];
        }
    };

    /** WB Ptr Class: sound_t @brief The alarm actuator for the microwave - swiftfsm. */ 
    class sound_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: sound_t */ 
        sound_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_sound_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: sound_t */ 
sound_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_sound_v, wbd, false) {}

        static const wb_types slot = kwb_sound_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[sound_t::slot];
        }
    };

    /** WB Ptr Class: light_t @brief The light actuator for the microwave - swiftfsm. */ 
    class light_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: light_t */ 
        light_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_light_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: light_t */ 
light_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_light_v, wbd, false) {}

        static const wb_types slot = kwb_light_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[light_t::slot];
        }
    };

    /** WB Ptr Class: Arduino2Pin_t @brief The status of the 2 pin for the arduino. */ 
    class Arduino2Pin_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino2Pin_t */ 
        Arduino2Pin_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino2Pin_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino2Pin_t */ 
Arduino2Pin_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino2Pin_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino2Pin_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino2Pin_t::slot];
        }
    };

    /** WB Ptr Class: Arduino2PinValue_t @brief The value of the 2 pin for the arduino. */ 
    class Arduino2PinValue_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino2PinValue_t */ 
        Arduino2PinValue_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino2PinValue_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino2PinValue_t */ 
Arduino2PinValue_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino2PinValue_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino2PinValue_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino2PinValue_t::slot];
        }
    };

    /** WB Ptr Class: Arduino3Pin_t @brief The status of the 3 pin for the arduino. */ 
    class Arduino3Pin_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino3Pin_t */ 
        Arduino3Pin_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino3Pin_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino3Pin_t */ 
Arduino3Pin_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino3Pin_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino3Pin_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino3Pin_t::slot];
        }
    };

    /** WB Ptr Class: Arduino3PinValue_t @brief The value of the 3 pin for the arduino. */ 
    class Arduino3PinValue_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino3PinValue_t */ 
        Arduino3PinValue_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino3PinValue_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino3PinValue_t */ 
Arduino3PinValue_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino3PinValue_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino3PinValue_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino3PinValue_t::slot];
        }
    };

    /** WB Ptr Class: Arduino4Pin_t @brief The status of the 4 pin for the arduino. */ 
    class Arduino4Pin_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino4Pin_t */ 
        Arduino4Pin_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino4Pin_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino4Pin_t */ 
Arduino4Pin_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino4Pin_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino4Pin_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino4Pin_t::slot];
        }
    };

    /** WB Ptr Class: Arduino4PinValue_t @brief The value of the 4 pin for the arduino. */ 
    class Arduino4PinValue_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino4PinValue_t */ 
        Arduino4PinValue_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino4PinValue_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino4PinValue_t */ 
Arduino4PinValue_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino4PinValue_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino4PinValue_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino4PinValue_t::slot];
        }
    };

    /** WB Ptr Class: Arduino5Pin_t @brief The status of the 5 pin for the arduino. */ 
    class Arduino5Pin_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino5Pin_t */ 
        Arduino5Pin_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino5Pin_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino5Pin_t */ 
Arduino5Pin_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino5Pin_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino5Pin_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino5Pin_t::slot];
        }
    };

    /** WB Ptr Class: Arduino5PinValue_t @brief The value of the 5 pin for the arduino. */ 
    class Arduino5PinValue_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino5PinValue_t */ 
        Arduino5PinValue_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino5PinValue_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino5PinValue_t */ 
Arduino5PinValue_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino5PinValue_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino5PinValue_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino5PinValue_t::slot];
        }
    };

    /** WB Ptr Class: Arduino6Pin_t @brief The status of the 6 pin for the arduino. */ 
    class Arduino6Pin_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino6Pin_t */ 
        Arduino6Pin_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino6Pin_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino6Pin_t */ 
Arduino6Pin_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino6Pin_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino6Pin_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino6Pin_t::slot];
        }
    };

    /** WB Ptr Class: Arduino6PinValue_t @brief The value of the 6 pin for the arduino. */ 
    class Arduino6PinValue_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino6PinValue_t */ 
        Arduino6PinValue_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino6PinValue_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino6PinValue_t */ 
Arduino6PinValue_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino6PinValue_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino6PinValue_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino6PinValue_t::slot];
        }
    };

    /** WB Ptr Class: Arduino7Pin_t @brief The status of the 7 pin for the arduino. */ 
    class Arduino7Pin_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino7Pin_t */ 
        Arduino7Pin_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino7Pin_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino7Pin_t */ 
Arduino7Pin_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino7Pin_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino7Pin_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino7Pin_t::slot];
        }
    };

    /** WB Ptr Class: Arduino7PinValue_t @brief The value of the 7 pin for the arduino. */ 
    class Arduino7PinValue_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino7PinValue_t */ 
        Arduino7PinValue_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino7PinValue_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino7PinValue_t */ 
Arduino7PinValue_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino7PinValue_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino7PinValue_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino7PinValue_t::slot];
        }
    };

    /** WB Ptr Class: Arduino8Pin_t @brief The status of the 8 pin for the arduino. */ 
    class Arduino8Pin_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino8Pin_t */ 
        Arduino8Pin_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino8Pin_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino8Pin_t */ 
Arduino8Pin_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino8Pin_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino8Pin_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino8Pin_t::slot];
        }
    };

    /** WB Ptr Class: Arduino8PinValue_t @brief The value of the 8 pin for the arduino. */ 
    class Arduino8PinValue_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino8PinValue_t */ 
        Arduino8PinValue_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino8PinValue_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino8PinValue_t */ 
Arduino8PinValue_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino8PinValue_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino8PinValue_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino8PinValue_t::slot];
        }
    };

    /** WB Ptr Class: Arduino9Pin_t @brief The status of the 9 pin for the arduino. */ 
    class Arduino9Pin_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino9Pin_t */ 
        Arduino9Pin_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino9Pin_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino9Pin_t */ 
Arduino9Pin_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino9Pin_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino9Pin_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino9Pin_t::slot];
        }
    };

    /** WB Ptr Class: Arduino9PinValue_t @brief The value of the 9 pin for the arduino. */ 
    class Arduino9PinValue_t: public  wb_generic_whiteboard_object<bool > {
        public: 
        /** Constructor: Arduino9PinValue_t */ 
        Arduino9PinValue_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(wbd, kwb_Arduino9PinValue_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: Arduino9PinValue_t */ 
Arduino9PinValue_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<bool >(value, kwb_Arduino9PinValue_v, wbd, false) {}

        static const wb_types slot = kwb_Arduino9PinValue_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[Arduino9PinValue_t::slot];
        }
    };

    /** WB Ptr Class: BallPosition_t @brief The position and orientation of the ball on the soccer field. */ 
    class BallPosition_t: public  wb_generic_whiteboard_object<class BallPosition > {
        public: 
        /** Constructor: BallPosition_t */ 
        BallPosition_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class BallPosition >(wbd, kwb_BallPosition_v, false) {}
        

        static const wb_types slot = kwb_BallPosition_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[BallPosition_t::slot];
        }
    };

    /** WB Ptr Class: MemoryImageControl_t @brief Control at what resolution and format memory images need to be posted as. */ 
    class MemoryImageControl_t: public  wb_generic_whiteboard_object<class MemoryImageControlStatus > {
        public: 
        /** Constructor: MemoryImageControl_t */ 
        MemoryImageControl_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class MemoryImageControlStatus >(wbd, kwb_MemoryImageControl_v, false) {}
        

        static const wb_types slot = kwb_MemoryImageControl_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[MemoryImageControl_t::slot];
        }
    };

    /** WB Ptr Class: MemoryImageStatus_t @brief Status of what resolution and format memory images are being posted as. */ 
    class MemoryImageStatus_t: public  wb_generic_whiteboard_object<class MemoryImageControlStatus > {
        public: 
        /** Constructor: MemoryImageStatus_t */ 
        MemoryImageStatus_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class MemoryImageControlStatus >(wbd, kwb_MemoryImageStatus_v, false) {}
        

        static const wb_types slot = kwb_MemoryImageStatus_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[MemoryImageStatus_t::slot];
        }
    };

    /** WB Ptr Class: LHandGripper_t @brief 0 is closed 100 is fully open (left hand). */ 
    class LHandGripper_t: public  wb_generic_whiteboard_object<int8_t > {
        public: 
        /** Constructor: LHandGripper_t */ 
        LHandGripper_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(wbd, kwb_LHandGripper_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: LHandGripper_t */ 
LHandGripper_t(int8_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(value, kwb_LHandGripper_v, wbd, false) {}

        static const wb_types slot = kwb_LHandGripper_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[LHandGripper_t::slot];
        }
    };

    /** WB Ptr Class: RHandGripper_t @brief 0 is closed 100 is fully open (right hand). */ 
    class RHandGripper_t: public  wb_generic_whiteboard_object<int8_t > {
        public: 
        /** Constructor: RHandGripper_t */ 
        RHandGripper_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(wbd, kwb_RHandGripper_v, false) {}
        /** Convenience constructor for non-class types. Pass a value and it'll be set in the Whiteboard: RHandGripper_t */ 
RHandGripper_t(int8_t value, gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<int8_t >(value, kwb_RHandGripper_v, wbd, false) {}

        static const wb_types slot = kwb_RHandGripper_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[RHandGripper_t::slot];
        }
    };

    /** WB Ptr Class: MyPosition_t @brief Location of the robot relative to where it started. */ 
    class MyPosition_t: public  wb_generic_whiteboard_object<class MyPosition > {
        public: 
        /** Constructor: MyPosition_t */ 
        MyPosition_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class MyPosition >(wbd, kwb_MyPosition_v, false) {}
        

        static const wb_types slot = kwb_MyPosition_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[MyPosition_t::slot];
        }
    };

    /** WB Ptr Class: VisionDetectionLines_t @brief Reports robocup field lines found with guvision and LineRayTracer. */ 
    class VisionDetectionLines_t: public  wb_generic_whiteboard_object<class VisionDetectionLines > {
        public: 
        /** Constructor: VisionDetectionLines_t */ 
        VisionDetectionLines_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionDetectionLines >(wbd, kwb_VisionDetectionLines_v, false) {}
        

        static const wb_types slot = kwb_VisionDetectionLines_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionDetectionLines_t::slot];
        }
    };

    /** WB Ptr Class: VisionDetectionFeatures_t @brief Reports robocup field features found with guvision and FeatureDetector. */ 
    class VisionDetectionFeatures_t: public  wb_generic_whiteboard_object<class VisionDetectionFeatures > {
        public: 
        /** Constructor: VisionDetectionFeatures_t */ 
        VisionDetectionFeatures_t(gu_simple_whiteboard_descriptor *wbd = NULLPTR): wb_generic_whiteboard_object<class VisionDetectionFeatures >(wbd, kwb_VisionDetectionFeatures_v, false) {}
        

        static const wb_types slot = kwb_VisionDetectionFeatures_v;

        u_int16_t eventCounter() const {
            return _wbd->wb->event_counters[VisionDetectionFeatures_t::slot];
        }
    };



} // guWhiteboard


#pragma clang diagnostic pop

#endif //WB_GUWHITEBOARDTYPELIST_GENERATED_H
