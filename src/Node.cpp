//
//  Node.cpp
//  phd_sketch2
//
//  Created by Frikk Fossdal on 31.01.2018.
//
//  Redo this and make it as a thread

#include "Node.hpp"
Node::Node(){

}
Node::Node(ofVec3f initPos){
    setup();
    pos = initPos;
    timeIndex = 0;
}
void Node::show(){
    ofNoFill();
    ofSetColor(100);
    //ofDrawBox(pos->x, 0, 0, 30, 800, 50);
    ofTranslate(0, 0,60);
    ofDrawBox(pos.x,pos.y,pos.z,50,50,100);
    ofTranslate(0,0,-60);
    ofSetColor(255, 0, 0);
    ofDrawCircle(pos.x, pos.y, borderRad);
    contour.draw();
}
void Node::goTo(){
    float distToTarget = target.distance(pos);
    //ofSetColor(255);
    //ofDrawLine(_target.x, _target.y, pos.x, pos.y);
    //pos.interpolate(target, 0.0001);
}
void Node::setTarget(ofVec3f _target){
    target = _target;
}
void Node::update(){
}
void Node::abortMove(){
}
void Node::borderCollisionCheck(){
    if(pos.x > 900){
    }
    if(pos.x < 0){
    }
    if(pos.y > 400){
    }
    if(pos.y < 0){
    }
}
void Node::createShape(){
    ofVec2f p( 1.f, 0.f );
    int angle = 360 / numVertices;
    contour.clear();
    for(int i = 0; i < numVertices; i++){
        p.rotate( angle * ( 1.f + 0.5f * ofRandomf() ) );
        contour.addVertex( ofVec2f( 200.f, 200.f ) + p * ofRandom( 300.f, 400.f ) );
    }
    contour.setClosed(true);
}
// ---------------------THREADING-------------------------
void Node::threadedFunction(){
    while(isThreadRunning()){
        float totalLength = contour.getLengthAtIndex(numVertices-1);
        if(timeIndex == 500000){
            timeIndex = 0;
            length += 1.f;
            if(length >=totalLength) length -=totalLength; 
            pos = contour.getPointAtLength(length);
        }
        timeIndex++;
         timeIndex2++;
    }
}
void Node::startNode(){
    if(contour.size() > 10){
        startThread();
    }
}
void Node::stopNode(){
    stopThread();
}


//private methods

