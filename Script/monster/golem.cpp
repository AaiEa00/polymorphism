#include "golem.h"

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
golem::golem()
	:monster(vector2::zero, 0, 0, 0.0f, 0)
{
	defendPower = 0.0f;
	cout << "golem::golem()" << endl
		<< "  defend: " << defendPower << endl;
}

/// <summary>
/// �������q�R���X�g���N�^
/// </summary>
golem::golem(
	const vector2& pos, const int& HP, const int& MP, const float& rate, const int& exp, float defend
):monster(pos, HP, MP, rate, exp)
{
	defendPower = defend;
	cout << "golem::golem()" << endl
		<< "  defend: " << defendPower << endl << endl;
}

/// <summary>
/// ��ԍX�V
/// </summary>
/// <returns></returns>
int golem::update()
{
	cout << "golem::update()" << endl;
	return 0;
}

/// <summary>
/// �`��
/// </summary>
/// <returns></returns>
int golem::draw()
{
	cout << "golem::draw()" << endl;
	return 0;
}
