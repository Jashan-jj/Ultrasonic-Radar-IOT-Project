#include <WiFi.h>
#include<PubSubClient.h>
#include<ESP32Servo.h>

int sensorVal, sensorAng;
//int sensorPin = 36;//<Define your Pin>

const char* ssid ="vivo 1920";
const char* passwd = "13141314";
//char userName[] = "SonuVerma"; // anything you want
//char passKey[] = "2WCG40CIFIQOITNX"; // profile key or user api key
char writeApiKey[] = "MM2UOC73C0SWBNEZ"; // channel api key
long channelId = 2593832; // channel id

//experimenatl
char userName[] = "JykLACYyMAoEDg0MLAQdLgc"; // anything you want
char passKey[] = "uf+PbIXMq6ibBB4jv6lPUks1"; // profile key or user api key
char clientId[] = "JykLACYyMAoEDg0MLAQdLgc";


// static const char alphanum[] = "0123456789"
// "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// "abcdefghijklmnopqrstuvwxyz"; // for generation of client ID

WiFiClient client;

const char* server = "mqtt3.thingspeak.com";

PubSubClient mqttClient(client); // init PubSub

unsigned long lastConnectionTime = 0;
const unsigned long postingInterval = 0; // post data every 20 sec (10s = 1s)

const int trigPin = 12;
const int echoPin = 13;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  int status = WL_IDLE_STATUS;
  
  Serial.println("Esp32 started..!");
  
  while(status != WL_CONNECTED){
    status = WiFi.begin(ssid, passwd);
    status = WL_CONNECTED;
    delay(5000);
    }

    Serial.println("Connected to Wifi...");
    mqttClient.setServer(server, 1883);
    Serial.print("mqttClient State: "); 
    Serial.println(mqttClient.state());

  pinMode(trigPin, OUTPUT); // trigPin as an Output
  pinMode(echoPin, INPUT); // echoPin as an Input
  Serial.begin(9600);
  myServo.attach(5);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(!mqttClient.connected()){
    
    reconnect();
    
    }

    mqttClient.loop();

    if(millis() - lastConnectionTime > postingInterval){
      
      Serial.print("mqttClient State: "); 
      Serial.println(mqttClient.state());
    }


    for (int i = 0; i <= 180; i=i+10) {
    myServo.write(i);
    int distance = calculateDistance();
    int angle = i;
    Serial.print("Angle: ");
    Serial.print(i);
    Serial.print(", Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if(distance < 25){
    mqttPublishFeed(distance, angle);
    }
    else{
      Serial.println("No object detected.");
    }
    delay(1000);
  }

  // rotating servo from 165 to 15 degrees
  for (int i = 180; i > 0; i= i-10) {
    myServo.write(i);
    int distance = calculateDistance();
    int angle = i;

    Serial.print("Angle: ");
    Serial.print(i);
    Serial.print(", Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    
    if(distance < 25){
    mqttPublishFeed(distance, angle);
    }
    else{
      Serial.println("No object detected.");
    }
    delay(1000);
  }
    
}

// reconnect function
void reconnect(){
// char clientId[9];
// char clientId[] = "HDkcJh81PTo0IyEOKRMsECk";

  while(!mqttClient.connected()){
    Serial.println("Trying to get connection...");
// for(int i=0; i<8; i++){
// clientId[i] = alphanum[random(51)];
// }
// clientId[8]='\0';
// Serial.println(clientId);
      delay(2000);
      
  if(mqttClient.connect(clientId,userName,passKey)){
      Serial.println("Connected..!");
      bool PubSub_Status = mqttClient.connected();
      Serial.print("mqttClient.connected after mqttClient.connect: "); Serial.println(PubSub_Status);
      Serial.print("mqttClient State: "); Serial.println(mqttClient.state());
      }
  else{
      Serial.print("failed, rc=");
      Serial.print(mqttClient.state());
      Serial.println("try again in 5 sec");
      delay(5000);
      }
    }
  }

  void mqttPublishFeed(int dis, int ang){
    // provide data generation mechanism below
    sensorVal = dis;
    sensorAng = ang; // we can put analog/digital read but for exeperiments we use random function
    String data = String("field1=") + String(sensorVal, DEC)+ String("&field2=")+ String(sensorAng, DEC) +"&status=MQTTPUBLISH";
    int length = data.length();
    const char *msgBuffer;
    msgBuffer = data.c_str();
    Serial.println(msgBuffer);

// String topicString = "channels/" + String(channelId) + "/publish/" + String(writeApiKey);
    String topicString = "channels/" + String(channelId) + "/publish";
    length = topicString.length();
    const char *topicBuffer;
    topicBuffer = topicString.c_str();
    Serial.println(topicBuffer);
    bool mqttpublish = mqttClient.publish(topicBuffer, msgBuffer);
    Serial.print("mqttClient.publish status: "); Serial.println(mqttpublish);
    bool PubSub_Status = mqttClient.connected();
    Serial.print("mqttClient.connected after publish: "); Serial.println(PubSub_Status);

    lastConnectionTime = millis();
    
    }
int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}