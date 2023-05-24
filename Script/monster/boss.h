#pragma once
#include "monster.h"

/// <summary>
/// ボス
/// </summary>
class boss :public monster
{
private:
	float vitality;		// 生命力

public:
	boss();
	boss(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const float& rate,
		const int& exp,
		float VIT
	);

private:
	int update();		// 状態更新
	int draw();			// 描画
};