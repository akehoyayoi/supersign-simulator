//
//  SuperSign.cpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#include "SuperSign.h"

#include "Stage/Stage.h"
#include "Stage/OpeningStage.h"

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

bool* SuperSign::simulate()
{
    return currentStage->simulate();
}

void SuperSign::setStage(std::shared_ptr<Stage> stage)
{
    currentStage = stage;
}