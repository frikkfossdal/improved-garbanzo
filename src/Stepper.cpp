//
//  Stepper.cpp
//  phd_sketch2
//
//  Created by Frikk Fossdal on 07.02.2018.
//

#include "Stepper.hpp"

Stepper::Stepper(){
    
}
Stepper::Stepper(float _stepAngle, float _microStep, float _beltPitch){
    angularPos = 0;
    angularVel = 0;
    angularAcc = 0;
    stepAngle = _stepAngle;
    microStep = _microStep;
    beltPitch = _beltPitch;
    isMoving = false;
}
int Stepper::calculateSteps(float _distance)
{
    //Determine how much one step is.
    //initially this is set to 314 steps / mm
    int nextMove = _distance * 160;
    return nextMove; 
}
void Stepper::update()
{
    angularVel += angularAcc;
    angularPos += angularVel;
    angularAcc *= 0;
}
void Stepper::goToTarget(int numSteps, bool dir, float _angularVel){
    int index = 0;
    if(isMoving == false){
        isMoving = true;
        for(int i = 0; i < numSteps; i ++){
            if(dir == true)
            {
                angularPos += stepAngle;
                index = 0;
            }
            else{
                angularPos -= stepAngle;
            }
        }
        isMoving = false;
    }
    else{
        std::cout << "i`m busy!" << endl;
    }
}


//function that listens for new travel moves. If it is currently performing a move, set as busy.

