//
//  OverlayCompoent.h
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/11.
//
//

#ifndef OverlayCompoent_h
#define OverlayCompoent_h

#include "const.h"
#include <array>

class OverlayCompoent {
public:
    virtual void input(int key) = 0;
    virtual std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate() = 0;
};


#endif /* OverlayCompoent_h */
