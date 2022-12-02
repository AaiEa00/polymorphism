#include "GameObject.h"
using namespace std;

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
/// <returns></returns>
GameObject::GameObject()
{
	m_pos = Vector2::Zero;
	cout << "GameObject()" << m_pos << endl;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
/// <param name="p"></param>
/// <returns></returns>
GameObject::GameObject(const Vector2& p)
{
	m_pos = p;
	cout << "GameObject(p)" << m_pos << endl;
}

/// <summary>
/// 状態更新
/// </summary>
/// <returns></returns>
int GameObject::Update()
{
	cout << "GameObject::Update(): pos: " << m_pos << endl;
	return 0;
}

/// <summary>
/// 描画
/// </summary>
/// <returns></returns>
int GameObject::Draw()
{
	cout << "GameObject::Draw(): pos: " << m_pos << endl;
	return 0;
}
