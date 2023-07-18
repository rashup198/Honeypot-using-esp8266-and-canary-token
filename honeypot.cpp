#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPClient.h>
#include <lwip/napt.h>
const char* ssid = "Rashu";
const char* password = "9993796438";
const char* honeypotSsid = "Honeypot";
const char* honeypotPassword = "password";

ESP8266WebServer server(80);

bool isInternetConnected = false;

void checkInternetConnection() {
  if (WiFi.status() == WL_CONNECTED) {
    WiFiClient client;
    if (client.connect("www.google.com", 80)) {
      isInternetConnected = true;
    } else {
      isInternetConnected = false;
    }
    client.stop();
  } else {
    isInternetConnected = false;
  }
}

void handleRoot() {
  String message = "<h1>Welcome to the Honeypot!</h1>";
  message += "<p>Your IP Address: " + server.client().remoteIP().toString() + "</p>";
  
  if (isInternetConnected) {
    message += "<p>Internet Connection: Connected</p>";
    // Send email using Canarytokens
    WiFiClient client;
    HTTPClient http;
    http.begin(client, "e0apxiklq4v8emplh5r2j6m51.canarytokens.com");
    int httpResponseCode = http.GET();
    http.end();

    if (httpResponseCode == HTTP_CODE_OK) {
      message += "<p>Email Sent: Yes</p>";
    } else {
      message += "<p>Email Sent: Failed</p>";
    }
  } else {
    message += "<p>Internet Connection: Disconnected</p>";
    message += "<p>Email Sent: Not Applicable</p>";
  }
  
  server.send(200, "text/html", message);
}

void setup() {
  Serial.begin(115200);

  // Connect to your own Wi-Fi network
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

  Serial.println("Connected to WiFi network");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  // Check internet connection
  checkInternetConnection();

  // Set up the honeypot access point
  IPAddress honeypotIP(192, 168, 4, 1);  // IP address of the honeypot access point
  IPAddress gatewayIP(192, 168, 1, 1);   // IP address of the gateway (router)
  IPAddress subnetMask(255, 255, 255, 0);
  WiFi.softAPConfig(honeypotIP, gatewayIP, subnetMask);

  WiFi.softAP(honeypotSsid, honeypotPassword);

  // Enable NAT
  ip_napt_enable_no(SOFTAP_IF, 1);

  // Start the web server
  server.on("/", handleRoot);
  server.begin();
  WiFiClient client;
    HTTPClient http;
  http.begin(client, "e0apxiklq4v8emplh5r2j6m51.canarytokens.com");
  int httpResponseCode = http.GET();
  http.end();
}

void loop() {
  server.handleClient();

  // Check internet connection periodically
  static unsigned long lastCheckTime = 0;
  unsigned long currentTime = millis();
  if (currentTime - lastCheckTime > 5000) {  // Check every 5 seconds
    checkInternetConnection();
    lastCheckTime = currentTime;
  }
}


 