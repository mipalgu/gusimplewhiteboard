/*
 *  gugenericwhiteboardobject.h
 *
 *  Created by Carl Lusty in 2013.
 *  Copyright (c) 2013 Carl Lusty
 *  All rights reserved.
 */

#ifndef GENERIC_WB_OBJ_H
#define GENERIC_WB_OBJ_H


#include "gusimplewhiteboard.h"
#include <iostream>
#include <assert.h>

using namespace std;

extern gu_simple_whiteboard_descriptor *local_whiteboard_descriptor;

template <class object_type> class generic_whiteboard_object
{
        uint16_t type_offset;
        bool atomic;
        bool notify_subscribers;
//        gu_simple_message *_data;
        gu_simple_whiteboard_descriptor *_wbd;
        
public:
        generic_whiteboard_object(gu_simple_whiteboard_descriptor *wbd, int type_offset, bool atomic = true, bool notify_subscribers = true) //Constructor
        {
                if(!wbd)
                {
			wbd = get_local_singleton_whiteboard();
                }
                this->type_offset = type_offset;
                this->atomic = atomic;
                this->notify_subscribers = notify_subscribers;
                this->_wbd = wbd;
        }

        //void set(object_type *msg) { set(*msg); }
        void set(object_type &msg)
        {
                int t = type_offset;

#ifdef DEBUG
		assert(GU_SIMPLE_WHITEBOARD_BUFSIZE >= sizeof(object_type));
#endif
                if (atomic) gsw_procure(_wbd->sem, GSW_SEM_PUTMSG);
                
                gu_simple_whiteboard *wb = _wbd->wb;
                gu_simple_message *m = gsw_next_message(wb, t);
		object_type *wbobj = (object_type*)(m);
		*wbobj = msg;

                gsw_increment(wb, t);
                gsw_increment_event_counter(wb, t);
                if (atomic) gsw_vacate(_wbd->sem, GSW_SEM_PUTMSG);
                if (notify_subscribers && wb->subscribed) gsw_signal_subscribers(wb);
        }
        
        object_type &get()
        {
                return *(object_type *)gsw_current_message(_wbd->wb, type_offset);
        }

        void operator=(object_type value)
        {
                set(value);
        }

        operator object_type()
        {
                return *get();
        }
};




#endif //GENERIC_WB_OBJ_H