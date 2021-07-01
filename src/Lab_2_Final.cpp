/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "d:/Labs/Lab_2_Final/src/Lab_2_Final.ino"
void setup();
void loop();
#line 1 "d:/Labs/Lab_2_Final/src/Lab_2_Final.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value;


void setup() {
  pinMode(D7, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  uint16_t value;
  
  value = analogRead(A0);
 
  Serial.println(value);

  digitalWrite(D7, HIGH);
  delay(value);
  digitalWrite(D7, LOW);
  delay(value);
  
}