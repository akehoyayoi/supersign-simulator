//
//  SuperSign.cpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#include "../inc/SuperSign.h"

#include "../inc/Stage.h"
#include "../inc/OpeningStage.h"

#include "../inc/const.h"
#include <array>


SuperSign::SuperSign()
{
    currentStage = std::make_shared<OpeningStage>(this);
}

SuperSign::~SuperSign()
{
}

void SuperSign::input(int key)
{
    currentStage->input(key);
}

std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& SuperSign::simulate()
{
    return currentStage->simulate();
}

void SuperSign::setStage(std::shared_ptr<Stage> stage)
{
    oldStage = currentStage;
    currentStage = stage;
}
