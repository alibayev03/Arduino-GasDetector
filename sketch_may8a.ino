#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define LED 2
#define LED1 7
#define Buzzer 3
#define Sensor A1
#define PIR_PIN 8

unsigned long lastMotionTime = 0;
bool motionDetected = false;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(PIR_PIN, INPUT);
}

void loop() {
  int value = analogRead(Sensor);
  int motion = digitalRead(PIR_PIN);

  lcd.setCursor(0, 0);
  lcd.print("Value :");
  lcd.print(value);
  lcd.print("   ");

  bool gasDetected = false;
  if (value > 400) {
    digitalWrite(LED, HIGH);
    digitalWrite(Buzzer, HIGH);
    gasDetected = true;
  } else {
    digitalWrite(LED, LOW);
    digitalWrite(Buzzer, LOW);
  }

  if (motion == HIGH) {
    lastMotionTime = millis();
    motionDetected = true;
  } else if (millis() - lastMotionTime > 3000) {
    motionDetected = false;
  }

  digitalWrite(LED1, motionDetected ? HIGH : LOW);

  lcd.setCursor(0, 1);
  if (gasDetected) {
    lcd.print("GAS Detected!   ");
  } else if (motionDetected) {
    lcd.print("Moving Detected!");
  } else {
    lcd.print("                ");
  }

  delay(500);
}
