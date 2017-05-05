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


std::vector<std::vector<bool>> openingAnime = {
    hajime,hajime,hajime,hajime,hajime,
    hajime,hajime,hajime,hajime,hajime,
    kuusha,kuusha,kuusha,kuusha,kuusha};

void OpeningStage::input(int key)
{
}

bool* OpeningStage::simulate()
{
    std::vector<bool> a = openingAnime[animeCount];
    for(auto i = 0 ; i < arraySize ; i++) {
        switchArray[i] = a[i];
    }
    animeCount++;
    if(animeCount >= openingAnime.size()) {
        superSign()->setStage(std::make_shared<GameOverStage>(superSign()));
    }
    return switchArray;
}
