//
//  OverlayCompoent.cpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/18.
//
//

#include "../inc/OverlayComponent.h"


bool OverlayComponent::inContact(struct Rectangle& r)
{
    return rectangle.left < r.right
    && r.left < rectangle.right
    && rectangle.top < r.bottom
    && r.top < rectangle.bottom;
}
