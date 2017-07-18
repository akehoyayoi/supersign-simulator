//
//  GameClearStage.h
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/18.
//
//

#ifndef GameClearStage_h
#define GameClearStage_h

#include "Stage.h"

class GameClearStage: public Stage {
private:
    int animeCount;
public:
    GameClearStage(SuperSign* _superSign)
    : Stage(_superSign)
    , animeCount(0){};
    virtual void input(int key);
    virtual std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate();
};

#endif /* GameClearStage_h */
