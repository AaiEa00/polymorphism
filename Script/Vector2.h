#pragma once
#include <iostream>
#include <cmath>

/// <summary>
/// 数学ライブラリ（前方宣言）
/// </summary>
namespace gameMath
{
	class vector2;

	// vector2 出力ストリーム
	std::ostream& operator<<
		(
			std::ostream& os,
			const vector2& v
		);

	// vector2 実数倍
	vector2 operator*(const vector2& v, float f);
	vector2 operator*(float f, const vector2& v);
}


/// <summary>
/// ゲーム数学ライブラリ
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
		float x;	// X成分
		float y;	// Y成分

		// コンストラクタ／デストラクタ
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

		// 演算子のオーバーロード
	public:
		vector2 operator+(const vector2& v) const;	// 加算
		vector2 operator-(const vector2& v) const;	// 減算

		// 実数倍
		friend vector2 operator*(const vector2& v, float f);
		friend vector2 operator*(float f, const vector2& v);
		
		const vector2& operator=(const vector2& v);	// 代入

		// 演算代入 += -= *=
		vector2& operator+=(const vector2& v);
		vector2& operator-=(const vector2& v);
		vector2& operator*=(const float& f);

		// 静的関数（クラス関数）
	public:
		static float dot(const vector2& u, const vector2& v);		// 内積
		static float cross(const vector2& u, const vector2& v);		// 外積

		// 正規化ベクトルを求める
		static vector2 normalize(const vector2& p);

		// ユーティリティ
	public:
		// ベクトルの大きさ
		inline float magnitude() const { return sqrtf(x * x + y * y); }
		// 正規化ベクトル
		inline vector2 normalized() const { return vector2::normalize(*this); }

		// 入出力ストリーム
	public:
		friend std::ostream& operator<<
			(
				std::ostream& os,
				const vector2& v
			);
	};
}