//
//  GameStage.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/08.
//
//

#include "../inc/Explosion.h"
#include "../inc/GameStage.h"
#include "../inc/GameClearStage.h"
#include "../inc/GameOverStage.h"
#include "../inc/Gauge.h"
#include "../inc/SuperSign.h"

#include "../inc/data.h"

#include <functional>

std::array<std::array<std::array<DisplayInfo, windowWidth>, windowHeight>, 4> backgroudAnime = {b1,b2,b3,b4};

GameStage::GameStage(SuperSign* _superSign)
: Stage(_superSign)
, animeCount(0)
, inGame(true)
{
    overlays.push_back(std::make_shared<Taxi>());
    overlays.push_back(std::make_shared<Enemy>());
    std::function<void()> funcGameClear = std::bind(&GameStage::gameClear, this);
    overlays.push_back(std::make_shared<Gauge>(funcGameClear));
};


void GameStage::input(int key)
{
    for(auto overlay: overlays) {
        overlay->input(key);
    }
}

std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& GameStage::simulate()
{
    animeCount = ++animeCount % backgroudAnime.size();
    current = backgroudAnime[animeCount];
    for(auto overlay: overlays) {
        auto s = overlay->simulate();
        for(auto row = 0 ; row < current.size() ; row++) {
            auto rows = current.at(row);
            auto srows = s.at(row);
            for(auto col = 0 ; col < rows.size() ; col++) {
                auto scol = srows.at(col);
                if(scol != white) {
                    current.at(row).at(col) = scol;
                }
            }
        }
    }

    if(overlays.size() < 3) return current;
    
    auto taxi = overlays.at(0);
    auto enemy = overlays.at(1);
    if(taxi->inContact(enemy->rectangle) && inGame) {
        inGame = false;
        auto r = enemy->rectangle;
        std::function<void()> funcGameOver = std::bind(&GameStage::gameOver, this);
        overlays.push_back(std::make_shared<Explosion>(r.left, r.top, funcGameOver));
    }
    return current;
}

void GameStage::gameOver()
{
    overlays.pop_back();
    superSign()->setStage(std::make_shared<GameOverStage>(superSign()));
}

void GameStage::gameClear()
{
    superSign()->setStage(std::make_shared<GameClearStage>(superSign()));
}
