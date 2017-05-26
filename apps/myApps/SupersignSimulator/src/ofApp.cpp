#include "ofApp.h"

#include "const.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(windowWidth * cellWidth, windowHeight * cellHeight);
    ofSetFrameRate(5);
    ofBackground(0, 0, 0);
    ofSetRectMode(OF_RECTMODE_CORNER);
}

//--------------------------------------------------------------
void ofApp::draw(){

    auto switchArray = superSign.simulate();
    for(auto count = 0 ; count < arraySize ; count++) {
        if(switchArray && switchArray[count]) {
            ofSetColor(255, 165, 0); // orange
        } else {
            ofSetColor(0, 0, 0);
        }
        const auto width = count % windowWidth;
        const auto height = count / windowWidth;
        ofDrawRectangle(width * cellWidth, height * cellHeight, cellWidth, cellHeight);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
