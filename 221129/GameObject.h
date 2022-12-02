#pragma once

#include "Vector2.h"

using namespace GameMath;

/// <summary>
/// ゲーム内のすべての元となるクラス
/// </summary>
class GameObject
{
	// メンバ
//private:
protected:
	Vector2 m_pos;	// 座標

	// コンストラクタ／デストラクタ
public:
	GameObject();
	GameObject(const Vector2& pos);

	virtual ~GameObject();

	// ゲーム用インタフェイス
public:
	virtual int Update();	// 状態更新
	virtual int Draw();		// 描画
	// 仮想関数化することにより
	// 継承先でオーバーライドすることを許可
};