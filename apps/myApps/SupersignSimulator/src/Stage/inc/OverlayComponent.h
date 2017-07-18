//
//  OverlayCompoent.h
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/11.
//
//

#ifndef OverlayComponent_h
#define OverlayComponent_h

#include "const.h"
#include <array>

struct Rectangle {
    int right;
    int left;
    int top;
    int bottom;
};

class OverlayComponent {
public:
    struct Rectangle rectangle;
    virtual void input(int key) = 0;
    virtual std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate() = 0;
    bool inContact(struct Rectangle& r);
};


#endif /* OverlayComponent_h */
