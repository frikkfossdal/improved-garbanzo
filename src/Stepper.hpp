//
//  Stepper.hpp
//  phd_sketch2
//
//  Created by Frikk Fossdal on 07.02.2018.
//

#ifndef Stepper_hpp
#define Stepper_hpp

#include <stdio.h>
#include "ofMain.h"
class Stepper : public ofThread{
public:
    int steps;
    bool isMoving; 
    float stepAngle;
    float microStep;
    float beltPitch;
    float angularPos;
    float angularVel;
    float angularAcc;
    
    //Constructors
    Stepper();
    Stepper(float _stepAngle, float _microStep, float _beltPitch);
    
    //Methods
    int calculateSteps(float _target);
    void goToTarget(int numSteps, bool dir, float _angularVel);
    void update();
    void visualize(); 
private:
};

#endif /* Stepper_hpp */
