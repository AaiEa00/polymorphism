#pragma once
#include "Vector2.h"
using namespace GameMath;
using namespace std;

/// <summary>
/// 基底クラス
/// </summary>
class GameObject {
// メンバ
protected:
	Vector2 Position;	// 座標

// コンストラクタ・デストラクタ
public:
	GameObject();
	GameObject(const Vector2& pos);

	virtual ~GameObject(){ cout << "~GameObject()" << endl; }

// ゲーム用インターフェース
// 仮想関数化
public:
	virtual int Update() = 0;	// 状態更新
	virtual int Draw() = 0;		// 描画
};