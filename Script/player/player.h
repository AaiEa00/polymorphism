#pragma once
#include "../character.h"

/// <summary>
/// �v���C���[
/// </summary>
class player: public character
{
protected:
	int level;				// ���x��
	int experiencePoints;	// �o���l

// �R���X�g���N�^�E�f�X�g���N�^
public:
	player();
	player(
		const vector2& pos, 
		const int& HP, 
		const int& MP, 
		int lv, 
		int exp
	);

	virtual ~player() {}

// �Q�[���C���^�[�t�F�[�X(�I�[�o�[���[�h)
public:
	virtual int update();	// ��ԍX�V
	virtual int draw();		// �`��
};