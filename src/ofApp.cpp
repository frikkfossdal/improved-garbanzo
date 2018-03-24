#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    Krennic.initSystem(3);
    //cam.enableOrtho();
    panel1.setup(Krennic.nodes[0].parameters);
    panel2.setup(Krennic.nodes[1].parameters);
    panel3.setup(Krennic.nodes[2].parameters);
    
    panel1.setPosition(0, 0);
    panel2.setPosition(200, 0);
    panel3.setPosition(400, 0);
    
    panel1.setName("Node1");
    panel2.setName("Node2");
    panel3.setName("Node3");
}
//--------------------------------------------------------------
void ofApp::update(){
    //mainGUI.backgroundGrid();
}
//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(55);
    //update the node system and draw it
    panel1.draw();
    panel2.draw();
    panel3.draw();
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
