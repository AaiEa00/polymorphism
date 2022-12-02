#pragma once
#include "Vector2.h"
using namespace GameMath;
using namespace std;

/// <summary>
/// ���N���X
/// </summary>
class GameObject {
// �����o
protected:
	Vector2 Position;	// ���W

// �R���X�g���N�^�E�f�X�g���N�^
public:
	GameObject();
	GameObject(const Vector2& pos);

	virtual ~GameObject(){ cout << "~GameObject()" << endl; }

// �Q�[���p�C���^�[�t�F�[�X
// ���z�֐���
public:
	virtual int Update() = 0;	// ��ԍX�V
	virtual int Draw() = 0;		// �`��
};