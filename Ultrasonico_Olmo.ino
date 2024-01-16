//
//FILE: Ultrasonico_Olmo.ino
//AUTHOR: ELR, AGA,INAG
//PURPOSE: Medición de distancia


#include <HCSR04.h>

HCSR04 hc(6, 5);          //Pin 6->trigger, pin 5 -> Echo

void setup()
{
    Serial.begin(115200);           //Conexión serial a computadora
    Serial.println("Hola");         //Imprime mensaje
    Serial.println("Ultrasonico");  //Imprime mensaje
}

void loop()
{
  Serial.print("Distancia:");          //Imprime mensaje
  Serial.println(hc.dist());        // Mide distancia
  delay(1000);                      //Tiempo de espera entre ciclos
}