#include <Servo.h>

Servo servo1;  // create servo object to control a servo
Servo servo2;  // create servo object to control a servo
Servo servo3;
Servo servo4;
Servo servo5;

int startPos = 90;
int potpin1 = 4;  // analog pin used to connect the potentiometer
int val1;    // variable to read the value from the analog pin

int potpin2 = 3;  
int val2;    

int potpin3 = 2;  
int val3;    

int potpin4 = 1;  
int val4;    

int potpin5 = 0;  
int val5;    

void setup() {
 servo1.attach(11);  // attaches the servo on pin 9 to the servo object
  servo2.attach(10); 
  servo3.attach(6);
  servo4.attach(5);
  servo5.attach(3);

  
  servo1.write(startPos); 

servo2.write(startPos); 

servo3.write(startPos);

servo4.write(startPos); 

servo5.write(startPos); 
delay(5000);
  
}

void loop() {

  
  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val1, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  servo1.write(val1);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
 

  val2 = analogRead(potpin2);           
  val2 = map(val2, 0, 1023, 0, 180);     
  servo2.write(val2);                 
  delay(15);   
  

    val3 = analogRead(potpin3);           
  val3 = map(val3, 0, 1023, 0, 180);     
  servo3.write(val3);                 
  delay(15); 
  

      val4 = analogRead(potpin4);           
  val4 = map(val4, 0, 1023, 0, 180);     
  servo4.write(val4);                 
  delay(15); 
    
 
  val5 = analogRead(potpin5);           
  val5 = map(val5, 0, 1023, 0, 180);     
  servo5.write(val5);                 
  delay(15); 

}
