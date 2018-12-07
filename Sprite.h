#pragma once
#include "Component.h"
#include <SDL.h>
#include <SDL_image.h>
class Sprite : public Component {

public:
	Sprite(const char*);
	~Sprite();

	void tick() override;
	void draw(SDL_Renderer*);

private:
	SDL_Texture* mSpriteTexture;
	const char* mFile;
};

