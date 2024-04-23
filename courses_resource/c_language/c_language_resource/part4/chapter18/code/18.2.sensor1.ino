#include <AHT20.h>
#include <Wire.h>
#include <Adafruit_BMP280.h>

#define IIC_SDA 4
#define IIC_SCL 15
AHT20 aht20;
Adafruit_BMP280 bmp;

void setup() {
  Serial.begin(115200);
  pinMode(2,OUTPUT);
  //Wire.begin(IIC_SDA,IIC_SCL);
  // put your setup code here, to run once:
  if(!aht20.begin()){
    Serial.println("Couldnot open aht 20 sensor!");
    while(1);
  }
  if(!bmp.begin()){
    Serial.println("Couldn't open bmp280 sensor!");
    while(1);
  }
  /* Default settings from datasheet. */
  bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,     /* Operating Mode. */
                  Adafruit_BMP280::SAMPLING_X2,     /* Temp. oversampling */
                  Adafruit_BMP280::SAMPLING_X16,    /* Pressure oversampling */
                  Adafruit_BMP280::FILTER_X16,      /* Filtering. */
                  Adafruit_BMP280::STANDBY_MS_500); /* Standby time. */

}


void loop() {
  // put your main code here, to run repeatedly:
  float temp = aht20.getTemperature();
  float humi = aht20.getHumidity();
  Serial.print("Temp:");
  Serial.println(temp);
  Serial.print("Humi:");
  Serial.println(humi);
  float temp2 = bmp.readTemperature();
  Serial.print("Temp2:");
  Serial.println(temp2);
  float press = bmp.readPressure();
  Serial.print("Pressure:");
  Serial.println(press);
  float altitude = bmp.readAltitude(1013.25);
  Serial.print("Altitude:");
  Serial.println(altitude);
  delay(1000);
}
