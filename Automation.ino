#include<ESP8266WiFi.h>
#include<Adafruit_MQTT_Client.h>

#define server "io.adafruit.com"
#define wifi "xxxxxxxxxxxx"    //Name of the wifi
#define password "xxxxxxxxx"   //Wifi password
#define port 1883
#define username "xxxxxxxxxx"  //Adafruit username
#define key "xxxxxxxxxx"       //AIO Key

WiFiClient esp;

Adafruit_MQTT_Client mqtt(&esp,server,port,username,key);

Adafruit_MQTT_Subscribe feed=Adafruit_MQTT_Subscribe(&mqtt,username"/feeds/ldr");

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(10);
  Serial.println("Adafruit MQTT");
  Serial.print("Connecting to");
  Serial.println(wifi);

  WiFi.begin(wifi,password);
  while(WiFi.status()!=WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Wifi connected");
  Serial.println("IP Address: ");
  Serial.println(WiFi.localIP());
  
  mqtt.subscribe(&feed);
  
  Serial.print("Connecting to MQTT");
  while(mqtt.connect())
  {
    delay(500);
    Serial.print(".");
  }
pinMode(16,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(mqtt.readSubscription(5000))
  {
    Serial.print("Got: ");
    Serial.print((char*)feed.lastread);
    int a=atoi((char*)feed.lastread);

    Serial.print(" ");
    Serial.println(a);
    if(a==0)
    {
      digitalWrite(16,LOW);
    }
    else
    {
      digitalWrite(16,HIGH);
    }
  }
}
