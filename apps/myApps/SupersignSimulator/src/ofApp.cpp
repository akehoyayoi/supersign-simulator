#include "ofApp.h"

#include "const.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(windowWidth * cellWidth, windowHeight * cellHeight);
    ofSetFrameRate(2);
    ofBackground(0, 0, 0);
    ofSetRectMode(OF_RECTMODE_CORNER);
}

//--------------------------------------------------------------
void ofApp::draw(){

    auto simulation = superSign.simulate();
    for(auto row = 0 ; row < simulation.size() ; row++) {
        auto rows = simulation.at(row);
        for(auto col = 0 ; col < rows.size() ; col++) {
            if(rows.at(col)) {
                ofSetColor(255, 165, 0); // orange
            } else {
                ofSetColor(0, 0, 0);
            }
            ofDrawRectangle(col * cellWidth, row * cellHeight, cellWidth, cellHeight);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
