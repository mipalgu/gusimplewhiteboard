/*
 *  gutcpinjectionwhiteboardobject.cpp.cpp
 *
 *  Created by Carl Lusty in 2013.
 *  Copyright (c) 2013 Carl Lusty
 *  All rights reserved.
 */

#include "gutcpinjectionwhiteboardobject.h"

#ifndef WITHOUT_LIBDISPATCH	// requires libdispatch at the moment

#include <gu_util.h> //gu_strlcpy

const char *robot_network_names[] =
{
        "localhost",
        "t1000.local",
        "meg.local",
        "lena.local",
        "mac.local",
        "sonic.local",
        "pris.local",
};

/** Write data to TCP socket */
void transmit(void *info)
{
        transmit_info *i = static_cast<transmit_info *>(info);
        if (write(i->sfd, &i->p, BUF_SIZE) != BUF_SIZE)
                fprintf(stderr, "partial/failed write\n");

        delete i;
}

/** 
 * @brief Generic object method for sending a whiteboard object via TCP. String specialisation 
 * @param msg The data to transmit
 * @return did the transmission work (only valid for sync sending and NOT async, async will always return true)
 */
template <>
bool injection_whiteboard_object<std::string>::send_message(const std::string &msg)
{
        gsw_message_packet p;

        gu_simple_message *m = &p.m;

        gu_strlcpy(m->string, msg.c_str(), msg.length()+1);

        p.t = this->type_offset;

        return send_tcp(p);
}

/** 
 * @brief Generic object method for sending a whiteboard object via TCP. vector<int> specialisation 
 * @param msg The data to transmit
 * @return did the transmission work (only valid for sync sending and NOT async, async will always return true)
 */
template <>
bool injection_whiteboard_object<std::vector<int> >::send_message(const std::vector<int> &msg)
{
        gsw_message_packet p;

        gu_simple_message *m = &p.m;

        memcpy(m->ivec, &msg[0], msg.size()*sizeof(int));

        p.t = this->type_offset;

        return send_tcp(p);
}

#endif // WITHOUT_LIBDISPATCH
