#include <Wire.h>
#include <SPI.h>
#include <DHT.h>

#define BLYNK_TEMPLATE_ID "TMPL7oroecc0"
#define BLYNK_DEVICE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "WdwFyKsP5cvPi_1bcBseDNcArfWQKakT"

char auth[] = BLYNK_AUTH_TOKEN;

#include <WiFiManager.h>
// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial
//#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#include "DFRobot_ESP_PH.h"
#include "DFRobot_EC10.h"
#include "EEPROM.h"

/////////////////////////////////// Variable Setup ///////////////////////////////////

#define EC_PIN 14
#define MAIN_PUMP 26
#define LED 25
#define pHup 33
#define pHdown 32
#define PH_PIN 5    //the esp gpio data pin number
#define ESPADC 4096.0   //the esp Analog Digital Convertion value
#define ESPVOLTAGE 3300 //the esp voltage supply value


DHT dht(12 , DHT22);
DFRobot_EC10 ec;
DFRobot_ESP_PH ph;

#define ESPADC 4096.0   //the esp Analog Digital Convertion value
#define ESPVOLTAGE 3300 //the esp voltage supply value
unsigned long timepoint = millis();
int Lux , Ec ;
float voltage, phValue,ecValue,humidity,temperature ;



///// controller /////


///// controller /////

/////////////////////////////////// Variable Setup ///////////////////////////////////

void setup() {
  Serial.begin(115200);
  dht.begin();
  ph.begin();
  ec.begin();
  Blynk.config(auth);
  
  EEPROM.begin(32);//needed to permit storage of calibration value in eeprom
  pinMode(12,INPUT);
  pinMode(EC_PIN,INPUT);
  pinMode(PH_PIN,INPUT);
  pinMode(MAIN_PUMP,OUTPUT);
  pinMode(LED,OUTPUT);
  pinMode(pHup,OUTPUT);
  pinMode(pHdown,OUTPUT);
  
  WiFiManager wm;
  //wm.resetSettings();
 
  bool res;
  // res = wm.autoConnect(); // auto generated AP name from chipid
  // res = wm.autoConnect("AutoConnectAP"); // anonymous ap
  res = wm.autoConnect("SMH"); // password protected ap

  if (!res) {
    Serial.println("เชื่อมต่อล้มเหลว");
    ESP.restart();
  }

  else {
    //if you get here you have connected to the WiFi
    Serial.println("เชื่อมต่อสำเร็จ :)");
  }
}

void loop() {

  Blynk.run();
//
//
  
  
  humidity = dht.readHumidity();
  temperature = dht.readTemperature();
  
if (millis() - timepoint > 1000U) //time interval: 1s
  {
    timepoint = millis();
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println(F("อ่านค่าจาก เซนเซอร์วัด DHT ล้มเหลว!"));
    //return;
  }
  
  Serial.print("temperature : "); Serial.print(temperature);
  Serial.print("C / Humidity : "); Serial.print(humidity); Serial.println("%");
  ///////////////////////////
  //voltage = rawPinValue / esp32ADC * esp32Vin
    voltage = analogRead(PH_PIN) / ESPADC * ESPVOLTAGE; // read the voltage
    Serial.print("voltage:");
    Serial.println(voltage, 4);
    
    //temperature = readTemperature();  // read your temperature sensor to execute temperature compensation
    Serial.print("temperature:");
    Serial.print(temperature, 1);
    Serial.println("^C");

    phValue = ph.readPH(voltage, temperature); // convert voltage to pH with temperature compensation
    Serial.print("pH:");
    Serial.println(phValue+8, 4);
    //////////////
    voltage = analogRead(EC_PIN)/1024.0*5000;  // read the voltage
      Serial.print("voltage:");
      Serial.print(voltage);
      //temperature = readTemperature();  // read your temperature sensor to execute temperature compensation
      ecValue =  ec.readEC(voltage,temperature);  // convert voltage to EC with temperature compensation
      Serial.print("  temperature:");
      Serial.print(temperature,1);
      Serial.print("^C  EC:");
      Serial.print(ecValue,1);
      Serial.println("ms/cm");
  }
  
  ph.calibration(voltage, temperature); // calibration process by Serail CMD

/////////////////////////////////////////////////////////////////////////////////

     Blynk.virtualWrite(V4,humidity);
     Blynk.virtualWrite(V5,temperature);
     Blynk.virtualWrite(V7,phValue+8);
     Blynk.virtualWrite(V8,ecValue);
/////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////// SETTING Blynk CONTROLLER ///////////////////////////////////
  BLYNK_WRITE(V0){
  int StateValue = param.asInt();
  digitalWrite(MAIN_PUMP,StateValue);
  }
  BLYNK_WRITE(V1){
  int StateValue = param.asInt();
  digitalWrite(LED,StateValue);
  }
  BLYNK_WRITE(V2){
  int StateValue = param.asInt();
  digitalWrite(pHup,StateValue);
  }
  BLYNK_WRITE(V3){
  int StateValue = param.asInt();
  digitalWrite(pHdown,StateValue);
  }
  
/////////////////////////////////// SETTING Blynk CONTROLLER ///////////////////////////////////
