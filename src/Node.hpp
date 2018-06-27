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
#include "ofxGui.h"

class Node : public ofThread{
public:
    //Constructors
    Node();
    Node(ofVec3f initPos);
    //Variables
    
    ofVec3f pos;
    ofVec3f target;
    ofPolyline contour;
    int borderRad;
    int timeIndex;
    int timeIndex2;
    const int numVertices = 80;
    vector< ofVec3f > positions; // Travel over poly3
    float length; 
    
    //Methods
    void show();
    void goTo();
    void update();
    void borderCollisionCheck();
    void abortMove();
    void threadedFunction();
    void startNode();
    void stopNode();
    void setTarget(ofVec3f _target);
    void createShape();

private:
    void setup();
    void updateParam();
    void setupGUI();
    

};

#endif /* Node_hpp */
