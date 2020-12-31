/*
   Dowel
   レーザセンサ　テスト用プログラム
   20.12.31 Thu.
*/

#include "define.h"

bool sensorState[NUM_SENSOR];

void setup() {
  pinMode(PIN_LASERSENSOR_U, INPUT_PULLUP);
  pinMode(PIN_LASERSENSOR_D, INPUT_PULLUP);
  pinMode(PIN_LED_G, OUTPUT);
  pinMode(PIN_LED_R, OUTPUT);
  Serial.begin(BAUDRATE);
}

//センサ状態表示
void dump(bool *state) {
  for (int i = 0; i < NUM_SENSOR; i++) {
    Serial.print(state[i]);
    Serial.print(" ");
  }
  Serial.println();
}

//LED出力
void led(bool *state) {
  if (state[0]) digitalWrite(PIN_LED_G, HIGH);
  else digitalWrite(PIN_LED_G, LOW);

  if (state[1]) digitalWrite(PIN_LED_R, HIGH);
  else digitalWrite(PIN_LED_R, LOW);
}

void loop() {
  sensorState[0] = digitalRead(PIN_LASERSENSOR_U);
  sensorState[1] = digitalRead(PIN_LASERSENSOR_D);
  dump(sensorState);
  led(sensorState);
  delay(10);
}
