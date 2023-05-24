#include "player.h"
using namespace std;

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
player::player()
	: character(vector2::zero ,0, 0)
{
	level = 0;
	experiencePoints = 0;
	cout << "player::player()" << endl
		<< "  lv: " << level << ", exp: " << experiencePoints << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
player::player(const vector2& pos, const int& HP, const int& MP, int lv, int exp)
	:character(pos, HP, MP)
{
	level = lv;
	experiencePoints = exp;
	cout << "player::player(pos, HP, MP, lv, exp)" << endl
		<< "  lv: " << level << ", exp: " << experiencePoints << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int player::update()
{
	cout << "player::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int player::draw()
{
	cout << "player::draw()" << endl;
	return 0;
}
