#include "Player.h"

#include <iostream>

using namespace std;

const int Player::DefaultHitPoint = 100;
const int Player::DefaultMagicPoint = 30;

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
Player::Player(): GameObject(Vector2::Zero)
{
	cout << "Player()" << endl;
	m_hp = Player::DefaultHitPoint;
	m_mp = Player::DefaultMagicPoint;
}

/// <summary>
/// �������q�R���X�g���N�^
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
/// �f�X�g���N�^
/// </summary>
Player::~Player()
{
	cout << "~Player()" << endl;
}

/// <summary>
/// ��ԍX�V
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
/// �`��
/// </summary>
/// <returns></returns>
int Player::Draw()
{
	cout << "Player::Draw()" << endl;
	return 0;
}