#pragma once
#include "vector2.h"
using namespace gameMath;
using namespace std;

/// <summary>
/// 基底クラス
/// </summary>
class gameObject {

// メンバ
protected:
	vector2 position;

// コンストラクタ・デストラクタ
public:
	gameObject();
	gameObject(const vector2& pos);

	virtual ~gameObject() {}

// ゲーム用インターフェース
public:
	virtual int update() = 0;	// 状態更新
	virtual int draw() = 0;		// 描画
};