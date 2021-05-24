#ifndef LIGHT.H
#define LIGHT.H
/*
# include <SPI.h> //for VR
int  CS_PIN = PA4; 
//potentiometer select byte
const int POT0_SEL = 0x11;
const int POT1_SEL = 0x12;
const int BOTH_POT_SEL = 0x13;
//shutdown the device to put it into power-saving mode.
//In this mode, terminal A is open-circuited and the B and W terminals are shorted together.
//send new command and value to exit shutdowm mode.
const int POT0_SHUTDOWN = 0x21;
const int POT1_SHUTDOWN = 0x22;
const int BOTH_POT_SHUTDOWN = 0x23;

void DigitalPotWrite(int cmd, int val)
{
  // constrain input value within 0 - 255
  val = constrain(val, 0, 255);
  // set the CS pin to low to select the chip:
  digitalWrite(CS_PIN, LOW);
  // send the command and value via SPI:
  SPI.transfer(cmd);
  SPI.transfer(val);
  // Set the CS pin high to execute the command:
  digitalWrite(CS_PIN, HIGH);
}

void setup_LT(){
  pinMode(CS_PIN, OUTPUT);    // set the CS_PIN as an output:
  SPI.begin();// initialize SPI:
  DigitalPotWrite(BOTH_POT_SHUTDOWN, 0);
}

void light(int VR_value){
  if (VR_value<=256 && VR_value>=0){
    DigitalPotWrite(POT1_SEL,VR_value) ;
  }
}*/

#define LEDpin PA8
void setup_LT(){
  pinMode(LEDpin,PWM);  
}

void light(int B){
  B = map(B,0,100,0,65535);
  pwmWrite(LEDpin,B);
}

#endif
