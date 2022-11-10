#include <Arduino.h>

int PWout=2; //Output pin of the signal for the pulse to the injector
int VinPre=3; //Analog read pin for pre resistor
int VinPost=4; //Analog read pin for post resistor
int pulses=0; //





void setup() {
  Serial.begin(115200);

  // add external voltage (Javascript) with name "pin n" to access output pins
  pinMode(PWout, OUTPUT);
  pinMode(VinPre, INPUT);
  pinMode(VinPost, INPUT);
  
}

void loop() {
  


  while(pulses<=100){
    digitalWrite(PWout, HIGH);
    Serial.println("Injector on");
    delay(50);
    Serial.println("Injector off");
    digitalWrite(PWout, LOW);
    delay(50);
  }
  

}