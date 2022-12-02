#pragma once
#include "GameObject.h"
using namespace std;

/// <summary>
/// �N���X
/// </summary>
class Monster: public GameObject
{
public:
	static const int DefaultHitPoint;
	static const int DefaultMagicPoint;
	static const float DefaultDropRating;
	static const int DefaultExp;

private:
	int m_hp;	// ������
	int m_mp;	// ���@��

	float m_droprating;		// ���A�A�C�e���h���b�v�m��
	unsigned m_exp;			// �|�����Ƃ��ɓ�����o���l

// �R���X�g���N�^�E�f�X�g���N�^
public:
	Monster();
	Monster(
		const Vector2& pos, 
		int hitp, 
		int magicp,
		float droprating,
		unsigned exp
	);

	~Monster() { cout << "~Monster()" << endl; }

	// �Q�[���C���^�[�t�F�[�X(�I�[�o�[���[�h)
public:
	int Update();	// ��ԍX�V
	int Draw();		// �`��

};