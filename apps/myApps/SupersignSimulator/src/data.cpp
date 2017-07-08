//
//  data.c
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#include "data.h"

std::array<std::array<bool, windowWidth>, windowHeight> jissha = {{
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false}},
    {{false,false,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false}},
    {{false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false}},
    {{false,false,false,false,true,true,true,true,true,true,true,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false}},
    {{false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false}},
    {{false,false,false,false,true,true,true,true,true,true,true,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false}},
    {{false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false}},
    {{false,false,false,false,true,true,true,true,true,true,true,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false}},
    {{false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false}},
    {{false,false,false,false,false,true,true,false,true,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false}},
    {{false,false,false,false,true,true,false,false,false,true,true,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,true,true,false,false}},
    {{false,false,true,true,true,false,false,false,false,false,true,true,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false}}
}};
std::array<std::array<bool, windowWidth>, windowHeight> kuusha = {{
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false}},
    {{false,false,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false}},
    {{false,false,true,false,false,false,true,false,true,false,false,false,true,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false}},
    {{false,false,false,false,false,false,true,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false}},
    {{false,false,false,false,false,true,true,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false}},
    {{false,false,false,true,true,true,false,false,true,true,true,true,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false}},
    {{false,false,false,false,true,true,true,true,true,true,true,false,false,false,false,false,false,false,true,false,false,false,true,false,false,false,true,false,false,false}},
    {{false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,false,false,false}},
    {{false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,true,true,false,false}},
    {{false,false,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false}}
}};
std::array<std::array<bool, windowWidth>, windowHeight> gameOver = {{
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,true,true,true,true,false,false,false,true,true,true,false,false,true,false,false,false,true,false,true,true,true,false,false,false,false,false,false,false}},
    {{false,true,true,false,false,false,true,false,true,true,false,true,true,false,true,true,false,true,true,false,true,false,false,false,false,false,false,false,false,false}},
    {{false,true,false,false,false,false,false,false,true,false,false,false,true,false,true,false,true,false,true,false,true,true,true,false,false,false,false,false,false,false}},
    {{false,true,false,false,false,true,true,false,true,true,true,true,true,false,true,false,false,false,true,false,true,false,false,false,false,false,false,false,false,false}},
    {{false,true,true,false,false,false,true,false,true,false,false,false,true,false,true,false,false,false,true,false,true,false,false,false,false,false,false,false,false,false}},
    {{false,false,true,true,true,true,true,false,true,false,false,false,true,false,true,false,false,false,true,false,true,true,true,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,true,true,true,false,false,true,false,false,false,true,false,true,true,true,false,true,true,true,true,false,false}},
    {{false,false,false,false,false,false,false,false,true,false,false,false,true,false,true,true,false,true,true,false,true,false,false,false,true,false,false,true,false,false}},
    {{false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,true,false,true,false,false,true,true,true,false,true,true,true,true,false,false}},
    {{false,false,false,false,false,false,false,false,true,false,false,false,true,false,false,true,true,true,false,false,true,false,false,false,true,false,true,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,true,true,true,false,false,false,false,true,false,false,false,true,true,true,false,true,false,false,true,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}}
}};
std::array<std::array<bool, windowWidth>, windowHeight> hajime = {{
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}}
}};

std::array<std::array<bool, windowWidth>, windowHeight> b1 = {{
    {{false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false}},
    {{false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false}},
    {{false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false}},
    {{false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}}
}};
std::array<std::array<bool, windowWidth>, windowHeight> b2 = {{
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false}},
    {{false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,true,false,false,false,false}},
    {{false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false}},
    {{false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}}
}};
std::array<std::array<bool, windowWidth>, windowHeight> b3 = {{
    {{false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false}},
    {{false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false}},
    {{false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false}},
    {{false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false}}
}};

std::array<std::array<bool, windowWidth>, windowHeight> b4 = {{
    {{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false}},
    {{false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false}},
    {{false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false}},
    {{false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false}},
    {{false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,true,false,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,true,false}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true}},
    {{true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true}}
}};




