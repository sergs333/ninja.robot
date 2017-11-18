
#include <Arduino.h>

int NinjaEye = A0;
int ledPin = D8;

void setup() {
    // put your setup code here, to run once
    pinMode(NinjaEye,INPUT); // Установить пин с фоторезистором в режим чтения
    pinMode(ledPin,OUTPUT);   // Установить пин светодиода в режим вывода информации
    pinMode(D5,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    // put your main code here, to run repeatedly:
    ledPin = analogRead(NinjaEye); // Читать значение датчика света (фоторезистора)
   Serial.println(ledPin);
   // Если значение датчика меньше или равно 16,
   if (ledPin>16) {
     Serial.println("Ехать вперед");
     digitalWrite(D1, HIGH);
}
  else {
  Serial.println("притаиться");
  digitalWrite(D1, LOW);
   }
                         // значит света не и включаем светодиод
                       // иначе выключаем светодиод
}
