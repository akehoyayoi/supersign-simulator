//
//  OverlayCompoent.h
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/11.
//
//

#ifndef OverlayCompoent_h
#define OverlayCompoent_h

enum OverlapType {
    False,
    True,
    Transparent
};

class OverlayCompoent {
public:
    virtual void input(int key) = 0;
    virtual std::array<std::array<OverlapType, windowWidth>, windowHeight>& simulate() = 0;
};


#endif /* OverlayCompoent_h */
