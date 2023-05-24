#pragma once
#include "monster.h"

/// <summary>
/// ƒS[ƒŒƒ€
/// </summary>
class golem :public monster
{
private:
	float defendPower;	// –hŒä—Í

public:
	golem();
	golem(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const float& rate,
		const int& exp,
		float defend
	);

	~golem(){}

private:
	int update();	// ó‘ÔXV
	int draw();		// •`‰æ
};