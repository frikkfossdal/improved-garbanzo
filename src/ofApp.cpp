#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    node1.startNode();
}
//--------------------------------------------------------------
void ofApp::update(){
}
//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(55);
    cam.begin();
    node1.show();
    cam.end();
    ofSetColor(255, 55);
    ofDrawBitmapString(node1.pos, 50, 50);
    ofDrawBitmapString(node1.target, 50, 80);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    ofVec3f vec = ofVec3f(ofRandom(300),ofRandom(300));
    node1.setTarget(vec);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}
//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
