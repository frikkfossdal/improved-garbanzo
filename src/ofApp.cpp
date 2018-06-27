#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    node1.createShape();
    node1.startNode();
    
    node2.createShape();
    node2.startNode();
}
//--------------------------------------------------------------
void ofApp::update(){
}
//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(55);
    cam.begin();
    node1.show();
    node2.show();
    cam.end();
    ofSetColor(255, 55);
    ofDrawBitmapString(node1.timeIndex2, 50, 50);
    ofDrawBitmapString(node2.timeIndex2, 50, 80);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //node1.createShape();
    node1.stopNode();
    node2.stopNode();
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
node2.createShape();
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}
//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    node1.startNode();
    node2.startNode();
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
