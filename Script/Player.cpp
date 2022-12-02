#include "Player.h"
using namespace std;

const int Player::DefaultHitPoint = 100;
const int Player::DefaultMagicPoint = 30;

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
/// <returns></returns>
Player::Player(): GameObject(Vector2::Zero)
{
	m_hp = Player::DefaultHitPoint;
	m_mp = Player::DefaultMagicPoint;
	cout << "Player()" << endl
		<< "hp" << m_hp << endl
		<< "mp" << m_mp << endl;
}

/// <summary>
/// �������q�R���X�g���N�^
/// </summary>
/// <param name="hitp"></param>
/// <param name="magicp"></param>
/// <returns></returns>
Player::Player(const Vector2& pos, int hitp, int magicp)
	:GameObject(pos)
{
	m_hp = hitp;
	m_mp = magicp;
	cout << "Player(p, h, m)" << endl
		<< "hp" << m_hp << endl
		<< "mp" << m_mp << endl;
}

/// <summary>
/// ��ԍX�V
/// </summary>
/// <returns></returns>
int Player::Update()
{
	cout << "Player::Update()" << endl
		<< " pos: " << m_pos << endl
		<< " HP: " << m_hp << endl
		<< " MP: " << m_mp << endl;

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
