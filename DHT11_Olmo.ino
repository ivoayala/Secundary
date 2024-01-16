//
//FILE: DHT11_Olmo.ino
//AUTHOR: ELR, AGA,INAG
//PURPOSE: Medición de temperatura y humead
//Basado en: https://github.com/RobTillaart/DHTstable

#include "DHTStable.h"

DHTStable DHT;

#define DHT11_PIN       2     //Pin digital de conexión

void setup()
{
  Serial.begin(115200);       //Conexión serial a computadora
  Serial.println("Hola");     //Imprime mensaje
  Serial.println("DHT11 \t"); //Imprime mensaje
}

void loop()
{
  DHT.read11(DHT11_PIN);                  //Lee valores de Temp. y Hum.
  Serial.print("Humedad:");               //Imprime mensaje
  Serial.print(DHT.getHumidity(), 1);     //Imprime valor de humedad medida
  Serial.print(",");                      //símbolo necesario para Serial Plotter
  Serial.print("Temperatura:");           //Iimprime mensaje
  Serial.println(DHT.getTemperature(), 1);  //Imprime valor de temperatura medida

  delay(2000);                            //Tiempo de espera entre ciclos
}
// -- END OF FILE --
