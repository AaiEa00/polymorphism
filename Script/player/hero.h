#pragma once
#include "player.h"

/// <summary>
/// �E��
/// </summary>
class hero : public player
{
private:
	float luck;		// �K�^

public:
	hero();
	hero(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const int& lv,
		const int& exp,
		float l
	);

	~hero(){}

// �C���^�[�t�F�[�X
private:
	int update();	// ��ԍX�V
	int draw();		// �`��
};