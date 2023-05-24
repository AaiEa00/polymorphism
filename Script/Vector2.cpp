#include "vector2.h"

using namespace std;
using namespace gameMath;

const vector2 vector2::right{ 1.0f, 0.0f };
const vector2 vector2::up{ 0.0f, 1.0f };
const vector2 vector2::zero{ 0.0f, 0.0f };


/// <summary>
/// デフォルトコンストラクタ
/// </summary>
vector2::vector2()
{
	x = y = 0.0f;
}


/// <summary>
/// コンストラクタ（成分初期化子）
/// </summary>
/// <param name="xx"></param>
/// <param name="yy"></param>
vector2::vector2(float xx, float yy)
{
	x = xx;
	y = yy;
}


/// <summary>
/// コピーコンストラクタ
/// </summary>
/// <param name="v"></param>
vector2::vector2(const vector2& v)
{
	x = v.x;
	y = v.y;
}


/// <summary>
/// ベクトルの和
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
vector2 vector2::operator+(const vector2& v) const
{
	vector2 u =	{
		x + v.x,
		y + v.y
	};

	return u;
}



/// <summary>
/// ベクトルの差
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
vector2 vector2::operator-(const vector2& v) const
{
	vector2 u = {
		x - v.x,
		y - v.y
	};

	return u;
}

/// <summary>
/// vector2用出力ストリーム
/// </summary>
/// <param name="os"></param>
/// <param name="v"></param>
/// <returns></returns>
std::ostream& gameMath::operator<<(
	std::ostream& os,
	const vector2& v
) {
	os << '(' << v.x << ", " << v.y << ')';

	return os;
}


/// <summary>
/// 実数倍（右から実数）
/// </summary>
/// <param name="v"></param>
/// <param name="f"></param>
/// <returns></returns>
vector2 gameMath::operator*(const vector2& v, float f)
{
	vector2 u =	{
		v.x * f,
		v.y * f
	};

	return u;
}

/// <summary>
/// 実数倍（左から実数）
/// </summary>
/// <param name="f"></param>
/// <param name="v"></param>
/// <returns></returns>
vector2 gameMath::operator*(float f, const vector2& v)
{
	vector2 u =	{
		v.x * f,
		v.y * f
	};

	return u;
}

/// <summary>
/// 代入
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
const vector2& vector2::operator=(const vector2& v)
{
	x = v.x;
	y = v.y;

	return *this;
}

/// <summary>
/// 加算代入
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
vector2& gameMath::vector2::operator+=(const vector2& v)
{
	x += v.x;
	y += v.y;

	return *this;
}

/// <summary>
/// 減算代入
/// </summary>
/// <param name="v"></param>
/// <returns></returns>
vector2& gameMath::vector2::operator-=(const vector2& v)
{
	x -= v.x;
	y -= v.y;

	return *this;
}

/// <summary>
/// 実数倍乗算代入
/// </summary>
/// <param name="f">実数</param>
/// <returns></returns>
vector2& gameMath::vector2::operator*=(const float& f)
{
	x *= f;
	y *= f;

	return *this;
}


/// <summary>
/// 内積
/// </summary>
/// <param name="u"></param>
/// <param name="v"></param>
/// <returns></returns>
float vector2::dot(const vector2& u, const vector2& v)
{
	return u.x * v.x + u.y * v.y;
}


/// <summary>
/// 外積
/// </summary>
/// <param name="u"></param>
/// <param name="v"></param>
/// <returns></returns>
float vector2::cross(const vector2& u, const vector2& v)
{
	return u.x * v.y - u.y * v.x;
}

/// <summary>
/// 正規化
/// </summary>
/// <param name="p"></param>
/// <returns></returns>
vector2 gameMath::vector2::normalize(const vector2& p)
{
	float mp = p.magnitude();
	vector2 result{ p.x / mp, p.y / mp };
	return result;
}