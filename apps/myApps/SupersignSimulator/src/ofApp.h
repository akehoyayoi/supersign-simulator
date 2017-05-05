#pragma once

#include "ofMain.h"

#include "SuperSign.hpp"

class ofApp : public ofBaseApp{

private:
    SuperSign superSign;

public:
    void setup();
    void draw();

    void keyPressed(int key);
};
