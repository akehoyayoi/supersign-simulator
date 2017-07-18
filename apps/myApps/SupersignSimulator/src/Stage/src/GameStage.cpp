//
//  GameStage.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/08.
//
//

#include "../inc/GameStage.h"
#include "../inc/GameOverStage.h"
#include "../inc/SuperSign.h"

#include "../inc/data.h"

std::array<std::array<std::array<DisplayInfo, windowWidth>, windowHeight>, 4> backgroudAnime = {b1,b2,b3,b4};

void GameStage::input(int key)
{
    taxi.input(key);
}

std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& GameStage::simulate()
{
    animeCount = ++animeCount % backgroudAnime.size();
    current = backgroudAnime[animeCount];
    auto t = taxi.simulate();
    auto e = enemy.simulate();
    for(auto row = 0 ; row < current.size() ; row++) {
        auto rows = current.at(row);
        auto trows = t.at(row);
        auto erows = e.at(row);
        for(auto col = 0 ; col < rows.size() ; col++) {
            auto tcol = trows.at(col);
            auto ecol = erows.at(col);
            
            if(tcol != white) {
                current.at(row).at(col) = tcol;
            }
            
            if(ecol != white) {
                current.at(row).at(col) = ecol;
            }
        }
    }
    
    // TODO: 当たり判定
    if(taxi.inContact(enemy.rectangle)) {
        superSign()->setStage(std::make_shared<GameOverStage>(superSign()));
    }
    
    // TODO: クリア判定
    
    return current;
}
