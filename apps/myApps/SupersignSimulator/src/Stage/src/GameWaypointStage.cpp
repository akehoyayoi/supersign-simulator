//
//  GameWaypointStage.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/08/03.
//
//

#include "../inc/data.h"
#include "../inc/SuperSign.h"

#include "../inc/GameStage.h"
#include "../inc/GameWaypointStage.h"

std::array<std::array<DisplayInfo, windowWidth>, windowHeight> warimashi = {{
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 255, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}}
}};

std::array<std::array<std::array<DisplayInfo, windowWidth>, windowHeight>, 6> wayPointAnime = {
    hajime, hajime, warimashi, warimashi, hajime, hajime,
};

GameWaypointStage::GameWaypointStage(SuperSign* _superSign)
: Stage(_superSign)
, animeCount(0)
{
};

void GameWaypointStage::input(int key)
{
}

std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& GameWaypointStage::simulate()
{
    int oldCount = animeCount;
    animeCount = (animeCount + 1) % wayPointAnime.size();
    if(animeCount == 0 && oldCount > animeCount) {
        superSign()->setStage(std::make_shared<GameStage>(superSign(), 3)); // difficulty up
    }
    return wayPointAnime[animeCount];
}
