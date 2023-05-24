#include "mage.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
mage::mage()
{
	heal = 0;
	cout << "mage::mage()" << endl
		<< "  heal: " << heal << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
mage::mage(const vector2& pos, const int& HP, const int& MP, const int& lv, const int& exp, int hl)
	:player(pos, HP, MP, lv, exp)
{
	heal = hl;
	cout << "mage::mage(heal)" << endl
		<< "  heal: " << heal << endl << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int mage::update()
{
	cout << "mage::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int mage::draw()
{
	cout << "mage::draw()" << endl;
	return 0;
}
