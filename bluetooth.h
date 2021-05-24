#ifndef BLUETOOTH.H
#define BLUETOOTH.H

//#include<SoftwareSerial.h>
#define TX_PIN  11
#define RX_PIN  10
//SoftwareSerial BT(RX_PIN, TX_PIN);
enum MODE{
    DEFAULT_MODE,
    MOVE_FOWARD,
    MOVE_BACKWARD,
    TURN_CLOCKWISE,
    TURN_COUNTERCLOCKWISE,
    CHANGE_VR,
    OPEN_LIGHT,
    CLOSE_LIGHT,
    STOP
};

void setup_BT(){
    Serial1.begin(9600);
}
MODE ask_mode(){
    MODE message=DEFAULT_MODE;
    char cmd;
    if(Serial1.available()){
        cmd=char(Serial1.read());
        if(cmd=='a')        message = OPEN_LIGHT;
        else if(cmd=='b')   message = CLOSE_LIGHT;
        else if(cmd=='c')   message = CHANGE_VR;
        else if(cmd=='d')   message = MOVE_FOWARD;
        else if(cmd=='e')   message = MOVE_BACKWARD;
        else if(cmd=='f')   message = TURN_CLOCKWISE;
        else if(cmd=='g')   message = TURN_COUNTERCLOCKWISE;
        else if(cmd=='s')   message = STOP;
        else                message = DEFAULT_MODE;
        Serial1.print("cmd : ");
        Serial1.println(cmd);
    }
    return message;
}

int ask_parameter(){
    /*int parameter = 0;
    if(Serial1.available()){
        parameter = int(Serial1.read());
        Serial1.print("parameter : ");
        Serial1.println(parameter);
    }
    return parameter;*/






    //
    char a,b;
    bool g = false;
    while(g==false){
        if(Serial1.available()){
          a = char(Serial1.read());  
          g = true;
        }
    }
    while(true){
        if(Serial1.available()){
          b = char(Serial1.read());  
          break;
        }
    }
    int val = int(a-'0')*10 + int(b-'0');

    return val;
    
}
  
  
  
#endif
