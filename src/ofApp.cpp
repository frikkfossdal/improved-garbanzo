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
<<<<<<< HEAD
    ofDrawBitmapString(node1.timeIndex2, 50, 50);
    ofDrawBitmapString(node2.timeIndex2, 50, 80);
=======
    ofDrawBitmapString(node1.pos, 50, 50);
    ofDrawBitmapString(node2.pos, 50, 70);
    ofDrawBitmapString(node1.timeIndex, 50, 100);
    ofDrawBitmapString(node2.timeIndex, 50, 120);
>>>>>>> fec6f1599aef9cace230d64c667a36a22f6d9672
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
<<<<<<< HEAD
    //node1.createShape();
    node1.stopNode();
    node2.stopNode();
    
=======
>>>>>>> fec6f1599aef9cace230d64c667a36a22f6d9672
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    node1.stopNode();
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
<<<<<<< HEAD
    node2.startNode();
=======
    
>>>>>>> fec6f1599aef9cace230d64c667a36a22f6d9672
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
