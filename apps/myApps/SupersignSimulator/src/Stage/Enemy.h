//
//  Enemy.hpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/11.
//
//

#ifndef Enemy_hpp
#define Enemy_hpp

#include "../const.h"
#include <array>
#include "OverlayCompoent.h"


class Enemy : public OverlayCompoent {
private:
    int horizonPosition;
    int verticalPosition;
    std::array<std::array<OverlapType, windowWidth>, windowHeight> current;
public:
    Enemy();
    virtual void input(int key);
    virtual std::array<std::array<OverlapType, windowWidth>, windowHeight>& simulate();
};


#endif /* Enemy_hpp */
