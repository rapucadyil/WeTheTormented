#pragma once
class Component {
/*
Base class for a component representation in this game
*/
public:
	Component();
	~Component();

	inline int getID() {
		return this->mID;
	}

	inline const char* getCompName() {
		return this->mCompName;
	}

	virtual void tick() = 0;

protected:
	int mID;
	const char* mCompName;
};

