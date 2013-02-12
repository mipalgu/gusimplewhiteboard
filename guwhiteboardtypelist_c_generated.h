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

#define GSW_NUM_TYPES_DEFINED 8

#if GSW_NUM_TYPES_DEFINED > GSW_NUM_RESERVED
#error *** Error: gusimplewhiteboard: The number of defined types exceeds the total number of reserved types allowed. Increase GSW_NUM_RESERVED to solve this.
#endif
//Generated on: Wed Feb 13 09:13:51 2013
//Generated by user: carl

        typedef enum wb_types      
        {                                                               
                wb_reserved_SubscribeToAllTypes = 0,	///<Global subscription type. Do not add content to this type, it is for global subscriptions only
                GSW_PRINT = 1,
                GSW_SAY = 2,
                GSW_SPEECH = 3,
                kRunVisionPipelineTest = 4,
                kNaoIsReadyToRun = 5,
                kNaoIsReadyToRun2 = 6,
                kNaoIsReadyToRun3 = 7	///<uiyguh
        } WBTypes;

        extern const char *WBTypes_stringValues[];
#endif                          
