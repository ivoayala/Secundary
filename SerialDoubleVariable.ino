  float counter1=0;
  float counter2=0;

void setup()
{
  Serial.begin(9600);       //Conexión serial a computadora

}
void loop()
{
 // Serial.print("H:"); 
  Serial.print(counter1,1);
  Serial.print(","); 
 // Serial.print("T:");  
  Serial.println(counter2,1);
  counter1 +=1.1;
  counter2 +=1.3;
  delay(10000);  // delay in between reads for stability

}
// -- END OF FILE --
