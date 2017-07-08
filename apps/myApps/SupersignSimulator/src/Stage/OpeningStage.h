//
//  OpeningStage.hpp
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#ifndef OpeningStage_hpp
#define OpeningStage_hpp

#include "Stage.h"

class OpeningStage: public Stage {
private:
    int animeCount;
public:
    OpeningStage(SuperSign* _superSign)
    : Stage(_superSign)
    , animeCount(0){};
    virtual void input(int key);
    virtual std::array<std::array<bool, windowWidth>, windowHeight>& simulate();
};

#endif /* OpeningStage_hpp */
