//
//  Node.hpp
//  phd_sketch2
//
//  Created by Frikk Fossdal on 31.01.2018.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Stepper.hpp"
#include "ofxGui.h"

class Node{
public:
    //Constructors
    Node();
    Node(int initPos);
    //Variables
    ofVec3f target;
    int borderRad; 
    
    //GUI Parameters
    ofParameter<ofVec3f> pos;
    ofParameter<ofVec3f> vel;
    ofParameter<ofVec3f> acc;
    ofParameter<double> targetDist;
    ofParameter<bool> status;
    ofParameter<bool> synced; 
    ofParameterGroup parameters;
    
    //Methods
    void show();
    void goTo();
    void update();
    void border();

private:
    void setup();
    void updateParam();
    void setupGUI();

};

#endif /* Node_hpp */
