//
//  Enemy.hpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/11.
//
//

#ifndef Enemy_hpp
#define Enemy_hpp

#include "OverlayComponent.h"

class Enemy : public OverlayComponent {
private:
    int basePosition;
    int horizonPosition;
    int verticalPosition;
    int minimum;
    int maximum;
    std::array<std::array<DisplayInfo, windowWidth>, windowHeight> current;
public:
    Enemy(int basePosition, int band);
    virtual void input(int key);
    virtual std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate();
};


#endif /* Enemy_hpp */
