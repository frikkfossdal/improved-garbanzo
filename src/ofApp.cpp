#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    Krennic.initSystem(3);
    //cam.enableOrtho();
}
//--------------------------------------------------------------
void ofApp::update(){
    //mainGUI.backgroundGrid();
}
//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(55);
    //update the node system and draw it
    cam.begin();
    //ofDrawGrid();
    Krennic.updateSystem();
    Krennic.showSystem();
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    Krennic.assignTargets(ofVec3f(ofRandom(300), ofRandom(400)));

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
