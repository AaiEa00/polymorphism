#include "GameObject.h"

#include <iostream>

using namespace std;

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
GameObject::GameObject()
{
	cout << "GameObject()" << endl;
	m_pos = Vector2::Zero;
}

/// <summary>
/// �������q�R���X�g���N�^
/// </summary>
/// <param name="p"></param>
GameObject::GameObject(const Vector2& pos)
{
	cout << "GameObject(pos)" << endl;
	m_pos = pos;
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
GameObject::~GameObject()
{
	cout << "~GameObject()" << endl;
}

/// <summary>
/// ��ԍX�V
/// </summary>
/// <returns></returns>
int GameObject::Update()
{
	cout << "GameObject::Update(): pos: " << m_pos << endl;
	return 0;
}

/// <summary>
/// �`��
/// </summary>
/// <returns></returns>
int GameObject::Draw()
{
	cout << "GameObject::Draw(): pos: "	<< m_pos << endl;
	return 0;
}