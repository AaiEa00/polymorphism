#pragma once


#include "GameObject.h"


/// <summary>
/// �����X�^�[
/// </summary>
class Monster : public GameObject
{
	// �N���X�萔
public:
	static const int DefaultHitPoint;
	static const int DefaultMagicPoint;
	static const float DefaultDropRating;
	static const unsigned DefaultExp;

	// �����o
private:
	int m_hp;	// ������
	int m_mp;	// ���@��

	float m_droprating;		// ���A�A�C�e���h���b�v�m��
	unsigned m_exp;			// �|�����Ƃ��ɓ�����o���l

	// �R���X�g���N�^�^�f�X�g���N�^
public:
	Monster();
	Monster(
		const Vector2& pos,
		int hitp,
		int magicp,
		float droprating,
		unsigned exp
	);

	~Monster();

	// �Q�[���p�C���^�t�F�C�X
	// �I�[�o���C�h�Ŏ���
public:
	int Update();	// ��ԍX�V�i�I�[�o�[���C�h�j
	int Draw();		// �`��i�I�[�o�[���C�h�j
};