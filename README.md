# 🏠 Blynk 4-Channel Home Automation System

A **4-Channel Wi-Fi Home Automation System** built using **ESP8266** and **Blynk IoT**. Control four appliances remotely from your smartphone through the internet, even when you are away from home.

## 🚀 Features

* 📱 Mobile control using Blynk IoT
* 🌐 Remote control from anywhere with internet access
* 🔌 4 independent relay channels
* 📡 ESP8266 Wi-Fi connectivity
* ⚡ Real-time ON/OFF control
* ☁️ Blynk Cloud communication
* 💡 Suitable for lights, fans, pumps and other compatible loads
* 🛠️ Easy to modify and expand

## 🔧 Hardware Required

* ESP8266 development board
* 4-Channel Relay Module
* Wi-Fi connection
* Jumper wires
* Suitable power supply
* Smartphone
* Compatible electrical loads

## ⚙️ How It Works

The ESP8266 connects to Wi-Fi and communicates with the **Blynk IoT Cloud**. Four buttons in the Blynk mobile dashboard control the four relay channels.

```text
📱 Blynk Mobile App
        ↓
🌐 Internet
        ↓
☁️ Blynk Cloud
        ↓
📡 ESP8266
        ↓
🔌 4-Channel Relay
        ↓
💡 Appliances
```

### Blynk Virtual Pins

| Blynk Pin | Relay   | Function    |
| --------- | ------- | ----------- |
| V0        | Relay 1 | Appliance 1 |
| V1        | Relay 2 | Appliance 2 |
| V2        | Relay 3 | Appliance 3 |
| V3        | Relay 4 | Appliance 4 |

## 📋 Specifications

| Specification   | Details         |
| --------------- | --------------- |
| Microcontroller | ESP8266         |
| IoT Platform    | Blynk IoT       |
| Communication   | Wi-Fi           |
| Relay Channels  | 4               |
| Control         | Smartphone      |
| Connectivity    | Internet        |
| Control Type    | Remote ON/OFF   |
| Programming     | Arduino IDE     |
| Application     | Home Automation |

## 📺 Full Tutorial

🎥 **Watch the full project tutorial on YouTube:**
[Dipankar Bhunia — YouTube Channel](https://youtu.be/pjEKZM3mIEE?si=crJUfdfQWRLsupl0)

The tutorial covers the hardware setup, ESP8266 programming, Blynk configuration, relay control, and project testing.

## 🧠 Technologies Used

* ESP8266
* Blynk IoT
* Arduino IDE
* Wi-Fi
* IoT
* Embedded Systems
* Relay Control

## 🎯 Applications

This project can be used as a learning platform for:

* Smart home automation
* Remote appliance control
* IoT experiments
* ESP8266 projects
* Blynk IoT projects
* Embedded systems development

## ⚠️ Safety Notice

For mains-voltage appliances, use properly rated hardware, insulation, enclosure, and appropriate electrical protection. Mains wiring should be handled by a qualified adult/professional.

## 👨‍💻 Author

**Dipankar Bhunia**

IoT • Embedded Systems • Robotics • DIY Electronics

## ⭐ Support the Project

If this project helped you, consider giving the repository a ⭐ **Star** and following for more IoT, robotics, embedded-system and DIY electronics projects.

---

**Made with ❤️ by Dipankar Bhunia**
