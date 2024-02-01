
#define BLYNK_PRINT Serial
#include <TinyGPS.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

TinyGPS gpst;
WiFiClient client;

char auth[] = "8af83da6bc31489b9eec51b8f0bc3890";
char* ssid[] = {"Redmi Note 9","Tilgin-ku5QAdxxSxK6"};
char* pass[] = {"anilharikadir","ugjhfghfklhg"};
int check_out = 0;
int check_in = 0;
boolean evde_miyim = true;
long telefon = millis();
bool haber = false;
long last_seen;
long first_timer = true;
int length;

BLYNK_READ(V1) // Widget in the app READs Virtal Pin V5 with the certain frequency
{
  // This command writes Arduino's uptime in seconds to Virtual Pin V5
  Blynk.virtualWrite(1, map(analogRead(A0),0,1023,0,15));
}
void setup()
{
  // Debug console

MultyWiFiBlynkBegin();
  

}

void loop()
{
  Blynk.run();


  
}


void MultyWiFiBlynkBegin() {
  int ssid_count=0;
  int ssid_mas_size = sizeof(ssid) / sizeof(ssid[0]);
  do {
    Serial.println("Trying to connect to wi-fi " + String(ssid[ssid_count]));
    WiFi.begin(ssid[ssid_count], pass[ssid_count]);    
    int WiFi_timeout_count=0;
    while (WiFi.status() != WL_CONNECTED && WiFi_timeout_count<50) { //waiting 10 sec
      delay(200);
      Serial.print(".");
      ++WiFi_timeout_count;
    }
    if (WiFi.status() == WL_CONNECTED) {
      Serial.println("Connected to WiFi! Now I will check the connection to the Blynk server");
      Blynk.config(auth);
      Blynk.connect(5000); //waiting 5 sec
    }
    ++ssid_count; 
  }
  while (!Blynk.connected() && ssid_count<ssid_mas_size);
  if (!Blynk.connected() && ssid_count==ssid_mas_size) {
    Serial.println("I could not connect to blynk =( Ignore and move on. but still I will try to connect to wi-fi " + String(ssid[ssid_count-1]));
  }
}
