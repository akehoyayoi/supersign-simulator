//
//  Stage.h
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#ifndef Stage_h
#define Stage_h

class Stage {
public:
    virtual void input(int key) = 0;
    virtual bool* simulate() = 0;
};

#endif /* Stage_h */
