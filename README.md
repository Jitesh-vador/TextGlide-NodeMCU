# TextGlide-NodeMCU
# ESP-Marquee 🚀  

A simple project that enables a **rolling text display** on a **16-segment LED panel** using an **ESP8266 NodeMCU**. Send messages from a Python script, and watch them scroll smoothly across the display in real time!  

## ✨ Features  
✅ **Serial Communication** – Send text from Python to ESP8266  
✅ **Smooth Scrolling** – Continuous left-to-right text movement  
✅ **16-Segment LED Display Support** – Works with Adafruit Alphanumeric Backpack  
✅ **Customizable Speed** – Adjust scrolling speed easily  

## 🛠️ Hardware Requirements  
- **ESP8266 NodeMCU**  
- **16-Segment LED Display** (Adafruit Alphanumeric Backpack recommended)  
- **Jumper Wires**  
- **Micro USB Cable**  

## 📌 How It Works  
1. Upload the **Arduino code** to the ESP8266.  
2. Connect the **16-segment display** via **I2C (SDA & SCL)**.  
3. Run the **Python script** and type messages.  
4. Watch the text scroll across the **LED display**!  

## 🔧 Setup  

### Arduino Code (ESP8266)  
1. Install **Adafruit GFX Library** & **Adafruit LED Backpack Library** in Arduino IDE.  
2. Upload `esp_marquee.ino` to your ESP8266.  
