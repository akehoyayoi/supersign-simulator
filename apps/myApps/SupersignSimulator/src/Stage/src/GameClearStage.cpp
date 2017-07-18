//
//  GameClearStage.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/18.
//
//

#include "../inc/data.h"
#include "../inc/SuperSign.h"

#include "../inc/OpeningStage.h"
#include "../inc/GameClearStage.h"

std::array<std::array<std::array<DisplayInfo, windowWidth>, windowHeight>, 3> gameClearAnime = {hajime, eishu, man1000};

void GameClearStage::input(int key)
{
}

std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& GameClearStage::simulate()
{
    int oldCount = animeCount;
    animeCount = (animeCount + 1) % gameClearAnime.size();
    if(animeCount == 0 && oldCount > animeCount) {
        superSign()->setStage(std::make_shared<OpeningStage>(superSign()));
    }
    return gameClearAnime[animeCount];
}
