# Arduino Gas Detector 🚨  
**Arduino Детектор Газа**

---


📷 Схема подключения представлена ниже.  

---

## EN | English

An Arduino project using a gas sensor and a PIR motion sensor.  
When gas or motion is detected, an LED and buzzer are activated, and information is displayed on an I2C LCD.

### 🔧 Components

- Arduino Uno  
- Gas Sensor MQ-2 / MQ-5  
- PIR Motion Sensor  
- LEDs  
- Buzzer  
- 16x2 I2C LCD Display  
- Resistors, jumper wires, breadboard  

### 📷 Wiring Diagram

 +5V ----> Gas Sensor VCC
 GND ----> Gas Sensor GND
 A1  ----> Gas Sensor Analog Out
 
 +5V ----> PIR VCC
 GND ----> PIR GND
 D8  ----> PIR OUT
 
 D2  ----> LED (Gas Indicator)
 D7  ----> LED1 (Motion Indicator)
 D3  ----> Buzzer
 
 SDA ----> I2C LCD SDA
 SCL ----> I2C LCD SCL

> I2C LCD address may be `0x27` or `0x3F`.

### 📟 Code

File: `sketch_may8a.ino`  
*(See the project code above)*

### 🚀 Possible Improvements

- Calibrate the gas threshold according to environment.  
- Add Wi-Fi notifications (ESP8266 / ESP32).  
- Log events to an SD card.  
- Use an LED bar or matrix to visualize gas levels.  

---

## RU | Русский

Проект на Arduino с использованием датчика газа и датчика движения (PIR).  
При обнаружении газа или движения включается светодиод и зуммер, а информация отображается на ЖК-дисплее с I2C.

### 🔧 Компоненты

- Arduino Uno  
- Датчик газа MQ-2 / MQ-5  
- PIR-датчик движения  
- Светодиоды (LED)  
- Зуммер  
- ЖК-дисплей с I2C (16x2)  
- Резисторы, провода, макетная плата  

### 📷 Схема подключения

 +5V ----> Газовый датчик VCC
 GND ----> Газовый датчик GND
 A1  ----> Аналоговый выход датчика газа
 
 +5V ----> PIR VCC
 GND ----> PIR GND
 D8  ----> PIR OUT
 
 D2  ----> LED (индикатор газа)
 D7  ----> LED1 (индикатор движения)
 D3  ----> Зуммер
 
 SDA ----> ЖК I2C SDA
 SCL ----> ЖК I2C SCL

### 📟 Код

Файл проекта: `sketch_may8a.ino`  
*(код такой же, как выше)*

### 🚀 Возможные улучшения

- Настройка порога газа в зависимости от среды.  
- Добавление Wi-Fi уведомлений (ESP8266 / ESP32).  
- Логирование событий на SD-карту.  
- Использование светодиодной панели для визуализации уровня газа.  

---

## 📌 License | Лицензия

MIT License
