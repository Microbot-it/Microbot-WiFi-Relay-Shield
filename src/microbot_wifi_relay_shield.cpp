/*####################################################################
 FILE: microbot_wifi_relay_shield.h
 VERSION: 1.0
 PURPOSE: WiFi Relay Shield library for Arduino

 HISTORY:
 Mirko Prosseda - Original version (20/07/2020)
#######################################################################*/


#include "microbot_wifi_relay_shield.h"


// Initialize the Motor Shield hardware
void microbotWiFiRelayShield::begin() {
   // initializes the digital pin as an output
   pinMode(out1, OUTPUT);
   pinMode(out2, OUTPUT);
   pinMode(out3, OUTPUT);
   pinMode(out4, OUTPUT);
   // reset digital pins and disables both channels
   digitalWrite(out1, LOW);
   digitalWrite(out2, LOW);
   digitalWrite(out3, LOW);
   digitalWrite(out4, LOW);
}


// Set direction and speed for a specific motor channel
void microbotWiFiRelayShield::setRelay(uint8_t ch) {
   switch(ch) {                    // ch parameter must be 1 to 4
      case 1:
        digitalWrite(out1, HIGH);
        break;
      case 2:
        digitalWrite(out2, HIGH);
        break;
      case 3:
        digitalWrite(out3, HIGH);
        break;
      case 4:
        digitalWrite(out4, HIGH);
        break;
   }
}


// Set direction and speed for a specific motor channel
void microbotWiFiRelayShield::unsetRelay(uint8_t ch) {
   switch(ch) {                    // ch parameter must be 1 to 4
      case 1:
        digitalWrite(out1, LOW);
        break;
      case 2:
        digitalWrite(out2, LOW);
        break;
      case 3:
        digitalWrite(out3, LOW);
        break;
      case 4:
        digitalWrite(out4, LOW);
        break;
   }
}
