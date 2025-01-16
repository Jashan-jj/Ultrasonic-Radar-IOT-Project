![project__pages-to-jpg-0001](https://github.com/user-attachments/assets/3fc82121-d7e7-4db3-947f-d35512ba9838)
# Ultrasonic Radar System 🚀  
A smart IoT-based distance and obstacle detection system using the **HC-SR04 Ultrasonic Sensor**, **ESP32 Microcontroller**, and **SG90 Servo Motor**. The project leverages **ThingSpeak** for cloud data visualization and a **Flutter-based mobile app** for real-time monitoring, making it ideal for IoT applications such as distance measurement, obstacle detection, and smart home automation.  

---

## **🌟 About the Project**  

This project integrates an ultrasonic sensor with an ESP32 microcontroller to measure distances and angles. The data is uploaded to **ThingSpeak**, enabling cloud-based analytics and remote monitoring. A **Flutter-based mobile app** provides users with real-time visualization of sensor readings locally.  

Key applications include:  
- Distance measurement.  
- Obstacle detection for robotics.  
- Smart home automation.
![WhatsApp Image 2024-11-23 at 13 28 29 (2)](https://github.com/user-attachments/assets/ea13844d-9ef4-4581-88d1-3a38debbab16)


---

## **✨ Features**  

- **Accurate Distance Measurement**: Uses the HC-SR04 Ultrasonic Sensor.  
- **Motor Control**: Rotates the SG90 Servo Motor based on sensor readings.  
- **Cloud Integration**: Real-time data upload to **ThingSpeak** for remote visualization.  
- **Mobile App**: Intuitive real-time data visualization using a Flutter-based application.  
- **IoT-Ready Design**: Compact, efficient, and scalable for various use cases.  

---

## **🛠️ Tech Stack**  

- **Arduino IDE**: For programming the ESP32 and sensor control.  
- **ThingSpeak**: IoT analytics platform for data storage and visualization.  
- **Flutter**: For creating a user-friendly mobile application interface.  
- **ESP32**: Microcontroller for data processing and communication.  

---

## **🔌 Circuit Connections**  

### **1. HC-SR04 Ultrasonic Sensor**  

| **Pin**       | **Connection to ESP32** |  
|---------------|--------------------------|  
| VCC           | 5V                      |  
| GND           | GND                     |  
| TrigPin       | GPIO 5                  |  
| EchoPin       | GPIO 18                 |  

---

### **2. SG90 Servo Motor**  

| **Wire Color** | **Connection to ESP32** |  
|----------------|--------------------------|  
| Red (VCC)      | 3.3V                    |  
| Brown (GND)    | GND                     |  
| Orange (Control)| GPIO 16                |  

---
![WhatsApp Image 2024-11-24 at 11 12 09 (1)](https://github.com/user-attachments/assets/d651b769-d3b6-4602-a633-63a8968ae992)


### **3. ESP32 Microcontroller**  

- Ensure the ESP32 is powered via USB or an external source (e.g., power bank).  
- Servo motors may require additional power to avoid overloading the ESP32.  

---

## **🚀 How to Run the Project**  

### **Step 1: Hardware Setup**  
1. Assemble the hardware components as per the circuit connections.  
2. Verify connections to avoid short circuits.  

### **Step 2: ThingSpeak Setup**  
1. Create an account on [ThingSpeak](https://thingspeak.com).  
2. Set up a new channel and note down the **Channel ID** and **Write API Key**.  

### **Step 3: Arduino Code**  
1. Clone this repository.  
2. Open the provided Arduino code in the **Arduino IDE**.  
3. Update the code with your Wi-Fi credentials and ThingSpeak API Key.  
4. Upload the code to the ESP32 using a USB connection.  

### **Step 4: Flutter App**  
1. Download the mobile app from the **repository link** or compile it using Flutter.  
2. Launch the app and start monitoring sensor data in real time.  

---

## **📈 Visualizations**  

### **1. ThingSpeak Visualization**  
- View real-time and historical data on the ThingSpeak dashboard.  
- Analyze data trends for distances and angles.
  ![Screenshot_2024_1120_111638](https://github.com/user-attachments/assets/f0a556ae-e2af-4c1b-995f-4069e41f9d51) ![Screenshot_2024_1120_111658](https://github.com/user-attachments/assets/1c406f3d-38ba-4ade-9c07-3d8e855fd48b)

### **2. Mobile App**  
- Intuitive and interactive real-time sensor data display.  
- Easily monitor environmental changes through the app.  
![WhatsApp Image 2024-11-23 at 13 28 27](https://github.com/user-attachments/assets/d557502e-e13e-4377-a176-66764a64c449)

---

## **🎯 Future Enhancements**  

- **AI Integration**: Adding predictive algorithms for obstacle detection.  
- **Enhanced Visualization**: Web-based dashboards for broader access.  
- **Multiple Sensor Support**: Integrating additional sensors for extended functionality.  
- **Energy Optimization**: Improving power efficiency for long-term deployments.  

---

## **📜 License**  
This project is licensed under the MIT License. See the `LICENSE` file for more details.  

---

## **🤝 Contributions**  
Contributions are welcome! Feel free to open an issue or submit a pull request.  

---

## **📧 Contact**  
For inquiries or feedback, reach out to:  
**[Jashanpreet Singh]**  
**[jashan14729@gmail.com]**  
