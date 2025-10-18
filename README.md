# Aerolyte

**Mini Air-Quality Monitor using Arduino**

Aerolyte is a compact, beginner-friendly device that measures local air quality using an MQ-135 gas sensor and displays results on a 0.96" OLED screen. It shows real-time readings and classifies air quality as **Good**, **Moderate**, or **Poor**.

## Features
- Real-time air quality readings
- Visual display on an OLED screen
- Easy-to-build using Arduino and basic components
- Portable and expandable for future projects

## Components
- Arduino Nano / ESP32
- MQ-135 Gas Sensor
- 0.96" OLED Display (SSD1306)
- Breadboard + Jumper Wires
- USB Cable / Miscellaneous parts

## Wiring
**MQ-135 Sensor**
- VCC → 5V
- GND → GND
- Analog Out → A0

**OLED Display (I2C)**
- VCC → 3.3V / 5V (check OLED specs)
- GND → GND
- SDA → A4 (Uno/Nano)
- SCL → A5 (Uno/Nano)

## Installation
1. Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software)  
2. Install the following libraries via Arduino IDE → Sketch → Include Library → Manage Libraries:
   - Adafruit SSD1306
   - Adafruit GFX
3. Open `aerolyte.ino` in Arduino IDE
4. Connect your Arduino board
5. Upload the sketch

## Usage
- The OLED will display air quality: Good, Moderate, or Poor  
- Serial Monitor can show raw sensor values for calibration