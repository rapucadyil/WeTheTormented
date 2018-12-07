#pragma once
#include <vector>
#include <SDL.h>
class Component;
class BaseCharacter {
/*
	A base character class for any character in this game (enemy/player)
*/
public:
	BaseCharacter() {}
	BaseCharacter(const char*, float, float);
	~BaseCharacter();
	/*
	Modifies the health value
	<param>char param : current or max health to mod</param>
	<param>float val: the value to modify with</param>
	*/
	void ModifyHealth(char param, float val);

	inline float getMaxHealth() {
		return this->mMaxHealth;
	}

	inline float getCurrentHealth() {
		return this->mCurrentHealth;
	}


	virtual void tick() = 0;
	virtual void render(SDL_Renderer*) = 0;


protected:
	float mMaxHealth;
	float mCurrentHealth;

	const char* mName;
};

