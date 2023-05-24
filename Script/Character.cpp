#include "Character.h"
using namespace std;

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
character::character()
	: gameObject(vector2::zero)
{
	hitPoints = 0;
	magicPoints = 0;

	cout << "character::character()" << endl
		<< "hp: " << hitPoints << ", mp: " << magicPoints << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
/// <param name="Pos">座標</param>
/// <param name="HP">HP</param>
/// <param name="MP">MP</param>
character::character(const vector2& Pos, int HP, int MP)
	:gameObject(Pos)
{
	hitPoints = HP;
	magicPoints = MP;

	cout << "character::character(Pos, HP, MP)" << endl
		<< "  hp: " << hitPoints << ", mp: " << magicPoints << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int character::update()
{
	cout << "character::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int character::draw()
{
	cout << "character::draw()" << endl;
	return 0;
}
