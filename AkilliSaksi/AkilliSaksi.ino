#include<Servo.h>
#define ns A0
Servo kos;

int nem_degeri = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(13,OUTPUT);
  kos.attach(9);
  
}

void loop() {
  int eso=analogRead(A1);//yağmur sensörü
  Serial.println(eso);

  if(eso<100){
    kos.write(0);
  }
  
  else{
   kos.write(180);
  }
  
  
  nem_degeri = analogRead(ns);//nem sensörü
  

  if(analogRead(ns)<700){
    digitalWrite(2,0);
    digitalWrite(4,1);

  }

  
else{
  digitalWrite(2,1);
  digitalWrite(4,0);
  
}

}
