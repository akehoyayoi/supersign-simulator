//
//  const.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/16.
//
//

#include "../inc/const.h"

bool operator==(const DisplayInfo& left, const DisplayInfo& right ) {
    return left.red == right.red && left.green == right.green && left.blue == right.blue;
}

bool operator!=(const DisplayInfo& left, const DisplayInfo& right ) {
    return !(left == right);
}

const DisplayInfo taxiColor     = {255, 255,   0, 255};
const DisplayInfo enemyColor    = {255,   0,   0, 255};
const DisplayInfo white         = {255, 255, 255, 255};
const DisplayInfo black         = {  0,   0,   0, 255};
const DisplayInfo green         = {  0, 255,   0, 255};
const DisplayInfo red           = {255,   0,   0, 255};


