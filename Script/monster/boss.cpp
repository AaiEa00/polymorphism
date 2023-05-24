#include "boss.h"

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
boss::boss()
	:monster(vector2::zero, 0, 0, 0.0f, 0)
{
	vitality = 0.0f;
	cout << "boss::boss()" << endl
		<< "  vitality: " << vitality << endl;
}

/// <summary>
/// �������q�R���X�g���N�^
/// </summary>
boss::boss(
	const vector2& pos, 
	const int& HP, 
	const int& MP, 
	const float& rate, 
	const int& exp, 
	float VIT
):monster(pos, HP, MP, rate, exp)
{
	vitality = VIT;
	cout << "boss::boss()" << endl
		<< "  vitality: " << vitality << endl << endl;
}

/// <summary>
/// ��ԍX�V
/// </summary>
/// <returns></returns>
int boss::update()
{
	cout << "boss::update()" << endl;
	return 0;
}

int boss::draw()
{
	cout << "boss::draw()" << endl;
	return 0;
}
