//
//  Stage.c
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#include "../inc/Stage.h"

Stage::Stage(SuperSign* __superSign)
: _superSign(__superSign)
{}

SuperSign* Stage::superSign()
{
    return _superSign;
}
