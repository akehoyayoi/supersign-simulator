//
//  Taxi.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/08.
//
//

#include "../inc/Taxi.h"

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
    for(auto row = 0 ; row < current.size() ; row++) {
        auto rows = current.at(row);
        for(auto col = 0 ; col < rows.size() ; col++) {
            if(currentPosition <= col
               && col <= currentPosition + 8) {
                switch (row) {
                    case 12:
                        if(col == currentPosition || col == currentPosition + 8) {
                            current.at(row).at(col) = white;
                        } else {
                            current.at(row).at(col) = taxiColor;
                        }
                        break;
                    case 13:
                    case 14:
                        if(col == currentPosition || col == currentPosition + 8) {
                            current.at(row).at(col) = taxiColor;
                        } else {
                            current.at(row).at(col) = white;
                        }
                        break;
                    default:
                        current.at(row).at(col) = white;
                        break;
                }
            } else {
                current.at(row).at(col) = white;
            }
        }
        
    }
    return current;
}
