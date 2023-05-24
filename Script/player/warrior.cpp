#include "warrior.h"

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
warrior::warrior()
{
	defend = 0.0f;
	cout << "warrior::warrior()" << endl
		<< "  defend: " << defend << endl;
}

/// <summary>
/// �������q�R���X�g���N�^
/// </summary>
warrior::warrior(const vector2& pos, const int& HP, const int& MP, const int& lv, const int& exp, float def)
	:player(pos, HP, MP, lv, exp)
{
	defend = def;
	cout << "warrior::warrior(defend)" << endl
		<< "  defend: " << defend << endl << endl;
}

/// <summary>
/// ��ԍX�V
/// </summary>
int warrior::update()
{
	cout << "warrior::update()" << endl;
	return 0;
}

/// <summary>
/// �`��
/// </summary>
int warrior::draw()
{
	cout << "warrior::draw()" << endl;
	return 0;
}
