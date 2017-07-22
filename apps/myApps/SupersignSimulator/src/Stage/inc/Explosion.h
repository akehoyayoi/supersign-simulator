//
//  Explosion.h
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/22.
//
//

#ifndef Explosion_h
#define Explosion_h

#include "OverlayComponent.h"
#include <functional>

class Explosion : public OverlayComponent {
private:
    int horizonPosition;
    int verticalPosition;
    int animationCount;
    std::array<std::array<DisplayInfo, windowWidth>, windowHeight> current;
    std::function<void()> finishedCallback;
public:
    Explosion(int col, int row, std::function<void()> callback);
    virtual void input(int key);
    virtual std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate();
};

#endif /* Explosion_h */
