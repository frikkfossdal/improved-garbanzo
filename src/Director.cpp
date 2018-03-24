//
//  Director.cpp
//  phd_sketch2
//
//  Created by Frikk Fossdal on 21.03.2018.
//
// README
// The Director keeps track on the diferent nodes in system.
// All toolpaths are parsed trough the Director and assigned
// to the different Nodes.
// TODO
//

#include "Director.hpp"

Director::Director(){
    
}
void Director::initSystem(int numberOfNodes){
    for(int i = 0; i < numberOfNodes; i++){
        //Init nodes
        Node newNode = *new Node(i*200);
        nodes.push_back(newNode);
    }
}
void Director::showSystem(){
    for(auto it = nodes.begin(); it!=nodes.end(); it++){
        it->show();
    }
    ofSetColor(100);
    ofDrawRectangle(0, 0, 900, 400);
}
void Director::updateSystem(){
    for(auto it = nodes.begin(); it!=nodes.end(); it++){
        it->update();
        it->border();
    }
}
