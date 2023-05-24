#pragma once
#include "monster.h"

/// <summary>
/// �X���C��
/// </summary>
class slime :public monster
{
private:
	float attackPower;		// �U����

public:
	slime();
	slime(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const float& rate,
		const int& exp,
		float atk
	);

	~slime(){}

private:
	int update();		// ��ԍX�V
	int draw();			// �`��
};