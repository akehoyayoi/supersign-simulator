//
//  Gauge.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/22.
//
//

#include "../inc/Gauge.h"


Gauge::Gauge(std::function<void()> callback)
: animationCount(0)
, finishedCallback(callback)
{
    
}

void Gauge::input(int key)
{
}


std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& Gauge::simulate()
{
    rectangle.left = 0;
    rectangle.right = 0;
    rectangle.top = 0;
    rectangle.bottom = 0;
    auto count = animationCount / 4;
    for(auto row = 0 ; row < current.size() ; row++) {
        auto rows = current.at(row);
        for(auto col = 0 ; col < rows.size() ; col++) {
            if(row == 0) {
                if(count == col) {
                    current.at(row).at(col) = taxiColor;
                } else if(col < count) {
                    current.at(row).at(col) = green;
                } else {
                    current.at(row).at(col) = red;
                }
            } else {
                current.at(row).at(col) = white;
            }
        }
    }
    animationCount++;
    if((animationCount / 4) - 1 == windowWidth) {
        finishedCallback();
    }
    return current;
}

