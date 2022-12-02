#include "GameObject.h"
using namespace std;

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
/// <returns></returns>
GameObject::GameObject()
{
	m_pos = Vector2::Zero;
	cout << "GameObject()" << m_pos << endl;
}

/// <summary>
/// �������q�R���X�g���N�^
/// </summary>
/// <param name="p"></param>
/// <returns></returns>
GameObject::GameObject(const Vector2& p)
{
	m_pos = p;
	cout << "GameObject(p)" << m_pos << endl;
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
	cout << "GameObject::Draw(): pos: " << m_pos << endl;
	return 0;
}
