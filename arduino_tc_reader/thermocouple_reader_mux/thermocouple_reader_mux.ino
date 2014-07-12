
#include <Adafruit_MAX31855.h>

int thermoDO = 3;
int thermoD1 = 6;
int thermoCS = 4;
int thermoCLK = 5;

Adafruit_MAX31855 thermocouple0(thermoCLK, thermoCS, thermoDO);
Adafruit_MAX31855 thermocouple1(thermoCLK, thermoCS, thermoD1);

void setup()
{
  Serial.begin(9600);
   
  Serial.println("Multiple thermocouple reading test");
  delay(500);
}

void loop()
{
  Serial.print("Internal Temp Chip C0 = ");
  Serial.println(thermocouple0.readInternal());
  Serial.print("Internal Temp Chip C1 = ");
  Serial.println(thermocouple1.readInternal());
  
  double c0 = thermocouple0.readCelsius();
  double c1 = thermocouple1.readCelsius();
   if (isnan(c0) && isnan(c1)) {
     Serial.println("Something wrong with thermocouple!");
   } else {
     Serial.print("C0 = "); 
     Serial.println(c0);
     Serial.print("C1 = "); 
     Serial.println(c1);
   }
  
  delay(1000);

}
