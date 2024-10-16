/*
  Simple functional test for the ESP32-C3 Wi-Fi environment sensor node

  This program will interrogate the BME280 sensor and print out readings
  to the serial port to test basic functionality of the board

  ESP32 Arduino core must be installed
  (https://github.com/espressif/arduino-esp32)

  Set Arduino Tools menu options as follows:
  Board: ESP32C3 Dev Module
  USB CDC On Boot: Enabled
    
  Adapted from Example1_BasicReadings.ino by Nathan Seidle
  from SparkFun_BME280_Arduino_Library
  (https://github.com/sparkfun/SparkFun_BME280_Arduino_Library/)
*/

#include <Wire.h>

#include "SparkFunBME280.h"
BME280 mySensor;

void setup()
{
  Serial.begin(115200);
  Serial.println("Reading basic values from BME280");

  // board specific I2C pins SDA=GPIO7, SCL=GPIO8
  Wire.setPins(7, 8);
  
  Wire.begin();

  // SDO pin of BME280 is pulled high, address 0x77
  mySensor.setI2CAddress(0x77);
  if (mySensor.beginI2C() == false) //Begin communication over I2C
  {
    Serial.println("The sensor did not respond. Please check wiring.");
    while(1); //Freeze
  }
}

void loop()
{
  Serial.print("Humidity: ");
  Serial.print(mySensor.readFloatHumidity(), 0);

  Serial.print(" Pressure: ");
  Serial.print(mySensor.readFloatPressure(), 0);

  Serial.print(" Temp: ");
  //Serial.print(mySensor.readTempC(), 2);
  Serial.print(mySensor.readTempF(), 2);

  Serial.println();

  delay(50);
}
