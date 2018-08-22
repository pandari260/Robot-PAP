const int dirPin = 4;
const int stepPin = 3;
 
const int steps = 200;
int stepDelay;
 
void setup() {
   // Marcar los pines como salida
   pinMode(dirPin, OUTPUT);
   pinMode(stepPin, OUTPUT);
}

int converToDeg(int n){
  
  }

void loop() {
   //Activar una direccion y fijar la velocidad con stepDelay
   digitalWrite(dirPin, HIGH);
   for(int i=0; i<=800; i++){
   
     digitalWrite(stepPin,HIGH);
     delayMicroseconds(1000);
     //delay(15);
     digitalWrite(stepPin,LOW);
     //delay(15);
     delayMicroseconds(1000);
   }
   delay(2000);
   digitalWrite(dirPin, LOW);
   for(int i=0; i<=800; i++){
     //3200 = 360 grados
     
     digitalWrite(stepPin,HIGH);
     delayMicroseconds(1000);
     //delay(15);
     digitalWrite(stepPin,LOW);
     //delay(15);
     delayMicroseconds(1000);
   }
   delay(2000);
}
