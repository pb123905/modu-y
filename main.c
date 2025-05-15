#include "led.h"
#include "keyboard.h"

void Delay(int iDelayInMS){
   int iLoopCounter;
   iDelayInMS=iDelayInMS*12000;
   for(iLoopCounter=0; iLoopCounter< iDelayInMS; iLoopCounter++) {}
    
}


int main(){
  LedInit();
  KeyboardInit();
  while(1){
    Delay(100);
    switch(eKeyboardRead()){
       case BUTTON_1:
         LedStepRight();
         break;
       case BUTTON_2:
         LedStepLeft();
         break;
       default:
         break;

}
}
}

