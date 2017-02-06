#pragma once
#include "Component.h"
#include <vector>
#include <string>
#include <iostream>

class Entity
{
	int id;
public:
	Entity() {}
	~Entity() {}

	void addComponent(Component* c)
	{
		components.push_back(c);
	}
	void removeComponent(Component* c)
	{

	}
	std::vector<Component*> getComponents() { return components; }

	void update()
	{
		for (int i = 0; i < components.size(); i++)
		{
			components[i]->updateValue(components[i]->getValue() + 1);
		}
	}

private:
	std::vector<Component*> components;
};
