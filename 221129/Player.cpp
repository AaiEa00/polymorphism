#include "Player.h"

#include <iostream>

using namespace std;

const int Player::DefaultHitPoint = 100;
const int Player::DefaultMagicPoint = 30;

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
Player::Player(): GameObject(Vector2::Zero)
{
	cout << "Player()" << endl;
	m_hp = Player::DefaultHitPoint;
	m_mp = Player::DefaultMagicPoint;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
/// <param name="pos"></param>
/// <param name="hitp"></param>
/// <param name="magicp"></param>
Player::Player(
	const Vector2& pos, 
	int hitp,
	int magicp
)
	:GameObject(pos)
{
	cout << "Player(p, h , m)" << endl;
	m_hp = hitp;
	m_mp = magicp;
	cout << m_pos << endl;
}

/// <summary>
/// デストラクタ
/// </summary>
Player::~Player()
{
	cout << "~Player()" << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int Player::Update()
{
	cout << "Player::Update()" << endl
		<< "  pos: " << m_pos << endl
		<< "  HP:  " << m_hp << endl
		<< "  MP:  " << m_mp << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int Player::Draw()
{
	cout << "Player::Draw()" << endl;
	return 0;
}