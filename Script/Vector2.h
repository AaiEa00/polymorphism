#pragma once
#include <iostream>
#include <cmath>

/// <summary>
/// ���w���C�u�����i�O���錾�j
/// </summary>
namespace gameMath
{
	class vector2;

	// vector2 �o�̓X�g���[��
	std::ostream& operator<<
		(
			std::ostream& os,
			const vector2& v
		);

	// vector2 �����{
	vector2 operator*(const vector2& v, float f);
	vector2 operator*(float f, const vector2& v);
}


/// <summary>
/// �Q�[�����w���C�u����
/// </summary>
namespace gameMath
{
	class vector2
	{
	public:
		static const vector2 right;
		static const vector2 up;
		static const vector2 zero;

	private:
		float x;	// X����
		float y;	// Y����

		// �R���X�g���N�^�^�f�X�g���N�^
	public:
		vector2();
		vector2(float xx, float yy);
		vector2(const vector2& v);

		// getter / setter
	public:
		inline float getX() { return x; }
		inline float getY() { return y; }

		inline float setX(float xx) { return x = xx; }
		inline float setY(float yy) { return y = yy; }

		// ���Z�q�̃I�[�o�[���[�h
	public:
		vector2 operator+(const vector2& v) const;	// ���Z
		vector2 operator-(const vector2& v) const;	// ���Z

		// �����{
		friend vector2 operator*(const vector2& v, float f);
		friend vector2 operator*(float f, const vector2& v);
		
		const vector2& operator=(const vector2& v);	// ���

		// ���Z��� += -= *=
		vector2& operator+=(const vector2& v);
		vector2& operator-=(const vector2& v);
		vector2& operator*=(const float& f);

		// �ÓI�֐��i�N���X�֐��j
	public:
		static float dot(const vector2& u, const vector2& v);		// ����
		static float cross(const vector2& u, const vector2& v);		// �O��

		// ���K���x�N�g�������߂�
		static vector2 normalize(const vector2& p);

		// ���[�e�B���e�B
	public:
		// �x�N�g���̑傫��
		inline float magnitude() const { return sqrtf(x * x + y * y); }
		// ���K���x�N�g��
		inline vector2 normalized() const { return vector2::normalize(*this); }

		// ���o�̓X�g���[��
	public:
		friend std::ostream& operator<<
			(
				std::ostream& os,
				const vector2& v
			);
	};
}