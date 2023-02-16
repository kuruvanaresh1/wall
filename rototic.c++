#include <Arduino.h>

// Define motor pins
const int motorLeftPin1 = 5;
const int motorLeftPin2 = 6;
const int motorRightPin1 = 9;
const int motorRightPin2 = 10;

// Define motor speeds
const int motorSpeed = 200;

void setup() {
  // Set motor pins as outputs
  pinMode(motorLeftPin1, OUTPUT);
  pinMode(motorLeftPin2, OUTPUT);
  pinMode(motorRightPin1, OUTPUT);
  pinMode(motorRightPin2, OUTPUT);
}

void loop() {
  // Move robot forward
  digitalWrite(motorLeftPin1, HIGH);
  digitalWrite(motorLeftPin2, LOW);
  digitalWrite(motorRightPin1, HIGH);
  digitalWrite(motorRightPin2, LOW);
  analogWrite(motorLeftPin1, motorSpeed);
  analogWrite(motorRightPin1, motorSpeed);
  delay(2000);  // Move for 2 seconds

  // Turn robot left
  digitalWrite(motorLeftPin1, LOW);
  digitalWrite(motorLeftPin2, HIGH);
  digitalWrite(motorRightPin1, HIGH);
  digitalWrite(motorRightPin2, LOW);
  analogWrite(motorLeftPin2, motorSpeed);
  analogWrite(motorRightPin1, motorSpeed);
  delay(1000);  // Turn for 1 second

  // Move robot forward again
  digitalWrite(motorLeftPin1, HIGH);
  digitalWrite(motorLeftPin2, LOW);
  digitalWrite(motorRightPin1, HIGH);
  digitalWrite(motorRightPin2, LOW);
  analogWrite(motorLeftPin1, motorSpeed);
  analogWrite(motorRightPin1, motorSpeed);
  delay(2000);  // Move for 2 seconds

  // Turn robot right
  digitalWrite(motorLeftPin1, HIGH);
  digitalWrite(motorLeftPin2, LOW);
  digitalWrite(motorRightPin1, LOW);
  digitalWrite(motorRightPin2, HIGH);
  analogWrite(motorLeftPin1, motorSpeed);
  analogWrite(motorRightPin2, motorSpeed);
  delay(1000);  // Turn for 1 second
}
