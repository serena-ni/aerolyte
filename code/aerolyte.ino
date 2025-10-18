void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define MQ135_PIN A0   // analog input pin

void setup() {
  Serial.begin(9600);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Aerolyte Monitor");
  display.display();
  delay(2000);
}

void loop() {
  int sensorValue = analogRead(MQ135_PIN);

  String quality;
  if (sensorValue < 300) quality = "Good";
  else if (sensorValue < 600) quality = "Moderate";
  else quality = "Poor";

  Serial.print("MQ135 Value: ");
  Serial.print(sensorValue);
  Serial.print(" | Air Quality: ");
  Serial.println(quality);

  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("Aerolyte Monitor");

  display.setTextSize(2);
  display.setCursor(0, 20);
  display.println(quality);

  display.setTextSize(1);
  display.setCursor(0, 50);
  display.print("Value: ");
  display.println(sensorValue);

  display.display();

  delay(2000); // update every 2 seconds
}

}
