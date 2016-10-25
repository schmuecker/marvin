/*
  MVMovement.h - Library for moving the RTA321 robot.
  Created by Tobias Schmücker, October 18, 2016.
  Released into the public domain.
*/

#ifndef MVMovement_h
#define MVMovement_h

#include "Arduino.h"

class MVMovement
{
  public:
    MVMovement();
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
