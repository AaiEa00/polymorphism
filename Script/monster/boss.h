#pragma once
#include "monster.h"

/// <summary>
/// �{�X
/// </summary>
class boss :public monster
{
private:
	float vitality;		// ������

public:
	boss();
	boss(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const float& rate,
		const int& exp,
		float VIT
	);

private:
	int update();		// ��ԍX�V
	int draw();			// �`��
};