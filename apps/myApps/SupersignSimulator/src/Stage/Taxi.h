//
//  Taxi.hpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/08.
//
//

#ifndef Taxi_hpp
#define Taxi_hpp

#include "../const.h"
#include <array>

enum OverlapType {
    False,
    True,
    Transparent
};

class Taxi {
private:
    int currentPosition;
    std::array<std::array<OverlapType, windowWidth>, windowHeight> current;
public:
    Taxi();
    virtual void input(int key);
    virtual std::array<std::array<OverlapType, windowWidth>, windowHeight>& simulate();
};

#endif /* Taxi_hpp */
