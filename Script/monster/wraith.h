#pragma once
#include "monster.h"

/// <summary>
/// �A���f�b�h
/// </summary>
class wraith :public monster
{
private:
	float resist;

public:
	wraith();
	wraith(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const float& rate,
		const int& exp,
		float RES
	);

	~wraith(){}

private:
	int update();	// ��ԍX�V
	int draw();		// �`��
};