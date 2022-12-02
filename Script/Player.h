#pragma once
#include "Character.h"
using namespace std;

/// <summary>
/// プレイヤー
/// </summary>
class Player: public Character
{
private:
	int m_hp;	// 生命力
	int m_mp;	// 魔法力

// コンストラクタ・デストラクタ
public:
	Player();
	Player(const Vector2& pos, int hitp, int magicp);

	~Player() { cout << "~Player()" << endl; }

// ゲームインターフェース(オーバーロード)
public:
	int Update();	// 状態更新
	int Draw();		// 描画
};