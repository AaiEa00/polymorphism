#pragma once
#include "gameObject.h"

class character :
	public gameObject
{
// �����o
protected:
	int hitPoints;
	int magicPoints;

// �R���X�g���N�^�E�f�X�g���N�^
public:
	character();
	character(const vector2& Pos, int HP, int MP);

	virtual ~character() {};

// �C���^�[�t�F�[�X
public:
	virtual int update();	// ��ԍX�V
	virtual int draw();		// �`��
};

