#include "Monster.h"
using namespace std;

const int Monster::DefaultHitPoint = 20;
const int Monster::DefaultMagicPoint = 5;
const float Monster::DefaultDropRating = 0.01f;
const int Monster::DefaultExp = 3;

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
/// <returns></returns>
Monster::Monster() :GameObject(Vector2::Zero)
{
	cout << "Monster()" << endl;
	m_hp = Monster::DefaultHitPoint;
	m_mp = Monster::DefaultMagicPoint;
	m_droprating = Monster::DefaultDropRating;
	m_exp = Monster::DefaultExp;
}

Monster::Monster(
	const Vector2& pos, 
	int hitp, 
	int magicp, 
	float droprating,
	unsigned exp)
	:GameObject(pos)
{
	m_hp = hitp;
	m_mp = magicp;
	m_droprating = droprating;
	m_exp = exp;
	cout << "Monster(p, h, m, d, e)" << endl;
}

int Monster::Update()
{
	cout << "Monster::Update()" << endl
		<< " pos: " << m_pos << endl
		<< " HP: " << m_hp << endl
		<< " MP: " << m_mp << endl
		<< " DP: " << m_droprating << endl
		<< " EXP: " << m_exp << endl;

	return 0;
}

int Monster::Draw()
{
	cout << "Monster::Draw()" << endl;
	return 0;
}
