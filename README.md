# Elevated Signals: Data Transmission via LiFi using Arduino

## 📌 Project Overview
This project demonstrates wireless data communication using **LiFi (Light Fidelity)** technology with **Arduino**. By modulating visible light through an LED, and detecting it with a photodiode, data can be securely transmitted and decoded using microcontrollers.

## 🎯 Objective
To design and implement a secure, interference-free data transmission system using LiFi with Arduino for low-cost, short-range communication.

## 🧠 Concept
- **Transmitter Side**: Arduino encodes data into binary and sends it as high-speed LED pulses.
- **Receiver Side**: A photodiode or LDR detects the light variations. Another Arduino decodes the signal into readable text and displays it.

## 🧰 Hardware Components
- Arduino Uno
- LED (Transmitter)
- Photodiode or LDR (Receiver)
- 16x2 LCD Display
- Resistors
- Breadboard and Jumper Wires
- Power Source

## 🛠️ Software
- Arduino IDE

## 🔧 How it Works
1. Input text via Serial Monitor or pre-programmed string
2. Data is encoded into binary
3. LED transmits binary as light pulses
4. Photodiode senses the pulses
5. Receiver Arduino decodes and displays data on LCD

## 💡 Applications
- Secure indoor communication
- Smart home data transfer
- RF-restricted environments (e.g., hospitals, aircraft)

## 👤 Authors
- Melvin Joshua R
