#pragma once
#include "player.h"

/// <summary>
/// C“¹‘m
/// </summary>
class monk :public player
{
private:
	float speed;		// ‘¬“x

public:
	monk();
	monk(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const int& lv,
		const int& exp,
		float spd
	);

	~monk(){}

private:
	int update();		// ó‘ÔXV
	int draw();			// •`‰æ
};