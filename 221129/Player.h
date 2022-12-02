#pragma once

#include "GameObject.h"


/// <summary>
/// �v���C��
/// </summary>
class Player : public GameObject
{
	// �N���X�萔
public:
	static const int DefaultHitPoint;
	static const int DefaultMagicPoint;

	// �����o
private:
	int m_hp;	// ������
	int m_mp;	// ���@��

	// �R���X�g���N�^�^�f�X�g���N�^
public:
	Player();
	Player(
		const Vector2& pos,
		int hitp,
		int magicp
	);

	~Player();

	// �Q�[���p�C���^�t�F�C�X
	// �I�[�o���C�h�Ŏ���
public:
	int Update();	// ��ԍX�V�i�I�[�o�[���C�h�j
	int Draw();		// �`��i�I�[�o�[���C�h�j
};