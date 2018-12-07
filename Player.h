#pragma once
#include "BaseCharacter.h"
#include <iostream>
class Vector2;
class Transform;
class Sprite;
class Player : public BaseCharacter{

public:
	Player();
	~Player();

	void tick() override;
	void render(SDL_Renderer*) override;

private:
	Transform* mPosition;
	Sprite* mSprite;
	void Move(Vector2*);
};

