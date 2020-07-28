/*####################################################################
 FILE: microbot_wifi_relay_shield.h
 VERSION: 1.0
 PURPOSE: WiFi Relay Shield library for Arduino

 HISTORY:
 Mirko Prosseda - Original version (20/07/2020)
#######################################################################*/


#ifndef MICROBOT_WIFI_RELAY_SHIELD_H
#define MICROBOT_WIFI_RELAY_SHIELD_H

#include <Arduino.h>

#define out1 8
#define out2 7
#define out3 6
#define out4 5

class microbotWiFiRelayShield {
    public:
       // PUBLIC METHODS
       void begin();                // initialize the Motor Shield hardware
       void setRelay(uint8_t ch);    // set the relay for a specific channel
       void unsetRelay(uint8_t ch);  // unset the relay for a specific channel
};

#endif
