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
#include <memory>

#include <array>

class Stage;

// root class
class SuperSign {

private:
    std::shared_ptr<Stage> currentStage;
    std::shared_ptr<Stage> oldStage;
public:
    SuperSign();
    virtual ~SuperSign();
    void input(int key);
    std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate();
    void setStage(std::shared_ptr<Stage> stage);
};

#endif /* SuperSign_hpp */
