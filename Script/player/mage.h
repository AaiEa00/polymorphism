#pragma once
#include "player.h"

class mage : public player
{
private:
	int heal;		// �񕜗�

public:
	mage();
	mage(
		const vector2& pos,
		const int& HP,
		const int& MP,
		const int& lv,
		const int& exp,
		int hl
	);

	~mage(){}

private:
	int update();	// ��ԍX�V
	int draw();		// �`��
};