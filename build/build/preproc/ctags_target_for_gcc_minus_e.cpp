# 1 "Y:\\source\\2023\\January\\Arduino\\VSCodeTest\\src\\src.ino"
# 2 "Y:\\source\\2023\\January\\Arduino\\VSCodeTest\\src\\src.ino" 2


Servo myservo; // create servo object to control a servo
                // a maximum of eight servo objects can be created

int pos = 0; // variable to store the servo position

void setup() {
  //myservo.attach(8);  // attaches the servo on pin 9 to the servo object
    pinMode(9 /*define pin for motor*/, 0x1);
    pinMode(10 /*define pin for motor*/, 0x1);
    digitalWrite(9 /*define pin for motor*/, 0x0);
    digitalWrite(10 /*define pin for motor*/, 0x0);
}

void loop() {


    digitalWrite(9 /*define pin for motor*/, 0x1);
    digitalWrite(10 /*define pin for motor*/, 0x1);
    delay(500);
    digitalWrite(9 /*define pin for motor*/, 0x0);
    digitalWrite(10 /*define pin for motor*/, 0x0);
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
