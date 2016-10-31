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

  // Pin numbers
  leftA = 4;
  leftB = 5;
  rightA = 9;
  rightB = 8;

  pinMode(leftA, OUTPUT);
  pinMode(leftB, OUTPUT);
  pinMode(rightB, OUTPUT);
  pinMode(rightA, OUTPUT);
}

void MVMovement::moveForward()
{
  // left motor
  digitalWrite(leftA, 1);
  digitalWrite(leftB, 0);
  // right motor
  digitalWrite(rightA, 1);
  digitalWrite(rightB, 0);
}

void MVMovement::moveBackward()
{
  // left motor
  digitalWrite(leftA, 0);
  digitalWrite(leftB, 1);
  // right motor
  digitalWrite(rightA, 0);
  digitalWrite(rightB, 1);
}

void MVMovement::stopMovement() {
  // left motor
  digitalWrite(leftA, 0);
  digitalWrite(leftB, 0);
  // right motor
  digitalWrite(rightB, 0);
  digitalWrite(rightA, 0);
}

void MVMovement::spinRight() {
  // left motor
  digitalWrite(leftA, 1);
  digitalWrite(leftB, 0);
  // right motor
  digitalWrite(rightB, 1);
  digitalWrite(rightA, 0);
}

void MVMovement::spinRightDeg(int deg) {
  spinRight();
  // determines the rotation duration ( = rotation angle)
  delay(deg * ROTATIONFACTOR);
}

void MVMovement::spinLeft() {
  // left motor
  digitalWrite(leftA, 0);
  digitalWrite(leftB, 1);
  // right motor
  digitalWrite(rightB, 0);
  digitalWrite(rightA, 1);
}

void MVMovement::spinLeftDeg(int deg) {
  spinLeft();
  // determines the rotation duration ( = rotation angle)
  delay(deg * ROTATIONFACTOR);
}