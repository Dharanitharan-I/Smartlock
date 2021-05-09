
#include <Servo.h>
String reads;
Servo myservo;

void setup() {
  myservo.attach(9); 
  Serial.begin(9600);// attaches the servo on pin 9 to the servo object
}

void loop() {
  while(Serial.available()==0);
  reads=Serial.readStringUntil('\n');
  if (reads=="adrfjhlnm")
  {
   myservo.write(0);
   // waits for the servo to get there
  }
  if (reads=="wrong")
  {
     myservo.write(79);
  }
}

