#include "gameObject.h"
using namespace std;

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
gameObject::gameObject()
{
	position = vector2::zero;
	cout << "gameObject::gameObject()" << endl
		<< "  pos: " << position << endl;
}

/// <summary>
/// �������q�R���X�g���N�^
/// </summary>
/// <param name="p">���W</param>
gameObject::gameObject(const vector2& pos)
{
	position = pos;
	cout << "gameObject::gameObject(pos)" << endl
		<< "  pos: " << position << endl;
}

/// <summary>
/// ��ԍX�V
/// </summary>
/// <returns></returns>
int gameObject::update()
{
	cout << "gameObject::update()" << endl;
	return 0;
}

/// <summary>
/// �`��
/// </summary>
/// <returns></returns>
int gameObject::draw()
{
	cout << "gameObject::draw()" << endl;
	return 0;
}
