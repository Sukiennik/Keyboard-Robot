#include "arm.h"
#include <Servo.h>

typedef struct {
  int Xup;
  int Zup;
  int Yup;
  int Xpress;
  int Zpress;
  int Ypress;
} keyStat;

int basePin = 11;
int shoulderPin = 10;
int elbowPin = 9;
int gripperPin = 6;
arm arm;
const byte N = 10;
keyStat keyStats[N];
int ch = 0;

void setup()
{
  keyStats[113] = { -10, 180, 50, -10, 180, 50};   //end sign
  keyStats[10] = { -42, 150, 70, -36, 90, 83};     //ENTER
  keyStats[48] = { -42, 150, 98, -36, 100, 105};   //0
  keyStats[49] = { -26, 150, 110, -22, 110, 125};  //1
  keyStats[50] = { -28, 150, 95, -24, 110, 110};   //2
  keyStats[51] = { -26, 150, 83, -25, 102, 94};    //3
  keyStats[52] = { -10, 150, 110, -10, 110, 123};  //4
  keyStats[53] = { -10, 150, 97, -10, 110, 110};   //5
  keyStats[54] = { -10, 150, 90, -11, 110, 101};   //6
  keyStats[55] = {3, 150, 107, 3, 110, 120};       //7
  keyStats[56] = {3, 150, 95, 2, 106, 105};        //8
  keyStats[57] = {2, 150, 78, 2, 100, 95};         //9

  Serial.begin(9600);
  arm.begin(basePin, shoulderPin, elbowPin, gripperPin);
  delay(2000);
}

void move_arm(keyStat key) {
  arm.gotoPoint(key.Xup, key.Zup, key.Yup);
  delay(500);
  arm.gotoPoint(key.Xpress, key.Zpress, key.Ypress);
  arm.gotoPoint(key.Xup, key.Zup, key.Yup);
  delay(500);
}

void loop()
{
  if (Serial.available())
  {
    ch = Serial.read();
    Serial.write(ch);
    if (ch == 113) {
      move_arm( keyStats[ch] );
      while (true);
    }
    move_arm( keyStats[ch] );

  }

}




