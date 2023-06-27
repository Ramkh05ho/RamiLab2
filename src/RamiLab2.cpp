/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/ramikhosho/RamiLab2/src/RamiLab2.ino"
void setup();
void loop();
#line 1 "/Users/ramikhosho/RamiLab2/src/RamiLab2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t value; 


void setup() {

  pinMode(D5,OUTPUT);
  Serial.begin(9600);    
      
}

void loop() {
  value = analogRead(A5);  
  Serial.println(value);   
  delay(value);
  digitalWrite(D5, HIGH);
  delay(value);
  digitalWrite(D5,LOW);

}