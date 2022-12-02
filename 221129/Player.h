#pragma once

#include "GameObject.h"


/// <summary>
/// プレイヤ
/// </summary>
class Player : public GameObject
{
	// クラス定数
public:
	static const int DefaultHitPoint;
	static const int DefaultMagicPoint;

	// メンバ
private:
	int m_hp;	// 生命力
	int m_mp;	// 魔法力

	// コンストラクタ／デストラクタ
public:
	Player();
	Player(
		const Vector2& pos,
		int hitp,
		int magicp
	);

	~Player();

	// ゲーム用インタフェイス
	// オーバライドで実装
public:
	int Update();	// 状態更新（オーバーライド）
	int Draw();		// 描画（オーバーライド）
};