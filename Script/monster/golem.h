#pragma once
#include "monster.h"

/// <summary>
/// �S�[����
/// </summary>
class golem :public monster
{
private:
	float defendPower;	// �h���

public:
	golem();
	golem(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const float& rate,
		const int& exp,
		float defend
	);

	~golem(){}

private:
	int update();	// ��ԍX�V
	int draw();		// �`��
};