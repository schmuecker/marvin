/*
  TSMovement.h - Library for moving the RTA321 robot.
  Created by Tobias Schmücker, October 18, 2016.
  Released into the public domain.
*/

#include "TSMovement.h"
#include "Arduino.h"

TSMovement::TSMovement()
{
  ROTATIONFACTOR = 2.58;
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void TSMovement::moveForward()
{
  // left motor
  digitalWrite(5, 0);
  digitalWrite(4, 1);
  // right motor
  digitalWrite(8, 0);
  digitalWrite(9, 1);
}

void TSMovement::moveBackward()
{
  // left motor
  digitalWrite(5, 1);
  digitalWrite(4, 0);
  // right motor
  digitalWrite(8, 1);
  digitalWrite(9, 0);
}

void TSMovement::stopMovement() {
  // left motor
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  // right motor
  digitalWrite(8, 0);
  digitalWrite(9, 0);
}

void TSMovement::spinRight() {
  // left motor
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  // right motor
  digitalWrite(8, 1);
  digitalWrite(9, 0);
}

void TSMovement::spinRightDeg(int deg) {
  spinRight();
  // determines the rotation duration ( = rotation angle)
  delay(deg * ROTATIONFACTOR);
}

void TSMovement::spinLeft() {
  // left motor
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  // right motor
  digitalWrite(8, 0);
  digitalWrite(9, 1);
}

void TSMovement::spinLeftDeg(int deg) {
  spinLeft();
  // determines the rotation duration ( = rotation angle)
  delay(deg * ROTATIONFACTOR);
}