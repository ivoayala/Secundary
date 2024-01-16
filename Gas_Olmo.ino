//
//FILE: Gas_Olmo.ino
//AUTHOR: ELR, AGA,INAG
//PURPOSE: Medición de calidad de aire

int sensorValue;

void setup() {
  Serial.begin(115200);       //Conexión serial a computadora
  Serial.println("Hola");     //Imprime mensaje
  Serial.println("Gas");      //Imprime mensaje
}

void loop() {
  sensorValue = analogRead(0);        //Leer el sensor en puerto analógioo
  
  Serial.print("Gas:");               //Imprime mensaje
  Serial.println(sensorValue, DEC);   //Imprime valor medido

  delay(1000);                        //Tiempo de espera entre ciclos 
}
// -- END OF FILE --
