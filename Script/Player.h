#pragma once
#include "Character.h"
using namespace std;

/// <summary>
/// �v���C���[
/// </summary>
class Player: public Character
{
private:
	int m_hp;	// ������
	int m_mp;	// ���@��

// �R���X�g���N�^�E�f�X�g���N�^
public:
	Player();
	Player(const Vector2& pos, int hitp, int magicp);

	~Player() { cout << "~Player()" << endl; }

// �Q�[���C���^�[�t�F�[�X(�I�[�o�[���[�h)
public:
	int Update();	// ��ԍX�V
	int Draw();		// �`��
};