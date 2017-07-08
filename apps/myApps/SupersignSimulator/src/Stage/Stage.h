//
//  Stage.h
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#ifndef Stage_h
#define Stage_h

#include "../const.h"
#include <array>

class SuperSign;

class Stage {
protected:
    SuperSign* _superSign;
public:
    Stage(SuperSign* __superSign);
    SuperSign* superSign();
    virtual void input(int key) = 0;
    virtual std::array<std::array<bool, windowWidth>, windowHeight> simulate() = 0;
};

#endif /* Stage_h */
