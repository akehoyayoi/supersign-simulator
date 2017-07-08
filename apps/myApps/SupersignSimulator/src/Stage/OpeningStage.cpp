//
//  OpeningStage.cpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#include "../data.h"
#include "../SuperSign.h"

#include "GameOverStage.h"
#include "OpeningStage.h"

std::array<std::array<std::array<bool, windowWidth>, windowHeight>, 2> openingAnime = {hajime,kuusha};

void OpeningStage::input(int key)
{
}

std::array<std::array<bool, windowWidth>, windowHeight> OpeningStage::simulate()
{
    auto current = openingAnime[animeCount];
    animeCount++;
    if(animeCount >= openingAnime.size()) {
        superSign()->setStage(std::make_shared<GameOverStage>(superSign()));
    }
    return current;
}
