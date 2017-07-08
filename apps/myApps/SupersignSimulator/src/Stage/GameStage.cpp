//
//  GameStage.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/08.
//
//

#include "GameStage.h"

#include "../data.h"

std::array<std::array<std::array<bool, windowWidth>, windowHeight>, 4> backgroudAnime = {b1,b2,b3,b4};

void GameStage::input(int key)
{
    taxi.input(key);
}

std::array<std::array<bool, windowWidth>, windowHeight>& GameStage::simulate()
{
    animeCount = ++animeCount % backgroudAnime.size();
    current = backgroudAnime[animeCount];
    auto t = taxi.simulate();
    for(auto row = 0 ; row < current.size() ; row++) {
        auto rows = current.at(row);
        auto trows = t.at(row);
        for(auto col = 0 ; col < rows.size() ; col++) {
            auto tcol = trows.at(col);
            if(tcol != OverlapType::Transparent) {
                current.at(row).at(col) = tcol == OverlapType::True;
            }
        }
    }
    return current;
}
