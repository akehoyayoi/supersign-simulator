//
//  const.h
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#ifndef const_h
#define const_h

const auto windowWidth = 32;
const auto windowHeight = 16;
const auto cellWidth = 40;
const auto cellHeight = 40;
const auto arraySize = windowWidth * windowHeight;

struct DisplayInfo {
    int red;
    int green;
    int blue;
    int alpha;
};

bool operator==(const DisplayInfo& left, const DisplayInfo& right );
bool operator!=(const DisplayInfo& left, const DisplayInfo& right );

const extern DisplayInfo taxiColor;
const extern DisplayInfo enemyColor;
const extern DisplayInfo white;
const extern DisplayInfo black;
const extern DisplayInfo green;
const extern DisplayInfo red;

#endif /* const_h */
