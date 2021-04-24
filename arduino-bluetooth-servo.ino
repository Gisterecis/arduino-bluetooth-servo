#include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial bluetooth(0, 1);
Servo servo;
int data;
void setup()
{
  bluetooth.begin(9600);
  pinMode(9, OUTPUT);
  servo.attach(9);
}
void loop()
{
  data = bluetooth.read();
  servo.write(data);
}
