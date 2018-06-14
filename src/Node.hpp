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
#include "ofxGrbl.h"

class Node{
public:
    //Constructors
    Node();
    Node(ofVec3f initPos);
    //Variables
    
    ofVec3f pos;
    int borderRad;
    
    //Methods
    void show();
    void goTo(ofVec3f _target);
    void update();
    void borderCollisionCheck();
    void abortMove();

private:
    void setup();
    void updateParam();
    void setupGUI();

};

#endif /* Node_hpp */
