#pragma once
#include "monster.h"

/// <summary>
/// ゴーレム
/// </summary>
class golem :public monster
{
private:
	float defendPower;	// 防御力

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
	int update();	// 状態更新
	int draw();		// 描画
};