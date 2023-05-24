#include "warrior.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
warrior::warrior()
{
	defend = 0.0f;
	cout << "warrior::warrior()" << endl
		<< "  defend: " << defend << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
warrior::warrior(const vector2& pos, const int& HP, const int& MP, const int& lv, const int& exp, float def)
	:player(pos, HP, MP, lv, exp)
{
	defend = def;
	cout << "warrior::warrior(defend)" << endl
		<< "  defend: " << defend << endl << endl;
}

/// <summary>
/// 状態更新
/// </summary>
int warrior::update()
{
	cout << "warrior::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
int warrior::draw()
{
	cout << "warrior::draw()" << endl;
	return 0;
}
