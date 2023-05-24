#include "dragon.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
dragon::dragon()
	:monster(vector2::zero, 0, 0, 0.0f, 0)
{
	intelligence = 0;
	cout << "dragon::dragon()" << endl
		<< "  intelligence: " << intelligence << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
dragon::dragon(
	const vector2& pos, 
	const int& HP, 
	const int& MP, 
	const float& rate, 
	const int& exp, 
	int INT
):monster(pos, HP, MP, rate, exp)
{
	intelligence = INT;
	cout << "dragon::dragon(INT)" << endl
		<< "  intelligence: " << intelligence << endl << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int dragon::update()
{
	cout << "dragon::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int dragon::draw()
{
	cout << "dragon::draw()" << endl;
	return 0;
}
