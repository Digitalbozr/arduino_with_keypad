#include <Arduino.h>
const byte rowPins[4] = {2, 3, 4, 5};
const byte colPins[4] = {6, 7, 8, 9};

char keys[4][4] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

void setup() {
  Serial.begin(9600);

  pinMode(2, OUTPUT); digitalWrite(2, HIGH);
  pinMode(3, OUTPUT); digitalWrite(3, HIGH);
  pinMode(4, OUTPUT); digitalWrite(4, HIGH);
  pinMode(5, OUTPUT); digitalWrite(5, HIGH);

  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
}

void loop() {
  digitalWrite(2, LOW);
  if (digitalRead(6) == LOW) { Serial.println(keys[0][0]); delay(300); }
  if (digitalRead(7) == LOW) { Serial.println(keys[0][1]); delay(300); }
  if (digitalRead(8) == LOW) { Serial.println(keys[0][2]); delay(300); }
  if (digitalRead(9) == LOW) { Serial.println(keys[0][3]); delay(300); }
  digitalWrite(2, HIGH);

  digitalWrite(3, LOW);
  if (digitalRead(6) == LOW) { Serial.println(keys[1][0]); delay(300); }
  if (digitalRead(7) == LOW) { Serial.println(keys[1][1]); delay(300); }
  if (digitalRead(8) == LOW) { Serial.println(keys[1][2]); delay(300); }
  if (digitalRead(9) == LOW) { Serial.println(keys[1][3]); delay(300); }
  digitalWrite(3, HIGH);

  digitalWrite(4, LOW);
  if (digitalRead(6) == LOW) { Serial.println(keys[2][0]); delay(300); }
  if (digitalRead(7) == LOW) { Serial.println(keys[2][1]); delay(300); }
  if (digitalRead(8) == LOW) { Serial.println(keys[2][2]); delay(300); }
  if (digitalRead(9) == LOW) { Serial.println(keys[2][3]); delay(300); }
  digitalWrite(4, HIGH);

  digitalWrite(5, LOW);
  if (digitalRead(6) == LOW) { Serial.println(keys[3][0]); delay(300); }
  if (digitalRead(7) == LOW) { Serial.println(keys[3][1]); delay(300); }
  if (digitalRead(8) == LOW) { Serial.println(keys[3][2]); delay(300); }
  if (digitalRead(9) == LOW) { Serial.println(keys[3][3]); delay(300); }
  digitalWrite(5, HIGH);
}