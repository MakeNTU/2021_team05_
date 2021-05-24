#include "angle.h"
#include "bluetooth.h"
#include "light.h"
#include "motor.h"
int val = 0;
bool on = false;

void setup() {
  // put your setup code here, to run once:
  setup_angle();
  setup_BT();
  setup_LT();
  setup_L298N();
  //DigitalPotWrite(BOTH_POT_SHUTDOWN, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  MODE type = ask_mode();
  switch(type){
      case DEFAULT_MODE:
        break;
      case MOVE_FOWARD:
        while(ask_mode()!=STOP){
          MotorWriting(80, 80);
        }
        MotorWriting(0, 0);
        type = DEFAULT_MODE;
        break;
      case MOVE_BACKWARD:
        while(ask_mode()!=STOP){
          MotorWriting(-80, -80);
        }
        MotorWriting(0, 0);
        type = DEFAULT_MODE;
        break;
      case TURN_CLOCKWISE:
        while(ask_mode()!=STOP){
          turn_angle_up();
        }
        type = DEFAULT_MODE;
        break;
      case TURN_COUNTERCLOCKWISE:
        while(ask_mode()!=STOP){
          turn_angle_down();
        }
        type = DEFAULT_MODE;
        break;
      case CHANGE_VR:
        val = ask_parameter();
        if(on) light(val);
        type = DEFAULT_MODE;
        break;
      case OPEN_LIGHT:
        light(val);
        on = true;
        type = DEFAULT_MODE;
        break;
      case CLOSE_LIGHT:
        light(0);
        on = false;
        type = DEFAULT_MODE;
        break;
      default:
        break;
    }
}
