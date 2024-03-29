#pragma once
#include "player.h"

class mage : public player
{
private:
	int heal;		// 回復力

public:
	mage();
	mage(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const int& lv,
		const int& exp,
		int hl
	);

	~mage(){}

private:
	int update();	// 状態更新
	int draw();		// 描画
};