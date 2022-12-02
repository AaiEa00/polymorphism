#include "Monster.h"

#include <iostream>

using namespace std;

const int Monster::DefaultHitPoint = 20;
const int Monster::DefaultMagicPoint = 5;
const float Monster::DefaultDropRating = 0.01f;
const unsigned Monster::DefaultExp = 3;


/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
Monster::Monster() : GameObject(Vector2::Zero)
{
	cout << "Monster()" << endl;
	m_hp = Monster::DefaultHitPoint;
	m_mp = Monster::DefaultMagicPoint;
	m_droprating = Monster::DefaultDropRating;
	m_exp = Monster::DefaultExp;
}

/// <summary>
/// �������q�R���X�g���N�^
/// </summary>
/// <param name="pos"></param>
/// <param name="hitp"></param>
/// <param name="magicp"></param>
/// <param name="droprating"></param>
/// <param name="exp"></param>
Monster::Monster(
	const Vector2& pos,
	int hitp,
	int magicp,
	float droprating,
	unsigned exp
)
	:GameObject(pos)
{
	cout << "Monster(p, h, m, d, e)" << endl;
	m_hp = hitp;
	m_mp = magicp;
	m_droprating = droprating;
	m_exp = exp;
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
Monster::~Monster()
{
	cout << "~Monster()" << endl;
}

/// <summary>
/// ��ԍX�V
/// </summary>
/// <returns></returns>
int Monster::Update()
{
	cout << "Monster::Update()" << endl
		<< "  pos: " << m_pos << endl
		<< "  HP:  " << m_hp << endl
		<< "  MP:  " << m_mp << endl
		<< "  DR:  " << m_droprating << endl
		<< "  EXP: " << m_exp << endl;
	return 0;
}

/// <summary>
/// �`��
/// </summary>
/// <returns></returns>
int Monster::Draw()
{
	cout << "Monster::Draw()" << endl;
	return 0;
}