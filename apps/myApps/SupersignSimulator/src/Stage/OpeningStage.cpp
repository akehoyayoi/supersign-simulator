//
//  OpeningStage.cpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#include "../data.h"

#include "OpeningStage.h"

void OpeningStage::input(int key)
{
}

bool* OpeningStage::simulate()
{
    std::vector<bool> a = anime[animeCount];
    for(auto i = 0 ; i < arraySize ; i++) {
        switchArray[i] = a[i];
    }
    animeCount = (animeCount + 1) % anime.size();
    return switchArray;
}
