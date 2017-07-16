//
//  GameOverStage.cpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//


#include "../data.h"
#include "../SuperSign.h"
#include "GameOverStage.h"

std::array<std::array<std::array<DisplayInfo, windowWidth>, windowHeight>, 2> gameOverAnime = {hajime, gameOver};

void GameOverStage::input(int key)
{
}

std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& GameOverStage::simulate()
{
    animeCount = (animeCount + 1) % gameOverAnime.size();
    return gameOverAnime[animeCount];
}

