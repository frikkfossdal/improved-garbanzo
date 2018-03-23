//
//  Node.cpp
//  phd_sketch2
//
//  Created by Frikk Fossdal on 31.01.2018.
//

#include "Node.hpp"
Node::Node(){
    setup();
}
Node::Node(int initPos){
    setup();
    target = ofVec3f(600, 200);
    pos.set(ofVec3f(initPos, 0));
}
void Node::setup(){
    //setup parameters for the class. This is the layout of the GUI
    borderRad = 130;
    
    parameters.add(pos.set("Position", ofVec3f(0, 0), ofVec3f(0, 0), ofVec3f(900,400)));
    parameters.add(vel.set("Velocity", ofVec3f(0, 0), ofVec3f(-10, -10), ofVec3f(10,10)));
    parameters.add(acc.set("Acceleration", ofVec3f(0, 0), ofVec3f(-5, -5), ofVec3f(5,5)));
    parameters.add(targetDist.set("TargetDist", 0, 0, 300));
    parameters.add(status.set("Moving",false));
}
void Node::show(){
    ofNoFill();
    ofSetColor(100);
    //ofDrawBox(pos->x, 0, 0, 30, 800, 50);
    ofTranslate(0, 0,60);
    ofDrawBox(pos->x,pos->y,pos->z,50,50,100);
    ofTranslate(0,0,-60);
    ofSetColor(255, 0, 0);
    ofDrawCircle(pos->x, pos->y, borderRad);
}
void Node::goTo(){
    float distToTarget = target.distance(pos);
    ofSetColor(255);
    ofDrawLine(target.x, target.y, pos->x, pos->y);
}
void Node::update(){
    vel.operator+=(acc);
    pos.operator+=(vel);
    acc.operator*=(0);
}
void Node::setTarget(ofVec3f _target){
    target = _target;
}
void Node::goToTarget(){
    //calculate number of steps on each axis
    ofVec3f distToTarget = target.operator-(pos);
    
    //Your job is to calculate the velocity and acceleration necassary to reach the target without any overshoot
    //--> it might be easier to neglect acceleration initially and just turn velocity on and off at given moments
}
//private methods

