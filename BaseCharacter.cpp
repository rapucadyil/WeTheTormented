#include "BaseCharacter.h"

BaseCharacter::BaseCharacter(const char* name, float m, float c) {
	this->mName = name;
	this->mCurrentHealth = c;
	this->mMaxHealth = m;
}


BaseCharacter::~BaseCharacter() {
}

void BaseCharacter::ModifyHealth(char param, float val) {
	switch (param) {
	case 'C':
		this->mCurrentHealth += val;
		break;
	case 'M':
		this->mMaxHealth += val;
		break;
	}
}
