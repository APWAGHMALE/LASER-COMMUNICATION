# LASER-COMMUNICATION
# 💡 Transmission of String using LASER Through Optical Fiber

This repository contains the code and documentation for a project that demonstrates the **transmission of text strings between two computers using an optical fiber link**, leveraging **Arduino UNO**, a **LASER module**, and a **photodiode receiver**.

> 📚 _Developed as part of the Project-Based Learning (PBL) initiative at PVGCOET, Pune under Savitribai Phule Pune University (2023–24)_

---

## 📌 Project Overview

The objective of this project is to implement a **low-cost, secure, and fast communication system** for transmitting text data using optical fiber as the medium and LASER light as the carrier. The string is transmitted from one PC to another by converting characters to binary, sending via LASER through optical fiber, and then decoding it at the receiver using a photodiode.

---

## 🎯 Features

- High-speed unidirectional communication  
- Secure, closed-channel data transfer  
- Simple hardware using Arduino UNO  
- Demonstrates real-world optical fiber communication principles  

---

## 💻 Software Requirements

- [Arduino IDE](https://www.arduino.cc/en/software)  
- [Tinkercad (Optional Simulation)](https://www.tinkercad.com/)

---

## 🧠 Working Principle

### Transmitter (TX):

1. User inputs string via Serial Monitor.  
2. Arduino converts characters to ASCII → Binary.  
3. Binary bits control LASER ON/OFF signals (1 = ON, 0 = OFF).  
4. LASER beam is passed through an optical fiber.

### Receiver (RX):

1. Photodiode detects light pulses from fiber.  
2. Arduino converts analog signals to digital bits.  
3. Binary bits → ASCII → String.  
4. Decoded string is displayed via Serial Monitor.

---

## 📦 Code Structure

- `transmitter_code.ino` → Code for sending data via LASER  
- `receiver_code.ino` → Code for receiving data using photodiode  
- `threshold_detection.ino` → Optional script to determine ideal photodiode threshold  

---

## 🖥️ Setup Instructions

1. Connect LASER to Arduino (TX) digital pin 7.  
2. Connect photodiode to Arduino (RX) analog pin A0.  
3. Upload the respective sketches to both Arduinos.  
4. Use Serial Monitor at `9600 baud rate`.  
5. Enter text on the TX side and observe output on the RX side.

---

## 📈 Output

- Demonstrated successful transmission of text like `"Hello"` and `"Project123"` over optical fiber at baud rate of `9600`.  
- Delay timing and baud rate critical for accurate reception.

---

## 🌟 Future Enhancements

- Full-duplex communication (two-way)  
- Transmission of multimedia data (image, audio)  
- Improved accuracy with IR laser & dedicated photodetectors  
- Enclosed optical path for ambient noise reduction  

---

## 📚 References

- [NASA – Laser Communication](https://www.nasa.gov/communicating-with-missions/lasercomms/)
- [GeeksForGeeks – Arduino Tutorials](https://www.geeksforgeeks.org/)
- [Wikipedia – Photodiode](https://en.wikipedia.org/wiki/Photodiode)
- Research Paper: *Wireless Optical Voice and Data Transmission* – IJERT

---

## 👥 Team Members

- **Kunal Tupe**  
- **Atharv Waghmale**  
- **Om Wankar**  
- **Mahesh Thorat**  

**Guide:** Prof. P. S. Deshpande  
Department of Electronics and Telecommunication, PVGCOET, Pune

---

## 📸 Project Preview

> *(You can add photos or GIFs of your setup here)*

---

## 📝 License

This project is for educational and non-commercial use only.
