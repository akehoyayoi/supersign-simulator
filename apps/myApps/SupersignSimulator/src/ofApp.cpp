#include "ofApp.h"

#include <stdlib.h>

const int windowWidth = 30;
const int windowHeight = 15;
const int cellWidth = 40;
const int cellHeight = 40;
const int arraySize = windowWidth * windowHeight;
const bool jissha[arraySize] = {false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false,false,false,false,false,true,true,true,true,true,true,true,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false,false,false,false,false,true,true,true,true,true,true,true,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false,false,false,false,false,true,true,true,true,true,true,true,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false,false,false,false,false,false,true,true,false,true,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,true,false,false,false,true,true,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false,true,true,true,false,false,false,false,false,true,true,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false};
const bool kuusha[arraySize] = {false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,true,false,false,false,true,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false,false,false,false,false,false,false,true,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false,false,false,false,false,false,true,true,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false,false,false,false,true,true,true,false,false,true,true,true,true,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false,false,false,false,false,true,true,true,true,true,true,true,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false};
const bool gameOver[arraySize] = {false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,true,false,false,false,true,true,true,false,false,true,false,false,false,true,false,true,true,true,false,false,false,false,false,false,false,false,true,true,false,false,false,true,false,true,true,false,true,true,false,true,true,false,true,true,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,true,false,false,false,true,false,true,false,true,false,true,false,true,true,true,false,false,false,false,false,false,false,false,true,false,false,false,true,true,false,true,true,true,true,true,false,true,false,false,false,true,false,true,false,false,false,false,false,false,false,false,false,false,true,true,false,false,false,true,false,true,false,false,false,true,false,true,false,false,false,true,false,true,false,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,false,true,false,false,false,true,false,true,false,false,false,true,false,true,true,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,false,false,true,false,false,false,true,false,true,true,true,false,true,true,true,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,true,true,false,true,true,false,true,false,false,false,true,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,true,false,true,false,false,true,true,true,false,true,true,true,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,true,true,true,false,false,true,false,false,false,true,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,false,false,false,false,true,false,false,false,true,true,true,false,true,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};
const bool hajime[arraySize] = {false};
bool switchArray[arraySize] = {false};
int status = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(windowWidth * cellWidth, windowHeight * cellHeight);
    ofSetFrameRate(15);
    ofBackground(0, 0, 0);
    ofSetRectMode(OF_RECTMODE_CORNER);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    for(auto count = 0 ; count < arraySize ; count++) {
        if(switchArray[count]) {
            ofSetColor(255, 165, 0); // orange
        } else {
            ofSetColor(0, 0, 0);
        }
        auto width = count % windowWidth;
        auto height = count / windowWidth;
        ofDrawRectangle(width * cellWidth, height * cellHeight, cellWidth, cellHeight);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    status = (status + 1) % 4;
    switch (status) {
        case 0:
            memcpy(switchArray, hajime, arraySize*sizeof(bool));
            break;
        case 1:
            memcpy(switchArray, kuusha, arraySize*sizeof(bool));
            break;
        case 2:
            memcpy(switchArray, jissha, arraySize*sizeof(bool));
            break;
        default:
            memcpy(switchArray, gameOver, arraySize*sizeof(bool));
            break;
    }
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
