/*
  MVMovement.h - Library for moving the RTA321 robot.
  Created by Tobias Schmücker, October 18, 2016.
  Released into the public domain.
*/

#include "MVMovement.h"
#include "Arduino.h"

MVMovement::MVMovement()
{
  
  // The rotation factor depends on the surface the robot's on.
  // Make sure to comment out the unused variables.

  // Neill Wycik room
  // ROTATIONFACTOR = 2.58;

  // Maker Space in RCC
  ROTATIONFACTOR = 2.64;

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void MVMovement::moveForward()
{
  // left motor
  digitalWrite(5, 0);
  digitalWrite(4, 1);
  // right motor
  digitalWrite(8, 0);
  digitalWrite(9, 1);
}

void MVMovement::moveBackward()
{
  // left motor
  digitalWrite(5, 1);
  digitalWrite(4, 0);
  // right motor
  digitalWrite(8, 1);
  digitalWrite(9, 0);
}

void MVMovement::stopMovement() {
  // left motor
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  // right motor
  digitalWrite(8, 0);
  digitalWrite(9, 0);
}

void MVMovement::spinRight() {
  // left motor
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  // right motor
  digitalWrite(8, 1);
  digitalWrite(9, 0);
}

void MVMovement::spinRightDeg(int deg) {
  spinRight();
  // determines the rotation duration ( = rotation angle)
  delay(deg * ROTATIONFACTOR);
}

void MVMovement::spinLeft() {
  // left motor
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  // right motor
  digitalWrite(8, 0);
  digitalWrite(9, 1);
}

void MVMovement::spinLeftDeg(int deg) {
  spinLeft();
  // determines the rotation duration ( = rotation angle)
  delay(deg * ROTATIONFACTOR);
}