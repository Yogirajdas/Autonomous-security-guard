//Arduino Bluetooth Controlled Car//
// Before uploading the code you have to install the necessary library//
//AFMotor Library https://learn.adafruit.com/adafruit-motor-shield/library-install //

#include <AFMotor.h>

//initial motors pin
AF_DCMotor motor4(4, MOTOR12_1KHZ); 



char data;

void setup() { 
  Serial.begin(9600);                               //initialize serial COM at 9600 baudrate
                      //Turn OFF the Led in the beginning
  
  Serial.println("Hello!,How are you Python ?");
}
void loop() {
    //whatever the data that is coming in serially and assigning the value to the variable “data”
 
data = Serial.read();

if (data == '1'){
forward();
Serial.println("finish");
//Turn On the Led
}

}



void forward()

{
  
  motor4.setSpeed(255); //Define maximum velocity
  motor4.run(FORWARD);
  delay(10000);
  motor4.setSpeed(0);
  //Define minimum velocity
//  back();
  //rotate the motor clockwise
  Serial.println("finish12");
  
}

//void back()
//{

//   motor4.setSpeed(255); //Define minimum velocity
//   motor4.run(BACKWARD);
//   delay(2500);
//   motor4.setSpeed(0);

//}
