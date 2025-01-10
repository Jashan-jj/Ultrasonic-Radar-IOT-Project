![project__pages-to-jpg-0001](https://github.com/user-attachments/assets/00d144e4-d714-4045-8085-06b5fcd2c640)
# Ultrasonic-Radar-IOT-Project
## **About the Project**

This project utilizes an Ultrasonic Sensor (HC-SR04) with an ESP32 microcontroller to measure distances and angles. The collected data is uploaded to ThingSpeak, an IoT analytics platform that allows real-time data visualization. The sensor's distance readings are captured and transmitted wirelessly to ThingSpeak, where they can be monitored and analyzed remotely. Additionally, a Flutter-based mobile app is used for local real-time visualization.
The project is ideal for IoT applications like distance measurement, obstacle detection, or smart home automation.

![img8](https://github.com/user-attachments/assets/a7a8f734-58cc-4ee3-8864-55023ba25973)
![img4](https://github.com/user-attachments/assets/52df05d1-73c7-45f3-ba22-843ae73cfcb9)


### **Features**

* Measures distance using the HC-SR04 Ultrasonic Sensor.  
* Controls the SG90 Servo Motor based on distance measurements.  
* Uploads sensor data to ThingSpeak for cloud visualization.  
* Real-time data visualization through a Flutter-based mobile app.  

### **Tech Stack**

* Arduino IDE: For coding the ESP32 and controlling the servo motor.  
* ThingSpeak: For cloud data storage and visualization.  
* Flutter: For mobile app UI and real-time visualization.  
* ESP32: Microcontroller for sensor input, motor control, and data transmission.  

### **Circuit Connections:**  
#### HC-SR04 Ultrasonic Sensor

- VCC: Connect to 5V on ESP32.  
- GND: Connect to GND on ESP32.  
- TrigPin: Connect to GPIO 5 on ESP32.  
- EchoPin: Connect to GPIO 18 on ESP32.  

#### SG90 Servo Motor

- VCC (Red wire): Connect to 3.3V on ESP32.  
- GND (Brown wire): Connect to GND on ESP32.  
- Control Pin (Orange wire): Connect to GPIO 16 on ESP32.  

#### ESP32 Microcontroller

Ensure the ESP32 is powered through a USB or external power source, especially when using the servo motor, which may draw more current.

![ctdg](https://github.com/user-attachments/assets/28e3815a-0f46-414d-b773-f236438e0ef0)
### **How to Run the Project**
#### Hardware Setup:
Connect the HC-SR04 Ultrasonic Sensor and SG90 Servo Motor to the ESP32 as per the above connections.
#### ThingSpeak Setup:
Create a channel on ThingSpeak and configure the Arduino code with your Channel ID and Write API Key.
#### Arduino Code: 
Upload the provided code to the ESP32 using the Arduino IDE.
#### Flutter App: 
The mobile app displays the data in real-time and can be run on any Android or iOS device.

