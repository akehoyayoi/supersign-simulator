//
//  SuperSign.cpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#include "SuperSign.hpp"

#include "data.h"

SuperSign::SuperSign()
: animationCount(0)
{
}

SuperSign::~SuperSign()
{
}

void SuperSign::input(int key)
{
}

bool* SuperSign::simulate()
{
    std::vector<bool> a = anime[animationCount];
    for(auto i = 0 ; i < arraySize ; i++) {
        switchArray[i] = a[i];
    }
    animationCount = (animationCount + 1) % anime.size();
    return switchArray;
}
