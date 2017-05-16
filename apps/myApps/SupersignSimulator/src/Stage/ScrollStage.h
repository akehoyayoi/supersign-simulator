//
//  ScrollStage.hpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/16.
//
//

#ifndef ScrollStage_hpp
#define ScrollStage_hpp

#include "../const.h"

#include "Stage.h"

class ScrollStage: public Stage {
private:
    bool switchArray[arraySize];
    int animeCount;
public:
    ScrollStage(SuperSign* _superSign);
    virtual void input(int key);
    virtual bool* simulate();
};

#endif /* ScrollStage_hpp */
