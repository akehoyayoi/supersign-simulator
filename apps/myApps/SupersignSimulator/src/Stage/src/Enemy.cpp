//
//  Enemy.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/11.
//
//

#include "../inc/Enemy.h"
#include <random>

Enemy::Enemy()
: horizonPosition(7)
, verticalPosition(0)
{
    
}

void Enemy::input(int key)
{
}

std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& Enemy::simulate()
{
    rectangle.left = horizonPosition;
    rectangle.right = horizonPosition;
    rectangle.top = verticalPosition - 3;
    rectangle.bottom = verticalPosition;
    for(auto row = 0 ; row < current.size() ; row++) {
        auto rows = current.at(row);
        for(auto col = 0 ; col < rows.size() ; col++) {
            if(col == horizonPosition
               && verticalPosition - 3 <= row
               && row <= verticalPosition) {
                current.at(row).at(col) = enemyColor;
            } else {
                current.at(row).at(col) = white;
            }
        }
    }
    verticalPosition ++;
    if(verticalPosition > 18) {
        verticalPosition = 0;
        // 7 - 14, 18 - 24
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> dice(0,6);
        std::uniform_real_distribution<double> judge(0.0,1.0);
        if(judge(mt) > 0.5) {
            horizonPosition = 7 + dice(mt);
        } else {
            horizonPosition = 18 + dice(mt);
        }
    }
    return current;
}
