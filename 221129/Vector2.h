#pragma once

#include <iostream>
#include <cmath>

/// <summary>
/// ���w���C�u�����i�O���錾�j
/// </summary>
namespace GameMath
{
	class Vector2;

	// Vector2 �o�̓X�g���[��
	std::ostream& operator<<
		(
			std::ostream& os,
			const Vector2& v
		);

	// Vector2 �����{
	Vector2 operator*(const Vector2& v, float f);
	Vector2 operator*(float f, const Vector2& v);
}


/// <summary>
/// �Q�[�����w���C�u����
/// </summary>
namespace GameMath
{
	class Vector2
	{
	public:
		static const Vector2 Right;
		static const Vector2 Up;
		static const Vector2 Zero;

	private:
		float x;	// X����
		float y;	// Y����

		// �R���X�g���N�^�^�f�X�g���N�^
	public:
		Vector2();
		Vector2(float xx, float yy);
		Vector2(const Vector2& v);

		// getter / setter
	public:
		inline float GetX() { return x; }
		inline float GetY() { return y; }

		inline float SetX(float xx) { return x = xx; }
		inline float SetY(float yy) { return y = yy; }

		// ���Z�q�̃I�[�o�[���[�h
	public:
		Vector2 operator+(const Vector2& v) const;		// ���Z
		Vector2 operator-(const Vector2& v) const;		// ���Z

		// �����{
		friend Vector2 operator*(const Vector2& v, float f);
		friend Vector2 operator*(float f, const Vector2& v);

		// ���
		Vector2& operator=(const Vector2& v);

		// ���Z��� += -= *=
		// �h��i�L���A���R���ʁj
		Vector2& operator+=(const Vector2& v);	// ���Z���
		Vector2& operator-=(const Vector2& v);	// ���Z���
		Vector2& operator*=(float f);			// ������Z���

		// �ÓI�֐��i�N���X�֐��j
	public:
		static float Dot(const Vector2& u, const Vector2& v);		// ����
		static float Cross(const Vector2& u, const Vector2& v);		// �O��

		// ���K���x�N�g�������߂�i���R�����̏h��j
		static Vector2 Normalize(const Vector2& p);

		// ���[�e�B���e�B
	public:
		// �x�N�g���̑傫��
		inline float magnitude() const { return sqrtf(x * x + y * y); }
		// ���K���x�N�g��
		inline Vector2 normalized() const { return Vector2::Normalize(*this); }

		// ���o�̓X�g���[��
	public:
		friend std::ostream& operator<<
			(
				std::ostream& os,
				const Vector2& v
			);
	};
}