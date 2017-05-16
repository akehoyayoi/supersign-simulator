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

#include "ScrollStage.h"

std::vector<std::vector<bool>> openingAnime = {hajime,kuusha,};

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
        superSign()->setStage(std::make_shared<ScrollStage>(superSign()));
    }
    return switchArray;
}
