#pragma once
#include "monster.h"

/// <summary>
/// �h���S��
/// </summary>
class dragon :public monster
{
private:
	int intelligence;		// �m��

public:
	dragon();
	dragon(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const float& rate,
		const int& exp,
		int INT
	);

	~dragon(){}

private:
	int update();	// ��ԍX�V
	int draw();		// �`��
};