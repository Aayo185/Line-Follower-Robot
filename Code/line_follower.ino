// =======================================================
// Line Following Robot
// Microcontroller: Arduino Uno (ATmega328P)
// =======================================================

// Sensor Pins
const int leftSensor = 2;
const int rightSensor = 3;

// Motor Driver Pins (L293D)
const int leftMotor1  = 4;
const int leftMotor2  = 5;
const int rightMotor1 = 6;
const int rightMotor2 = 7;

void setup() {
  // Configure sensor pins
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);

  // Configure motor control pins
  pinMode(leftMotor1, OUTPUT);
  pinMode(leftMotor2, OUTPUT);
  pinMode(rightMotor1, OUTPUT);
  pinMode(rightMotor2, OUTPUT);
}

void loop() {

  int leftValue  = digitalRead(leftSensor);
  int rightValue = digitalRead(rightSensor);

  // Both sensors detect line
  if (leftValue == LOW && rightValue == LOW) {
    moveForward();
  }

  // Left sensor off line
  else if (leftValue == HIGH && rightValue == LOW) {
    turnLeft();
  }

  // Right sensor off line
  else if (leftValue == LOW && rightValue == HIGH) {
    turnRight();
  }

  // Both sensors off line
  else {
    stopMotors();
  }
}

// ================= Motor Functions ====================

void moveForward() {
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
}

void turnLeft() {
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, HIGH);
  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
}

void turnRight() {
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, HIGH);
}

void stopMotors() {
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, LOW);
}