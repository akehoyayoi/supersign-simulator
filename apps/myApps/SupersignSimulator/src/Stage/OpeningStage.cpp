//
//  OpeningStage.cpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#include "data.h"
#include "SuperSign.h"

#include "GameOverStage.h"
#include "OpeningStage.h"
#include "GameStage.h"

std::array<std::array<std::array<DisplayInfo, windowWidth>, windowHeight>, 2> openingAnime = {hajime,kuusha};
std::array<std::array<std::array<DisplayInfo, windowWidth>, windowHeight>, 2> startAnime = {hajime,start};

void OpeningStage::input(int key)
{
    if(!isStart) {
        isStart = true;
        animeCount = 0;
    }
}

std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& OpeningStage::simulate()
{
    if(isStart) {
        animeCount = ++animeCount % startAnime.size();
        if(animeCount == 0){
            superSign()->setStage(std::make_shared<GameStage>(superSign()));
        }
        return startAnime[animeCount];
    } else {
        animeCount = ++animeCount % openingAnime.size();
        return openingAnime[animeCount];
    }
}
