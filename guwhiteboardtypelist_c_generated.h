/**                                                                     
 *  /file guwhiteboardtypelist_c_generated.h                            
 *                                                                      
 *  Created by Carl Lusty in 2013.                                      
 *  Copyright (c) 2013 Carl Lusty                                       
 *  All rights reserved.                                                
 */                                                                     


#ifndef _GUWHITEBOARD_TYPELIST_C_H_                                     
#define _GUWHITEBOARD_TYPELIST_C_H_                                     


#define WANT_WB_STRINGS

#define GSW_NUM_TYPES_DEFINED 19

#if GSW_NUM_TYPES_DEFINED > GSW_NUM_RESERVED
#error *** Error: gusimplewhiteboard: The number of defined types exceeds the total number of reserved types allowed. Increase GSW_NUM_RESERVED to solve this.
#endif
//Generated on: Sat Mar 23 16:41:46 2013
//Generated by user: rh

        typedef enum wb_types      
        {                                                               
                kwb_reserved_SubscribeToAllTypes_v = 0,	///<Global subscription type. Do not add content to this type, it is for global subscriptions only
                kPrint_v = 1,
                kSay_v = 2,
                kSpeech_v = 3,
                kQSay_v = 4,
                kQSpeech_v = 5,
                kSpeechOutput_v = 6,
                kBoolExample_v = 7,
                kCustomClassExample_v = 8,
                kSoloTypeExample_v = 9,	///<This is an example of a type definition that does not generate anything other than a wb type
                kNaoMotionPlayer_v = 10,
                kNaoMotionPlayerIsRunning_v = 11,
                kNaoWalk_v = 12,
                kNaoWalkIsRunning_v = 13,
                kHeadStiffness_v = 14,
                kHoldingStiffness_v = 15,
                kGenericAngleChange_v = 16,
                kGenericAngleChangeIsRunning_v = 17,
                kHAL_HeadTarget_v = 18
        } WBTypes;

        extern const char *WBTypes_stringValues[];
#endif                          
