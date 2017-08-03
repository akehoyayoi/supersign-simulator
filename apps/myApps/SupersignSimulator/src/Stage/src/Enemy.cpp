//
//  Enemy.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/11.
//
//

#include "../inc/Enemy.h"
#include <random>

const auto enemyWidth = 4;
const auto enemyHeight = 8;

std::array<std::array<DisplayInfo, enemyWidth>, enemyHeight> enemy = {{
    {{{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255}}},
    {{{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255}}},
    {{{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255}}},
    {{{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255}}},
    {{{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255}}},
    {{{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255}}},
    {{{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255}}},
    {{{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255}}}
}};

int randomPoint(int minimum, int maximum)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dice(minimum, maximum);
    return dice(mt);
}

Enemy::Enemy(int basePosition, int band)
: basePosition(basePosition)
, minimum(band * 0.2)
, maximum(band * 0.8)
, verticalPosition(0)
{
    horizonPosition = basePosition + randomPoint(minimum, maximum);
}

void Enemy::input(int key)
{
}

std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& Enemy::simulate()
{
    rectangle.left = horizonPosition;
    rectangle.right = horizonPosition + enemyWidth;
    rectangle.top = verticalPosition - enemyHeight;
    rectangle.bottom = verticalPosition;
    for(auto row = 0 ; row < current.size() ; row++) {
        auto rows = current.at(row);
        for(auto col = 0 ; col < rows.size() ; col++) {
            auto enemyCol = col - rectangle.left;
            auto enemyRow = row - rectangle.top;
            if(rectangle.left <= col
               && col < rectangle.right
               && rectangle.top <= row
               && row < rectangle.bottom
               && 0 <= enemyCol
               && enemyCol < enemyWidth
               && 0 <= enemyRow
               && enemyRow < enemyHeight) {
                current.at(row).at(col) = enemy.at(enemyRow).at(enemyCol);
            } else {
                current.at(row).at(col) = white;
            }
        }
    }
    verticalPosition ++;
    if(verticalPosition > windowHeight + enemyHeight) {
        verticalPosition = 0;
        horizonPosition = basePosition + randomPoint(minimum, maximum);
    }
    return current;
}
