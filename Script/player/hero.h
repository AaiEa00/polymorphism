#pragma once
#include "player.h"

/// <summary>
/// 勇者
/// </summary>
class hero : public player
{
private:
	float luck;		// 幸運

public:
	hero();
	hero(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const int& lv,
		const int& exp,
		float l
	);

	~hero(){}

// インターフェース
private:
	int update();	// 状態更新
	int draw();		// 描画
};