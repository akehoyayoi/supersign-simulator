//
//  GameStage.hpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/08.
//
//

#ifndef GameStage_hpp
#define GameStage_hpp

#include "Stage.h"
#include "Taxi.h"
#include "Enemy.h"

class GameStage: public Stage {
private:
    int animeCount;
    Taxi taxi;
    Enemy enemy;
    std::array<std::array<bool, windowWidth>, windowHeight> current;
public:
    GameStage(SuperSign* _superSign)
    : Stage(_superSign)
    , animeCount(0){};
    virtual void input(int key);
    virtual std::array<std::array<bool, windowWidth>, windowHeight>& simulate();
};


#endif /* GameStage_hpp */
