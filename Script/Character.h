#pragma once
#include "GameObject.h"
class Character :
	public GameObject
{
protected:
	int HitPoints;		// HP
	int MagicPoints;	// MP

// �R���X�g���N�^�E�f�X�g���N�^
public:
	Character();
	Character(const Vector2& Position, int HP, int MP);

	virtual ~Character() {};

public:
	virtual int Update();	// ��ԍX�V
	virtual int Draw();		// �`��
};

