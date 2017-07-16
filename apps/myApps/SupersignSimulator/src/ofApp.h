#pragma once

#include "ofMain.h"

#include "Stage/inc/SuperSign.h"

class ofApp : public ofBaseApp {

private:
    SuperSign superSign;

public:
    void setup();
    void draw();

    void keyPressed(int key);
};
