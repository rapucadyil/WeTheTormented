#pragma once
#include "Component.h"
#include "Vector2.h"
class Transform : public Component{
public:
	Transform(int, int);
	Transform(Vector2*);
	~Transform();

	inline Vector2& getPosition() {
		return *mPosition;
	}
	
	void move(Vector2* newPos);
	void tick() override;

private:
	Vector2* mPosition;
};

