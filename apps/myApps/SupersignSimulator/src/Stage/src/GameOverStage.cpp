//
//  GameOverStage.cpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//


#include "../inc/data.h"
#include "../inc/SuperSign.h"

#include "../inc/OpeningStage.h"
#include "../inc/GameOverStage.h"

std::array<std::array<std::array<DisplayInfo, windowWidth>, windowHeight>, 6> gameOverAnime = {
    hajime, hajime, shidankin, shidankin, man1000, man1000
};

void GameOverStage::input(int key)
{
}

std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& GameOverStage::simulate()
{
    int oldCount = animeCount;
    animeCount = (animeCount + 1) % gameOverAnime.size();
    if(animeCount == 0 && oldCount > animeCount) {
        superSign()->setStage(std::make_shared<OpeningStage>(superSign()));
    }
    return gameOverAnime[animeCount];
}

