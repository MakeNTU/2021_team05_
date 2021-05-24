#ifndef ANGLE.H
#define ANGLE.H

# include <Servo.h>
Servo myservo;
#define servo_pin PB6
int theta = 0;

void setup_angle(){
  myservo.attach(servo_pin);
}

void turn_angle_up(){
  if(theta<=175 && theta>=0){
    theta += 5;
    myservo.write(theta);
    delay(20);
  }
}

void turn_angle_down(){
  if(theta<=180 && theta>=5){
    theta -= 5;
    myservo.write(theta);
    delay(20);
  }
}

#endif
