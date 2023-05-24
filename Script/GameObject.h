#pragma once
#include "vector2.h"
using namespace gameMath;
using namespace std;

/// <summary>
/// ���N���X
/// </summary>
class gameObject {

// �����o
protected:
	vector2 position;

// �R���X�g���N�^�E�f�X�g���N�^
public:
	gameObject();
	gameObject(const vector2& pos);

	virtual ~gameObject() {}

// �Q�[���p�C���^�[�t�F�[�X
public:
	virtual int update() = 0;	// ��ԍX�V
	virtual int draw() = 0;		// �`��
};