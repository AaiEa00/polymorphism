#pragma once
#include "monster.h"

/// <summary>
/// ドラゴン
/// </summary>
class dragon :public monster
{
private:
	int intelligence;		// 知力

public:
	dragon();
	dragon(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const float& rate,
		const int& exp,
		int INT
	);

	~dragon(){}

private:
	int update();	// 状態更新
	int draw();		// 描画
};