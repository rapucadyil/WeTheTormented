#include "Transform.h"

Transform::Transform(int x, int y) {
	this->mPosition = new Vector2(x, y);
}

Transform::Transform(Vector2* pos) {
	this->mPosition = pos;
}

Transform::~Transform() {
}

void Transform::move(Vector2 * newPos) {
	
}

void Transform::tick() {

}
