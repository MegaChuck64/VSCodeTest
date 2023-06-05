#include <Arduino.h>
#line 1 "Y:\\source\\2023\\January\\Arduino\\VSCodeTest\\src\\src.ino"
#include <Servo.h> //include servo library
#define groundPin    9 //define pin for motor
#define motorPin    10 //define pin for motor
Servo myservo;  // create servo object to control a servo
                // a maximum of eight servo objects can be created

int pos = 0;    // variable to store the servo position

#line 9 "Y:\\source\\2023\\January\\Arduino\\VSCodeTest\\src\\src.ino"
void setup();
#line 17 "Y:\\source\\2023\\January\\Arduino\\VSCodeTest\\src\\src.ino"
void loop();
#line 9 "Y:\\source\\2023\\January\\Arduino\\VSCodeTest\\src\\src.ino"
void setup() {
  //myservo.attach(8);  // attaches the servo on pin 9 to the servo object
    pinMode(groundPin, OUTPUT);
    pinMode(motorPin, OUTPUT);
    digitalWrite(groundPin, LOW);
    digitalWrite(motorPin, LOW);
}

void loop() {


    digitalWrite(groundPin, HIGH);
    digitalWrite(motorPin, HIGH);
    delay(500);
    digitalWrite(groundPin, LOW);
    digitalWrite(motorPin, LOW);
    delay(10000);
    // delay(1000);
    // digitalWrite(groundPin, LOW);
    // digitalWrite(motorPin, LOW);
//   for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//     // in steps of 1 degree
//     myservo.write(pos);              // tell servo to go to position in variable 'pos'
//     delay(15);                       // waits 15ms for the servo to reach the position
//   }
//   for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//     myservo.write(pos);              // tell servo to go to position in variable 'pos'
//     delay(15);                       // waits 15ms for the servo to reach the position
//   }
}


