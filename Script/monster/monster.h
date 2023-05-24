#pragma once
#include "../character.h"

/// <summary>
/// モンスター
/// </summary>
class monster: public character
{
private:
	float dropRate;
	int experiencePoints;

// コンストラクタ・デストラクタ
public:
	monster();
	monster(
		const vector2& pos, 
		const int& HP, 
		const int& MP,
		float rate,
		int exp
	);

	virtual ~monster(){}

	// ゲームインターフェース(オーバーロード)
public:
	virtual int update();	// 状態更新
	virtual int draw();		// 描画

};