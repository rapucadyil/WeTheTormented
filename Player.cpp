#include "Player.h"
#include "Transform.h"
#include "Vector2.h"
#include "Sprite.h"
Player::Player() {
	this->mName = "Player";
	this->mPosition = new Transform(Vector2::Zero());
	this->mSprite = new Sprite("assets/player.png");		//FIXME: only testing filename
}

Player::~Player() {

}

void Player::tick() {
	std::cout << "Transform comp: " << "( " << this->mPosition->getPosition().getX() << ", " <<
		this->mPosition->getPosition().getX() << " )" << std::endl;
}

void Player::render(SDL_Renderer* renderer) {
	this->mSprite->draw(renderer);
}

void Player::Move(Vector2* pos) {
	this->mPosition->move(pos);
}
