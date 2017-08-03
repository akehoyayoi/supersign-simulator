//
//  GameWaypointStage.h
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/08/03.
//
//

#ifndef GameWaypointStage_h
#define GameWaypointStage_h

#include "Stage.h"

class GameWaypointStage: public Stage {
private:
    int animeCount;
public:
    GameWaypointStage(SuperSign* _superSign);
    virtual void input(int key);
    virtual std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate();
};


#endif /* GameWaypointStage_h */
