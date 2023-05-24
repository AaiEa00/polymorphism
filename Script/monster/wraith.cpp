#include "wraith.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
wraith::wraith()
	:monster(vector2::zero, 0, 0, 0.0f, 0)
{
	resist = 0.0f;
	cout << "wraith::wraith()" << endl
		<< "  resist: " << resist << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
wraith::wraith(
	const vector2& pos, 
	const int& HP, 
	const int& MP, 
	const float& rate, 
	const int& exp, 
	float RES
):monster(pos, HP, MP, rate, exp)
{
	resist = RES;
	cout << "wraith::wraith(RES)" << endl
		<< "  resist: " << resist << endl << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int wraith::update()
{
	cout << "wraith::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int wraith::draw()
{
	cout << "wraith::draw()" << endl;
	return 0;
}
