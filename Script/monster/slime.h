#pragma once
#include "monster.h"

/// <summary>
/// スライム
/// </summary>
class slime :public monster
{
private:
	float attackPower;		// 攻撃力

public:
	slime();
	slime(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const float& rate,
		const int& exp,
		float atk
	);

	~slime(){}

private:
	int update();		// 状態更新
	int draw();			// 描画
};