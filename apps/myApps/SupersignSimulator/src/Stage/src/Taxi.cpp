//
//  Taxi.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/08.
//
//

#include "../inc/Taxi.h"

const auto taxiWidth = 6;
const auto taxiHeight = 3;
const auto taxiTop = 13;

std::array<std::array<DisplayInfo, taxiWidth>, taxiHeight> taxi = {{
    {{{255, 255, 255, 255},{255, 255, 0, 255},{255, 255, 0, 255},{255, 255, 0, 255},{255, 255, 0, 255},{255, 255, 255, 255}}},
    {{{255, 255, 0, 255},{255, 255, 0, 255},{255, 255, 0, 255},{255, 255, 0, 255},{255, 255, 0, 255},{255, 255, 0, 255}}},
    {{{255, 255, 0, 255},{255, 255, 0, 255},{0, 0, 255, 255},{0, 0, 255, 255},{255, 255, 0, 255},{255, 255, 0, 255}}}
}};

Taxi::Taxi()
: currentPosition(3)
{
    
}

void Taxi::input(int key)
{
    if(key == 356 && currentPosition > 0) currentPosition--;
    if(key == 358 && currentPosition < 22) currentPosition++;
}


std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& Taxi::simulate()
{
    rectangle.left = currentPosition;
    rectangle.right = currentPosition + taxiWidth;
    rectangle.top = taxiTop;
    rectangle.bottom = taxiTop + taxiHeight;
    for(auto row = 0 ; row < current.size() ; row++) {
        auto rows = current.at(row);
        for(auto col = 0 ; col < rows.size() ; col++) {
            if(rectangle.left <= col
               && col < rectangle.right
               && rectangle.top <= row
               && row < rectangle.bottom) {
                auto taxiCol = col - rectangle.left;
                auto taxiRow = row - rectangle.top;
                current.at(row).at(col) = taxi.at(taxiRow).at(taxiCol);
            } else {
                current.at(row).at(col) = white;
            }
        }
        
    }
    return current;
}
