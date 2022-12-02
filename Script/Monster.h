#pragma once
#include "GameObject.h"
using namespace std;

/// <summary>
/// クラス
/// </summary>
class Monster: public GameObject
{
public:
	static const int DefaultHitPoint;
	static const int DefaultMagicPoint;
	static const float DefaultDropRating;
	static const int DefaultExp;

private:
	int m_hp;	// 生命力
	int m_mp;	// 魔法力

	float m_droprating;		// レアアイテムドロップ確率
	unsigned m_exp;			// 倒したときに得られる経験値

// コンストラクタ・デストラクタ
public:
	Monster();
	Monster(
		const Vector2& pos, 
		int hitp, 
		int magicp,
		float droprating,
		unsigned exp
	);

	~Monster() { cout << "~Monster()" << endl; }

	// ゲームインターフェース(オーバーロード)
public:
	int Update();	// 状態更新
	int Draw();		// 描画

};