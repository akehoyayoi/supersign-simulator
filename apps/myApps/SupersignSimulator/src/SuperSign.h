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

class Stage;

class SuperSign {

private:
    std::shared_ptr<Stage> currentStage;
public:
    SuperSign();
    virtual ~SuperSign();
    void input(int key);
    bool* simulate();
};

#endif /* SuperSign_hpp */
