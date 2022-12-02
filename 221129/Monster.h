#pragma once


#include "GameObject.h"


/// <summary>
/// モンスター
/// </summary>
class Monster : public GameObject
{
	// クラス定数
public:
	static const int DefaultHitPoint;
	static const int DefaultMagicPoint;
	static const float DefaultDropRating;
	static const unsigned DefaultExp;

	// メンバ
private:
	int m_hp;	// 生命力
	int m_mp;	// 魔法力

	float m_droprating;		// レアアイテムドロップ確率
	unsigned m_exp;			// 倒したときに得られる経験値

	// コンストラクタ／デストラクタ
public:
	Monster();
	Monster(
		const Vector2& pos,
		int hitp,
		int magicp,
		float droprating,
		unsigned exp
	);

	~Monster();

	// ゲーム用インタフェイス
	// オーバライドで実装
public:
	int Update();	// 状態更新（オーバーライド）
	int Draw();		// 描画（オーバーライド）
};