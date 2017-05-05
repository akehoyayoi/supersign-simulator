//
//  Stage.h
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#ifndef Stage_h
#define Stage_h

class SuperSign;

class Stage {
protected:
    SuperSign* _superSign;
public:
    Stage(SuperSign* __superSign);
    SuperSign* superSign();
    virtual void input(int key) = 0;
    virtual bool* simulate() = 0;
};

#endif /* Stage_h */
