
#define BLYNK_PRINT Serial

// WiFi iletişimi için gerekli kütüphaneler
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Blink server'ında bu sensöre özel tanınma bileti
char auth[] = "8af83da6bc31489b9eec51b8f0bc3890";

// Cihazın bağlanıcağı WiFi'ın bilgileri
char ssid[] = "Tilgin-ku5QAdxxSxK6";
char pass[] = "dyDyuBt9hTbkR";

void setup()
{
  // Serial Port'u başlatıyorum
  Serial.begin(9600);
// İnternet ve Server bağlantısını gerçekleştiriyorum
  Blynk.begin(auth, ssid, pass);

}

void loop()
{
  //Server'a bağlantı kuruyorum.
  //Server'dan internet aracılığı ile bu cihazın analog inputuna erişip, işlenicek
  Blynk.run();
}
