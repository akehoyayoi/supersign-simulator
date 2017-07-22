//
//  Gauge.h
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/22.
//
//

#ifndef Gauge_h
#define Gauge_h

#include "OverlayComponent.h"
#include <functional>

class Gauge : public OverlayComponent {
private:
    int animationCount;
    std::array<std::array<DisplayInfo, windowWidth>, windowHeight> current;
    std::function<void()> finishedCallback;
public:
    Gauge(std::function<void()> callback);
    virtual void input(int key);
    virtual std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate();
};

#endif /* Gauge_h */
