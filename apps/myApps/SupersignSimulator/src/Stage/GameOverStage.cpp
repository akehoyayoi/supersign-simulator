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

std::vector<std::vector<bool>> gameOverAnime = {
    hajime,hajime,hajime,hajime,hajime,
    hajime,hajime,hajime,hajime,hajime,
    gameOver,gameOver,gameOver,gameOver,gameOver};

void GameOverStage::input(int key)
{
}

bool* GameOverStage::simulate()
{
    std::vector<bool> a = gameOverAnime[animeCount];
    for(auto i = 0 ; i < arraySize ; i++) {
        switchArray[i] = a[i];
    }
    animeCount = (animeCount + 1) % gameOverAnime.size();
    return switchArray;
}

