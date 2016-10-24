/*
  TSMovement.h - Library for moving the RTA321 robot.
  Created by Tobias Schmücker, October 18, 2016.
  Released into the public domain.
*/

#ifndef TSMovement_h
#define TSMovement_h

#include "Arduino.h"

class TSMovement
{
  public:
    TSMovement();
    void moveForward();
    void moveBackward();
    void stopMovement();
    void spinRight();
    void spinRightDeg(int deg);
    void spinLeft();
    void spinLeftDeg(int deg);
  private:
    float ROTATIONFACTOR;
    int TRAVELDURATION;
};

#endif
