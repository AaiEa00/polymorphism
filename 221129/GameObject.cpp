#include "GameObject.h"

#include <iostream>

using namespace std;

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
GameObject::GameObject()
{
	cout << "GameObject()" << endl;
	m_pos = Vector2::Zero;
}

/// <summary>
/// 初期化子コンストラクタ
/// </summary>
/// <param name="p"></param>
GameObject::GameObject(const Vector2& pos)
{
	cout << "GameObject(pos)" << endl;
	m_pos = pos;
}

/// <summary>
/// デストラクタ
/// </summary>
GameObject::~GameObject()
{
	cout << "~GameObject()" << endl;
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
	cout << "GameObject::Draw(): pos: "	<< m_pos << endl;
	return 0;
}