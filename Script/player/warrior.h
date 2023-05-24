#pragma once
#include "player.h"

/// <summary>
/// ím
/// </summary>
class warrior :
    public player
{
private:
    float defend;       // –hŒä—Í

public:
    warrior();
    warrior(
        const vector2& pos,
        const int& HP,
        const int& MP,
        const int& lv,
        const int& exp,
        float def
    );
    
    ~warrior(){}

private:
    int update();
    int draw();
};

