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
void Node::goTo(ofVec3f _target){
    float distToTarget = _target.distance(pos);
    ofSetColor(255);
    ofDrawLine(_target.x, _target.y, pos.x, pos.y);
    pos.interpolate(_target, 0.01);
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



//private methods

