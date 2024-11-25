//NAMA: Ariea Sampoerna Baruna Wijaya
//PRODI: Teknologi Informasi(FASILKOM)

#include <Servo.h>
Servo iniiservo;
int pos = 0;

void setup(){
  iniiservo.attach(9);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
}

void loop() 
{
while(digitalRead(2)==LOW && pos <= 90)
{
  pos++;
  iniiservo.write(pos);     
}
while(digitalRead(3)==LOW && pos >= 0)
{
  pos--;
  iniiservo.write(pos);   
}
}