// This is the arduino code
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>

Adafruit_AlphaNum4 alpha4 = Adafruit_AlphaNum4();
String displayText = "";
int scrollIndex = 0;
unsigned long lastScrollTime = 0;
const int scrollDelay = 300;  // Adjust scroll speed (milliseconds)

void setup() {
    Serial.begin(115200);
    alpha4.begin(0x70);  // I2C address for Adafruit 16-segment display
    alpha4.clear();
    alpha4.writeDisplay();
}

void loop() {
    if (Serial.available()) {
        displayText = Serial.readStringUntil('\n');  // Read new text
        scrollIndex = 0;  // Reset scrolling
    }

    if (millis() - lastScrollTime > scrollDelay) {
        lastScrollTime = millis();
        scrollText();
    }
}

void scrollText() {
    alpha4.clear();

    for (int i = 0; i < 4; i++) {
        int charIndex = scrollIndex + i;
        if (charIndex < displayText.length()) {
            alpha4.writeDigitAscii(i, displayText[charIndex]);
        } else {
            alpha4.writeDigitAscii(i, ' ');  // Add spaces at the end
        }
    }

    alpha4.writeDisplay();
    scrollIndex++;

    if (scrollIndex > displayText.length()) {
        scrollIndex = 0;  // Restart scrolling
    }
}
