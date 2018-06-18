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
    index = 0;
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
}
void Node::goTo(){
    float distToTarget = target.distance(pos);
    //ofSetColor(255);
    //ofDrawLine(_target.x, _target.y, pos.x, pos.y);
    pos.interpolate(target, 0.000000001);
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
// ---------------------THREADING-------------------------

void Node::threadedFunction(){
    while(isThreadRunning()){
        lock();
        if(index == 1000000){
            pos.interpolate(target, 0.1);
            
            index = 0;
        }
        index++;
        
        unlock();
    }
}
void Node::startNode(){
    startThread();
}
void Node::stopNode(){
    stopThread();
}


//private methods

