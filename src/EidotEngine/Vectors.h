#pragma once

/// Includes /////////
#include <iostream>
/// //////////////////


namespace ei {

	/////////////////////////////////
	/// Vector2f
	/// X    Y
	/// 0.0f 0.0f
	class Vector2f {
	public:
		float x = 0.0f;
		float y = 0.0f;

		/////////////////////////////
		/// Constructors

		Vector2f() = default;
		Vector2f(
			float x,
			float y
		);

		/////////////////////////////
		/// Function

		void outInformation() const;

		/////////////////////////////
		/// Operators

		void operator=(Vector2f v);

		bool operator==(Vector2f v);
		bool operator!=(Vector2f v);

		bool operator<=(Vector2f v);
		bool operator>=(Vector2f v);

		bool operator<(Vector2f v);
		bool operator>(Vector2f v);

		void operator+=(Vector2f v);
		void operator-=(Vector2f v);
		void operator*=(Vector2f v);
		void operator/=(Vector2f v);

		Vector2f operator+(Vector2f v);
		Vector2f operator-(Vector2f v);
		Vector2f operator*(Vector2f v);
		Vector2f operator/(Vector2f v);

	};

	/////////////////////////////////
	/// Vector3f
	/// X    Y    Z
	/// 0.0f 0.0f 0.0f
	class Vector3f {
	public:
		float x = 0.0f;
		float y = 0.0f;
		float z = 0.0f;

		/////////////////////////////
		/// Constructors

		Vector3f() = default;
		Vector3f(
			float x,
			float y,
			float z
		);
		Vector3f(
			Vector2f v,
			float z
		);

		/////////////////////////////
		/// Function

		void outInformation() const;

		/////////////////////////////
		/// Operators

		void operator=(Vector3f v);

		bool operator==(Vector3f v);
		bool operator!=(Vector3f v);

		bool operator<=(Vector3f v);
		bool operator>=(Vector3f v);

		bool operator<(Vector3f v);
		bool operator>(Vector3f v);

		void operator+=(Vector3f v);
		void operator-=(Vector3f v);
		void operator*=(Vector3f v);
		void operator/=(Vector3f v);

		Vector3f operator+(Vector3f v);
		Vector3f operator-(Vector3f v);
		Vector3f operator*(Vector3f v);
		Vector3f operator/(Vector3f v);

	};

	/////////////////////////////////
	/// Vector2i
	/// X    Y
	/// 0    0
	class Vector2i {
	public:
		int x = 0;
		int y = 0;

		/////////////////////////////
		/// Constructors

		Vector2i() = default;
		Vector2i(
			int x,
			int y
		);

		/////////////////////////////
		/// Function

		void outInformation() const;

		/////////////////////////////
		/// Operators

		void operator=(Vector2i v);

		bool operator==(Vector2i v);
		bool operator!=(Vector2i v);

		bool operator<=(Vector2i v);
		bool operator>=(Vector2i v);

		bool operator<(Vector2i v);
		bool operator>(Vector2i v);

		void operator+=(Vector2i v);
		void operator-=(Vector2i v);
		void operator*=(Vector2i v);
		void operator/=(Vector2i v);

		Vector2i operator+(Vector2i v);
		Vector2i operator-(Vector2i v);
		Vector2i operator*(Vector2i v);
		Vector2i operator/(Vector2i v);

	};
}
