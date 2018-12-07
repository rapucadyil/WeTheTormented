#pragma once
#include <vector>
class Component;
class BaseCharacter {
/*
	A base character class for any character in this game (enemy/player)
*/
public:
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

protected:
	float mMaxHealth;
	float mCurrentHealth;

	const char* mName;

	std::vector<Component*> mComponents;
};

