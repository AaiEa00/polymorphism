#pragma once
#include "../character.h"

/// <summary>
/// プレイヤー
/// </summary>
class player: public character
{
protected:
	int level;				// レベル
	int experiencePoints;	// 経験値

// コンストラクタ・デストラクタ
public:
	player();
	player(
		const vector2& pos, 
		const int& HP, 
		const int& MP, 
		int lv, 
		int exp
	);

	virtual ~player() {}

// ゲームインターフェース(オーバーロード)
public:
	virtual int update();	// 状態更新
	virtual int draw();		// 描画
};