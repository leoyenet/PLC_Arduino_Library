#include "Arduino.h"
#include "PLC.h"

PLC::PLC() {
  // empty
}

void PLC::init() {
  // Init i-pins
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);

  // Init o-pins
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  Serial.begin(9600);
}

bool PLC::I0() {
  return !(digitalRead(6));
}

bool PLC::I1() {
  return !(digitalRead(7));
}

bool PLC::I2() {
  return !(digitalRead(8));
}

bool PLC::I3() {
  return !(digitalRead(9));
}

bool PLC::I4() {
  return !(digitalRead(10));
}

bool PLC::I5() {
  return !(digitalRead(11));
}

bool PLC::I6() {
  return !(digitalRead(12));
}

bool PLC::I7() {
  if (analogRead(A0) > 2000) {
    return true;
  } else {
    return false;
  }
}

void PLC::Q0(bool value) {
  digitalWrite(5, value ? HIGH : LOW);
}

void PLC::Q1(bool value) {
  digitalWrite(4, value ? HIGH : LOW);
}

void PLC::Q2(bool value) {
  digitalWrite(3, value ? HIGH : LOW);
}

void PLC::Q3(bool value) {
  digitalWrite(2, value ? HIGH : LOW);
}

void PLC::LED(bool value) {
  digitalWrite(13, value ? HIGH : LOW);
}
