#ifndef MOTOR.H
#define MOTOR.H

int  ENA = PB0; 
int  ENB = PB1;
int  IN1 = PA0;
int  IN2 = PA1;
int  IN3 = PA2;
int  IN4 = PA3;

void setup_L298N(){
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
}

void MotorWriting(double vL, double vR){
  if(vL>=0){
      analogWrite(ENB,vL);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
  }
  else {
      analogWrite(ENB,-vL);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
  }
  if (vR>=0){
      analogWrite(ENA,vR);
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
  }
  else{
      analogWrite(ENA,-vR);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
  }
}

#endif
