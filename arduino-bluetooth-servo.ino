#include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial bluetooth(0, 1);
Servo servo;
int data;
int sens;
void setup()
{
  bluetooth.begin(9600);
  pinMode(9, OUTPUT);
  servo.attach(9);
}
void loop()
{
  data = bluetooth.read();
  sens = analogRead(0);
  servo.write(data);
  if (sens >= '1'){
      servo.write(90);
    }
   delay(1000);
}
