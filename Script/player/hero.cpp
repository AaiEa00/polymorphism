#include "hero.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
hero::hero()
	:player(vector2::zero, 0, 0, 0, 0)
{
	luck = 0.0f;
	cout << "hero::hero()" << endl
		<< "  luck: " << luck << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
/// <param name="l">幸運</param>
hero::hero(const vector2& pos, const int& HP, const int& MP, const int& lv, const int& exp, float l)
	: player(pos, HP, MP, lv, exp)
{
	luck = l;
	cout << "hero::hero(luck)" << endl
		<< "  luck: " << luck << endl << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int hero::update()
{
	cout << "hero::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int hero::draw()
{
	cout << "hero::draw()" << endl;
	return 0;
}
