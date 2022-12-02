#include "Vector2.h"


using namespace GameMath;

const Vector2 Vector2::Right{ 1.0f, 0.0f };
const Vector2 Vector2::Up{ 0.0f, 1.0f };
const Vector2 Vector2::Zero{ 0.0f, 0.0f };


/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
/// <returns></returns>
Vector2::Vector2()
{
	x = y = 0.0f;
}


/// <summary>
/// �R���X�g���N�^�i�����������q�j
/// </summary>
/// <param name="xx"></param>
/// <param name="yy"></param>
/// <returns></returns>
Vector2::Vector2(float xx, float yy)
{
	x = xx;
	y = yy;
}


/// <summary>
/// �R�s�[�R���X�g���N�^
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
Vector2::Vector2(const Vector2& v)
{
	x = v.x;
	y = v.y;
}


/// <summary>
/// �x�N�g���̘a
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
Vector2 Vector2::operator+(const Vector2& v)
const
{
	Vector2 u =
	{
		x + v.x,
		y + v.y
	};

	return u;
}



/// <summary>
/// �x�N�g���̍�
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
Vector2 Vector2::operator-(const Vector2& v)
const
{
	Vector2 u =
	{
		x - v.x,
		y - v.y
	};
	return u;
}

/// <summary>
/// Vector2�p�o�̓X�g���[��
/// </summary>
/// <param name="os"></param>
/// <param name="v"></param>
/// <returns></returns>
std::ostream& GameMath::operator<<(
	std::ostream& os,
	const Vector2& v
) {
	os << '(' << v.x << ", " << v.y << ')';
	return os;
}


/// <summary>
/// �����{�i�E��������j
/// </summary>
/// <param name="v"></param>
/// <param name="f"></param>
/// <returns></returns>
Vector2 GameMath::operator*(const Vector2& v, float f)
{
	Vector2 u =
	{
		v.x * f,
		v.y * f
	};
	return u;
}

/// <summary>
/// �����{�i�����炩������j
/// </summary>
/// <param name="f"></param>
/// <param name="v"></param>
/// <returns></returns>
Vector2 GameMath::operator*(float f, const Vector2& v)
{
	Vector2 u =
	{
		v.x * f,
		v.y * f
	};
	return u;
}


/// <summary>
/// ���
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
Vector2& Vector2::operator=(const Vector2& v)
{
	x = v.x;
	y = v.y;
	return *this;
}


/// <summary>
/// ���Z���
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
Vector2& Vector2::operator+=(const Vector2& v)
{
	x += v.x;
	y += v.y;
	return *this;
}


/// <summary>
/// ���Z���
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
Vector2& Vector2::operator-=(const Vector2& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}


/// <summary>
/// ������Z���
/// </summary>
/// <param name="f"></param>
/// <returns></returns>
Vector2& Vector2::operator*=(float f)
{
	x *= f;
	y *= f;
	return *this;
}


/// <summary>
/// ����
/// </summary>
/// <param name="u"></param>
/// <param name="v"></param>
/// <returns></returns>
float Vector2::Dot(const Vector2& u, const Vector2& v)
{
	return u.x * v.x + u.y * v.y;
}


/// <summary>
/// �O��
/// </summary>
/// <param name="u"></param>
/// <param name="v"></param>
/// <returns></returns>
float Vector2::Cross(const Vector2& u, const Vector2& v)
{
	return u.x * v.y - u.y * v.x;
}


// ���K���x�N�g�������߂�
Vector2 Vector2::Normalize(const Vector2& p)
{
	float mag = p.magnitude();
	Vector2 w{ p.x / mag, p.y / mag };
	return w;
}