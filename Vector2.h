#pragma once
class Vector2 {
public:

	Vector2(int, int);
	~Vector2();

	inline static Vector2* Zero() {
		return new Vector2(0, 0);
	}
	inline static Vector2* Right() {
		return new Vector2(1, 0);
	}
	inline static Vector2* Left() {
		return new Vector2(-1, 0);
	}
	inline int getX() { return this->X; }
	inline int getY() { return this->Y; }

private:
	int X, Y;
};

