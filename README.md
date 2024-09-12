# Ultrasonic-Radar-IOT-Project
About the Project

This project uses an Ultrasonic Sensor (HC-SR04) and an ESP32 microcontroller to measure distances and angles, which are published to an MQTT broker. The project demonstrates how to integrate hardware with real-time data transmission using MQTT, providing distance readings from the ultrasonic sensor and visualizing these data points in a mobile application developed with Flutter.
The system can be used in various IoT applications like distance measurement, obstacle detection, or as part of more complex systems like a radar or automation setup.

![iotfile](https://github.com/user-attachments/assets/36b44c23-0d88-458c-91de-5fc96c9da9d7)

Features

Measures distance using the HC-SR04 Ultrasonic Sensor.

Publishes sensor data (distance and angle) to an MQTT server using ESP32.

Real-time visualization of sensor data via a Flutter-based mobile app.

Integration with a MQTT Broker for wireless data transmission.

Tech Stack

Arduino IDE: For coding the ESP32 microcontroller.

MQTT Protocol: For data communication between the sensor and mobile application.

Flutter: For building the mobile app UI and real-time data visualization.

ESP32: Microcontroller used for handling the sensor input and publishing data.
