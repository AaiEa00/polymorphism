#include "monk.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
monk::monk()
{
	speed = 0.0f;
	cout << "monk::monk()" << endl
		<< "  speed: " << speed << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
monk::monk(const vector2& pos, const int& HP, const int& MP, const int& lv, const int& exp, float spd)
	:player(pos, HP, MP, lv, exp)
{
	speed = spd;
	cout << "monk::monk(speed)" << endl
		<< "  speed: " << speed << endl << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int monk::update()
{
	cout << "monk::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int monk::draw()
{
	cout << "monk::draw()" << endl;
	return 0;
}
