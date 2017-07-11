//
//  data.h
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#ifndef data_h
#define data_h
#include "const.h"
#include <array>

extern std::array<std::array<bool, windowWidth>, windowHeight> jissha;
extern std::array<std::array<bool, windowWidth>, windowHeight> kuusha;
extern std::array<std::array<bool, windowWidth>, windowHeight> gameOver;
extern std::array<std::array<bool, windowWidth>, windowHeight> hajime;
extern std::array<std::array<bool, windowWidth>, windowHeight> b1;
extern std::array<std::array<bool, windowWidth>, windowHeight> b2;
extern std::array<std::array<bool, windowWidth>, windowHeight> b3;
extern std::array<std::array<bool, windowWidth>, windowHeight> b4;
extern std::array<std::array<bool, windowWidth>, windowHeight> start;

#endif /* data_h */
