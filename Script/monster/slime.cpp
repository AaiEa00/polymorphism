#include "slime.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
slime::slime()
	:monster(vector2::zero, 0, 0, 0.0f, 0)
{
	attackPower = 0.0f;
	cout << "slime::slime()" << endl
		<< "  attack: " << attackPower << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
slime::slime(const vector2& pos, const int& HP, const int& MP, const float& rate, const int& exp, float atk)
	:monster(pos, HP, MP, rate, exp) 
{
	attackPower = atk;
	cout << "slime::slime()" << endl
		<< "  attack: " << attackPower << endl << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int slime::update()
{
	cout << "slime::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int slime::draw()
{
	cout << "slime::draw()" << endl;
	return 0;
}
