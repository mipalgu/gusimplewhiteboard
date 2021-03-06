/**                                                                     
 *  /file wb_sensors_sonar.h 
 *                                                                      
 *  Created by Carl Lusty in 2014.                                      
 *  Copyright (c) 2014 Carl Lusty                                       
 *  All rights reserved.                                                
 */                                                                     
 
#ifndef wb_sensors_sonar_h
#define wb_sensors_sonar_h

#include <gu_util.h>

#define wb_sensors_leds_h_NUMBER_OF_READINGS 30 	//taken from the c++ namespace enum value: Sonar::NUMBER_OF_READINGS

/**
 * Sonar sensors c struct
 */
struct wb_sensors_sonar
{
    /** array for the sonar values. Range: 0-255. Unit: cm. Objects less than 20cm from a Nao robot will show as 20cm. */
    ARRAY_PROPERTY(u_int8_t, sonar, wb_sensors_leds_h_NUMBER_OF_READINGS)	
};

#endif // wb_sensors_sonar_h
