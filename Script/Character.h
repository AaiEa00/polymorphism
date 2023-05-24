#pragma once
#include "gameObject.h"

class character :
	public gameObject
{
// メンバ
protected:
	int hitPoints;
	int magicPoints;

// コンストラクタ・デストラクタ
public:
	character();
	character(const vector2& Pos, int HP, int MP);

	virtual ~character() {};

// インターフェース
public:
	virtual int update();	// 状態更新
	virtual int draw();		// 描画
};

