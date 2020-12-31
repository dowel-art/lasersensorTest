#include "define.h"

bool sensorState[NUM_SENSOR];

void setup() {
  pinMode(PIN_LASERSENSOR1, INPUT_PULLUP);
  pinMode(PIN_LASERSENSOR2, INPUT_PULLUP);
  pinMode(PIN_LASERSENSOR3, INPUT_PULLUP);
  pinMode(PIN_LASERSENSOR4, INPUT_PULLUP);
  Serial.begin(9600);
}

//センサ状態表示
void dump(bool *state) {
  for (int i = 0; i < NUM_SENSOR; i++) {
    Serial.print(state[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {
  sensorState[0] = digitalRead(PIN_LASERSENSOR1);
  sensorState[1] = digitalRead(PIN_LASERSENSOR2);
  sensorState[2] = digitalRead(PIN_LASERSENSOR3);
  sensorState[3] = digitalRead(PIN_LASERSENSOR4);
  dump(sensorState);
  delay(10);
}
