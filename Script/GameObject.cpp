#include "gameObject.h"
using namespace std;

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
gameObject::gameObject()
{
	position = vector2::zero;
	cout << "gameObject::gameObject()" << endl
		<< "  pos: " << position << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
/// <param name="p">座標</param>
gameObject::gameObject(const vector2& pos)
{
	position = pos;
	cout << "gameObject::gameObject(pos)" << endl
		<< "  pos: " << position << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int gameObject::update()
{
	cout << "gameObject::update()" << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int gameObject::draw()
{
	cout << "gameObject::draw()" << endl;
	return 0;
}
