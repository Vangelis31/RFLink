// ************************************* //
// * Arduino Project RFLink-esp        * //
// * https://github.com/couin3/RFLink  * //
// * 2018..2020 Stormteam - Marc RIVES * //
// * More details in RFLink.ino file   * //
// ************************************* //

#ifndef CREDENTIALS_h
#define CREDENTIALS_h

#include "RFLink.h"

// local AP
String WIFI_SSID = "MY_HOME";
String WIFI_PSWD = "44MHERAULT67";

// DHCP or Static IP
#define USE_DHCP
#ifndef USE_DHCP
String WIFI_IP = "192.168.1.xxx";
String WIFI_DNS = "192.168.1.xxx";
String WIFI_GATEWAY = "192.168.1.xxx";
String WIFI_SUBNET = "255.255.255.0";
#endif

// MQTT Server
String MQTT_SERVER = "192.168.0.124";
String MQTT_PORT = "1883";
String MQTT_ID = "Mqtt_Raspberri";
String MQTT_USER = "";
String MQTT_PSWD = "";

// MQTT Topic
String MQTT_TOPIC_OUT = "/ESP_RFLINK/msg";
String MQTT_TOPIC_IN = "/ESP_RFLINK/cmd";
String MQTT_TOPIC_LWT = "/ESP_RFLINK/lwt";

#ifdef CHECK_CACERT
static const char ca_cert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIID (...)
-----END CERTIFICATE-----
)EOF";
#endif //CHECK_CACERT

#endif
