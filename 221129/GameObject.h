#pragma once

#include "Vector2.h"

using namespace GameMath;

/// <summary>
/// �Q�[�����̂��ׂĂ̌��ƂȂ�N���X
/// </summary>
class GameObject
{
	// �����o
//private:
protected:
	Vector2 m_pos;	// ���W

	// �R���X�g���N�^�^�f�X�g���N�^
public:
	GameObject();
	GameObject(const Vector2& pos);

	virtual ~GameObject();

	// �Q�[���p�C���^�t�F�C�X
public:
	virtual int Update();	// ��ԍX�V
	virtual int Draw();		// �`��
	// ���z�֐������邱�Ƃɂ��
	// �p����ŃI�[�o�[���C�h���邱�Ƃ�����
};