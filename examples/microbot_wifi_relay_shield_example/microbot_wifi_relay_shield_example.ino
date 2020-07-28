/*####################################################################
 FILE: microbot_wifi_relay_shield_example.ino
 VERSION: 1.0
 PURPOSE: WiFi Relay Shield test sketch

 Description:
 * the 4 relays are activated progressively.

 Connections:
 * this sketch doesn't need any component attached to the shield.

 HISTORY:
 Mirko Prosseda - Original version (20/07/2020)
#######################################################################*/


#include <microbot_wifi_relay_shield.h>
#include <Wire.h>


microbotWiFiRelayShield WiFiRelayShield;


void setup() {
   WiFiRelayShield.begin();   // initializes the WiFi Relay Shield hardware
   Serial.begin(9600);        // initialize Serial Port
   Serial.println("WiFi Relay Shield test sketch");
}


void loop() {
   for(int i = 1; i < 5; i++) {
      WiFiRelayShield.setRelay(i);           // enables the relay
      Serial.print("Relay ");
      Serial.print(i);
      Serial.print(": Enabled ... ");
      delay(1000);                           // wait for a second
      WiFiRelayShield.unsetRelay(i);         // disables the relay
      Serial.println("Disabled");            // disable the relay
      delay(1000);                           // wait for a second
   }
}
