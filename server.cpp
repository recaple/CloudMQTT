#include <iostream>
#include </root/pubsubclient/src/CloudMQTT/Ethernet.h>
#include </root/pubsubclient/src/CloudMQTT/PubSubClient.h>
using namespace std;
const char *mqtt_server = "server";
const int mqtt_port = 11140;
const char *mqtt_user = "Login"; 
const char *mqtt_pass = "Pass";
void callback(char* topic, byte* payload, unsigned int length) {
  // handle message arrived
}
EthernetClient ethClient;
PubSubClient client(mqtt_server, 1883, callback, ethClient);
#define BUFFER_SIZE 100

int main(){
cout << "Hello world!";
//if (WiFi.status() == WL_CONNECTED) {
//if (!client.connected()) {
//Serial.println("Connecting to MQTT server");
//if (client.connect(MQTT::Connect("arduinoClient2")
//.set_auth(mqtt_user, mqtt_pass))) {
//Serial.println("Connected to MQTT server");
//client.set_callback(callback);
//client.subscribe("test/led");
//} else {
//Serial.println("Could not connect to MQTT server"); 
//}
//}
return 0;
}
