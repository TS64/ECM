#pragma once
#include <iostream>
#include <ctime>

class Component
{
public:
	~Component() {}
	virtual char getName() = 0;
	virtual void updateValue(int i) = 0;
	virtual int getValue() = 0;
protected:
	Component() {}
	
};

class HealthComponent : public Component
{
public:
	HealthComponent() : health(100), name('H') {}
	int getValue() { return health; }
	void updateValue(int h) 
	{ 
		health = h;
		std::cout << "health:" << health << std::endl;
	}
	char getName() { return name; }
private:
	int health;
	char name;
};

class PositionComponent : public Component
{
public:
	PositionComponent() : position(51), name('P') {}
	int getValue() { return position; }
	void updateValue(int p) 
	{ 
		position = p; 
		std::cout << "position:" << position << std::endl;
	}
	char getName() { return name; }
private:
	int position;
	char name;
};

class ControlComponent : public Component
{
public:
	ControlComponent() : control(1), name('C') {}
	int getValue() { return control; }
	void updateValue(int c) 
	{ 
		//std::cout << "Updating control" << std::endl;
		control = c;
		std::cout << "control:" << control << std::endl;
	}
	char getName() { return name; }
private:
	int control;
	char name;
};


