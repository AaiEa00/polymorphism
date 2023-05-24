#include "monk.h"

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
monk::monk()
{
	speed = 0.0f;
	cout << "monk::monk()" << endl
		<< "  speed: " << speed << endl;
}

/// <summary>
/// �������q�R���X�g���N�^
/// </summary>
monk::monk(const vector2& pos, const int& HP, const int& MP, const int& lv, const int& exp, float spd)
	:player(pos, HP, MP, lv, exp)
{
	speed = spd;
	cout << "monk::monk(speed)" << endl
		<< "  speed: " << speed << endl << endl;
}

/// <summary>
/// ��ԍX�V
/// </summary>
/// <returns></returns>
int monk::update()
{
	cout << "monk::update()" << endl;
	return 0;
}

/// <summary>
/// �`��
/// </summary>
/// <returns></returns>
int monk::draw()
{
	cout << "monk::draw()" << endl;
	return 0;
}
