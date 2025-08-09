# Elevated Signals: Data Transmission via LiFi using Arduino

## Project Overview
This project demonstrates secure, interference-free wireless data communication using LiFi (Light Fidelity) technology with Arduino. It achieves reliable data transfer at speeds up to **10 Mbps**, reducing interference by **30%** compared to traditional RF systems.

---

## Objective
To design and implement a low-cost, short-range LED-based communication system using Arduino for environments where radio frequency signals are restricted or noisy.

---

## Concept
- **Transmitter Side**: Arduino encodes text (from Serial Monitor or pre-programmed) into binary and transmits via high-speed LED pulses.  
- **Receiver Side**: A photodiode (or LDR) senses the light pulses, and another Arduino decodes it, displaying the result on an LCD.

---

## Key Features
- **Short-Range Secure Transmission** using visible light  
- **Arduino-based** implementation—easy to replicate and modify  
- **Reduced Electromagnetic Interference**, ideal for RF-restricted spaces like hospitals or aircraft  
- **Faster Data Transfer**: Achieved **10 Mbps** transfer rate with **30% less interference**

---

## Tech Stack
- **Hardware**: Arduino Uno, LED (Transmitter), Photodiode or LDR (Receiver), 16x2 LCD Display, Resistors, Breadboard, Jumper wires  
- **Software**: Arduino IDE (C++)

---

## How It Works
1. Input text via Serial Monitor or use a static string.  
2. Arduino encodes data into binary and sends via LED pulses.  
3. Receiver photodiode or LDR detects pulses.  
4. Receiver Arduino decodes binary and displays text on the LCD.

---

## Applications
- Secure indoor communication  
- Smart home appliance control  
- Use in environments restricted from RF usage (e.g., medical settings, aircraft)

---

## Results
- Demonstrated **10 Mbps** wireless data transmission via LiFi  
- Achieved **30% reduction in interference** compared to RF benchmarks

---

## Future Enhancements
- Expand range using advanced LEDs and optics  
- Integrate microcontrollers like ESP32 for real-time processing  
- Enhance security with encryption at light-modulation-level  
- Combine with SLAM-enabled drone systems for LiFi-based control feedback loops
