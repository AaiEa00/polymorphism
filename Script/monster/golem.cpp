#include "golem.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
golem::golem()
	:monster(vector2::zero, 0, 0, 0.0f, 0)
{
	defendPower = 0.0f;
	cout << "golem::golem()" << endl
		<< "  defend: " << defendPower << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
golem::golem(
	const vector2& pos, const int& HP, const int& MP, const float& rate, const int& exp, float defend
):monster(pos, HP, MP, rate, exp)
{
	defendPower = defend;
	cout << "golem::golem()" << endl
		<< "  defend: " << defendPower << endl << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int golem::update()
{
	cout << "golem::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int golem::draw()
{
	cout << "golem::draw()" << endl;
	return 0;
}
