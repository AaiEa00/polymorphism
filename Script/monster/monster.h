#pragma once
#include "../character.h"

/// <summary>
/// �����X�^�[
/// </summary>
class monster: public character
{
private:
	float dropRate;
	int experiencePoints;

// �R���X�g���N�^�E�f�X�g���N�^
public:
	monster();
	monster(
		const vector2& pos, 
		const int& HP, 
		const int& MP,
		float rate,
		int exp
	);

	virtual ~monster(){}

	// �Q�[���C���^�[�t�F�[�X(�I�[�o�[���[�h)
public:
	virtual int update();	// ��ԍX�V
	virtual int draw();		// �`��

};