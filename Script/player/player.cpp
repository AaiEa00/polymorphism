#include "player.h"
using namespace std;

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
player::player()
	: character(vector2::zero ,0, 0)
{
	level = 0;
	experiencePoints = 0;
	cout << "player::player()" << endl
		<< "  lv: " << level << ", exp: " << experiencePoints << endl;
}

/// <summary>
/// �������q�R���X�g���N�^
/// </summary>
player::player(const vector2& pos, const int& HP, const int& MP, int lv, int exp)
	:character(pos, HP, MP)
{
	level = lv;
	experiencePoints = exp;
	cout << "player::player(pos, HP, MP, lv, exp)" << endl
		<< "  lv: " << level << ", exp: " << experiencePoints << endl;
}

/// <summary>
/// ��ԍX�V
/// </summary>
/// <returns></returns>
int player::update()
{
	cout << "player::update()" << endl;
	return 0;
}

/// <summary>
/// �`��
/// </summary>
/// <returns></returns>
int player::draw()
{
	cout << "player::draw()" << endl;
	return 0;
}
