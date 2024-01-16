#include <HCSR04.h>

HCSR04 hc(5, 6); //(trig pin , echo pin)

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println(hc.dist()); // Muestra la distancia
    delay(60);                 //Espera 60 segundos
}