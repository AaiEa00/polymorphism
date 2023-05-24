#include "monster.h"
using namespace std;

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
monster::monster()
	: character(vector2::zero, 0, 0)
{
	dropRate = 0.0f;
	experiencePoints = 0;

	cout << "monster::monster()" << endl
		<< "  dropRate: " << dropRate << ", exp: " << experiencePoints << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
monster::monster(
	const vector2& pos, 
	const int& HP, 
	const int& MP, 
	float rate,
	int exp
):character(pos, HP, MP)
{
	dropRate = rate;
	experiencePoints = exp;
	cout << "monster::monster(pos, HP, MP, rate, exp)" << endl
		<< "  dropRate: " << dropRate << ", exp: " << experiencePoints << endl;
}

int monster::update()
{
	cout << "monster::update()" << endl;
	return 0;
}

int monster::draw()
{
	cout << "monster::draw()" << endl;
	return 0;
}
