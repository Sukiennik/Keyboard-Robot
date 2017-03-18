#include "meArm.h"
#include <Servo.h>

int basePin = 11;
int shoulderPin = 10;
int elbowPin = 9;
int gripperPin = 6;

int X=-50;
int Y=0;
int Z=0;

meArm arm;

void setup() {
  Serial.begin(9600);
  arm.begin(basePin, shoulderPin, elbowPin, gripperPin);
}

void loop() {


 for(; X<=50; X++){
  for(; Y<=300; Y++){
    for(; Z<=200; Z++){
              Serial.print("   X:  ");
        Serial.print(X);
                Serial.print("   Y:  ");
        Serial.print(Y);
                Serial.print("   Z:  ");
        Serial.print(Z);
      if(arm.isReachable(X,Z,Y)){
        Serial.print(" --- YES");
      }
      else{
        Serial.print(" --- NOT");
      }
      Serial.println();
      
    }
    Z=0;
  }
  Y=0;
 }

}
