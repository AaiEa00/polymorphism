#pragma once
#include "monster.h"

/// <summary>
/// アンデッド
/// </summary>
class wraith :public monster
{
private:
	float resist;

public:
	wraith();
	wraith(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const float& rate,
		const int& exp,
		float RES
	);

	~wraith(){}

private:
	int update();	// 状態更新
	int draw();		// 描画
};