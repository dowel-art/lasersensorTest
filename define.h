#include "Arduino.h"

//ボーレート
#define BAUDRATE 9600

//レーザセンサ入力ピン
#define NUM_SENSOR 4
#define PIN_LASERSENSOR1 2
#define PIN_LASERSENSOR2 3
#define PIN_LASERSENSOR3 4
#define PIN_LASERSENSOR4 5

//ソレノイド出力ピン
#define NUM_SOLENOID 4
#define PIN_SOLENOID1 6
#define PIN_SOLENOID2 7
#define PIN_SOLENOID3 8
#define PIN_SOLENOID4 9

//ステッピングモータ
#define PIN_DIR 10
#define PIN_STEP 11
#define PIN_CS 12
#define StepPeriodUs_flip 13
#define StepPeriodUs_reset 14
#define FLIP_DELAY 330 //ボール落下からフリップするまでの時間
