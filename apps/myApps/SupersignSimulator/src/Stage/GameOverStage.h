//
//  GameOverStage.hpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#ifndef GameOverStage_hpp
#define GameOverStage_hpp

#include "../const.h"

#include "Stage.h"

class GameOverStage: public Stage {
private:
    int animeCount;
    bool switchArray[arraySize];
public:
    GameOverStage(SuperSign* _superSign)
    : Stage(_superSign)
    , animeCount(0){};
    virtual void input(int key);
    virtual bool* simulate();
};

#endif /* GameOverStage_hpp */
