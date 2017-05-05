//
//  SuperSign.hpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#ifndef SuperSign_hpp
#define SuperSign_hpp

#include "const.h"

enum class SceneStatus : int {
    Opening,
    Main,
    GameOver,
    Clear,
};

class SuperSign {

private:
    bool switchArray[arraySize];
    int animationCount;
public:
    SuperSign();
    virtual ~SuperSign();
    void input(int key);
    bool* simulate();
};

#endif /* SuperSign_hpp */
