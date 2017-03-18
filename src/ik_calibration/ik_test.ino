/*
 *
 * Pins:
 * Arduino    Base   Shoulder  Elbow    Gripper
 *    GND    Brown     Brown   Brown     Brown
 *     5V      Red       Red     Red       Red
 *     11    Yellow
 *     10             Yellow
 *      9                     Yellow
 *      6                               Yellow
 */
#include "meArm.h"
#include <Servo.h>

int basePin = 11;
int shoulderPin = 10;
int elbowPin = 9;
int gripperPin = 6;

meArm arm;

void setup() {
  Serial.begin(9600);
  arm.begin(basePin, shoulderPin, elbowPin, gripperPin);
}

void loop() {
    //arm.closeGripper();
    
    //arm.gotoPoint(-42,150,70); //enter done
    //arm.gotoPoint(-42,150,98); //0 done
    //arm.gotoPoint(-26, 150, 110); //1 done
    //arm.gotoPoint(-28, 150, 95); //2 done
    //arm.gotoPoint(-26, 150, 83); //3 done
    //arm.gotoPoint(-10, 150, 110); //4 done
    //arm.gotoPoint(-10, 150, 97); //5 done
    //arm.gotoPoint(-10, 150, 90); //6 done
    //arm.gotPoint(3,150,107); //7 done
    //arm.gotoPoint(3, 150, 95); //8 done
    //arm.gotoPoint(2,150,78); //9 done
    delay(2000);
    //arm.gotoPoint(-36,90,83); //enter done
    //arm.gotoPoint(-36,100,105); //0 done
    //arm.gotoPoint(-22, 110, 125); //1 done
    //arm.gotoPoint(-24, 110, 110); //2 done
    //arm.gotoPoint(-25, 102, 94); //3 done
    //arm.gotoPoint(-10, 110, 123); //4 done
    //arm.gotoPoint(-10, 110, 110); //5 done
    //arm.gotoPoint(-11, 110, 101); //6 done
    //arm.gotoPoint(3,110,120); //7 done
    //arm.gotoPoint(2, 106, 105); //8 done
    //arm.gotoPoint(2,100,95); //9 done    
}
