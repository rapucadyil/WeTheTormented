#include "Sprite.h"
Sprite::Sprite(const char* filepath) {
	this->mCompName = "Sprite";
	this->mFile = filepath;
}

Sprite::~Sprite() {
}

void Sprite::tick() {

}

void Sprite::draw(SDL_Renderer* renderer) {
	SDL_Surface* tmp = IMG_Load(this->mFile);
	this->mSpriteTexture = SDL_CreateTextureFromSurface(renderer, tmp);
	SDL_RenderCopy(renderer, this->mSpriteTexture, NULL, NULL);
}
