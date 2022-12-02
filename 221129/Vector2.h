#pragma once

#include <iostream>
#include <cmath>

/// <summary>
/// 数学ライブラリ（前方宣言）
/// </summary>
namespace GameMath
{
	class Vector2;

	// Vector2 出力ストリーム
	std::ostream& operator<<
		(
			std::ostream& os,
			const Vector2& v
		);

	// Vector2 実数倍
	Vector2 operator*(const Vector2& v, float f);
	Vector2 operator*(float f, const Vector2& v);
}


/// <summary>
/// ゲーム数学ライブラリ
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
		float x;	// X成分
		float y;	// Y成分

		// コンストラクタ／デストラクタ
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

		// 演算子のオーバーロード
	public:
		Vector2 operator+(const Vector2& v) const;		// 加算
		Vector2 operator-(const Vector2& v) const;		// 減算

		// 実数倍
		friend Vector2 operator*(const Vector2& v, float f);
		friend Vector2 operator*(float f, const Vector2& v);

		// 代入
		Vector2& operator=(const Vector2& v);

		// 演算代入 += -= *=
		// 宿題（広島、岡山共通）
		Vector2& operator+=(const Vector2& v);	// 加算代入
		Vector2& operator-=(const Vector2& v);	// 減算代入
		Vector2& operator*=(float f);			// 実数乗算代入

		// 静的関数（クラス関数）
	public:
		static float Dot(const Vector2& u, const Vector2& v);		// 内積
		static float Cross(const Vector2& u, const Vector2& v);		// 外積

		// 正規化ベクトルを求める（岡山だけの宿題）
		static Vector2 Normalize(const Vector2& p);

		// ユーティリティ
	public:
		// ベクトルの大きさ
		inline float magnitude() const { return sqrtf(x * x + y * y); }
		// 正規化ベクトル
		inline Vector2 normalized() const { return Vector2::Normalize(*this); }

		// 入出力ストリーム
	public:
		friend std::ostream& operator<<
			(
				std::ostream& os,
				const Vector2& v
			);
	};
}