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
#include <vector>

class GameStage: public Stage {
private:
    int animeCount;
    std::array<std::array<DisplayInfo, windowWidth>, windowHeight> current;
    std::vector<std::shared_ptr<OverlayComponent>> overlays;
    void gameOver();
    void gameClear();
    bool inGame;
public:
    GameStage(SuperSign* _superSign);
    virtual void input(int key);
    virtual std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate();
};


#endif /* GameStage_hpp */
