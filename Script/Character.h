#pragma once
#include "GameObject.h"
class Character :
	public GameObject
{
protected:
	int HitPoints;		// HP
	int MagicPoints;	// MP

// コンストラクタ・デストラクタ
public:
	Character();
	Character(const Vector2& Position, int HP, int MP);

	virtual ~Character() {};

public:
	virtual int Update();	// 状態更新
	virtual int Draw();		// 描画
};

