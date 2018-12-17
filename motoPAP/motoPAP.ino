#include <Pushbutton.h>

//-------- CONFIG.PINES -----------
const int dirPin = 4;
const int stepPin = 3;
const int finCarrera = 2;
Pushbutton button(finCarrera);

//-------- DATOS ------------------

const int steps = 1200;
const int microSeg = 1000;
int stepDelay;


void setup() {
 
   pinMode(dirPin, OUTPUT);
   pinMode(stepPin, OUTPUT);

}

void moverMotor(){
 
   digitalWrite(stepPin,HIGH);
   delayMicroseconds(microSeg);
   digitalWrite(stepPin,LOW);
   delayMicroseconds(microSeg);  
}


void loop() {
  
     digitalWrite(dirPin, LOW);  
      
     while(!button.isPressed()){

        moverMotor();
       
       }

     while(button.isPressed()){

       delay(1000);
       digitalWrite(dirPin, HIGH);
       
       for(int i=0; i<=steps; i++){
         
        moverMotor();
        
       }
       
     delay(2000);

  }

 
   
  
}
