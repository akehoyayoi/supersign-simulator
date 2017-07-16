//
//  GameOverStage.hpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#ifndef GameOverStage_hpp
#define GameOverStage_hpp

#include "Stage.h"

class GameOverStage: public Stage {
private:
    int animeCount;
public:
    GameOverStage(SuperSign* _superSign)
    : Stage(_superSign)
    , animeCount(0){};
    virtual void input(int key);
    virtual std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate();
};

#endif /* GameOverStage_hpp */