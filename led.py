#this is the python code 
import serial

ESP_PORT = "COM5"  # Change based on your OS
BAUD_RATE = 115200

try:
    ser = serial.Serial(ESP_PORT, BAUD_RATE, timeout=1)
    print(f"Connected to {ESP_PORT}")

    while True:
        user_input = input("Enter text to display: ")
        ser.write((user_input + "\n").encode())  # Send text to ESP8266

except serial.SerialException as e:
    print(f"Error: {e}")

except KeyboardInterrupt:
    print("\nExiting...")
