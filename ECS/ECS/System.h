#pragma once
#include "Entity.h"
#include <vector>
#include <iostream>
#include "time.h"

class ControlSystem
{
private:
	std::vector<Entity> entities;

public:
	void addEntity(Entity e)
	{
		entities.push_back(e);
	}

	void update()
	{
		std::cout << "ControlSystem Update" << std::endl;
		for (int i = 0; i < entities.size(); i++)
		{
			std::vector<Component*> co = entities[i].getComponents();
			std::vector<Component*>::iterator it;
			std::vector<char> n;
			for (it = co.begin(); it != co.end(); ++it)
			{
				Component *c = *it;
				n.push_back(c->getName());
			}
			if (std::find(n.begin(), n.end(), 'P') != n.end() &&
				std::find(n.begin(), n.end(), 'C') != n.end())
			{
				std::cout << "pos & ctrl" << std::endl;
				entities[i].update();
			}
		}
	}
};

class RenderSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e)
	{
		entities.push_back(e);
	}

	void update()
	{
		std::cout << "RenderSystem Update" << std::endl;
		for (int i = 0; i < entities.size(); i++)
		{
			std::vector<Component*> co = entities[i].getComponents();
			std::vector<Component*>::iterator it;
			std::vector<char> n;
			for (it = co.begin(); it != co.end(); ++it)
			{
				Component *c = *it;
				n.push_back(c->getName());
			}
			if (std::find(n.begin(), n.end(), 'P') != n.end())
			{
				std::cout << "pos" << std::endl;
				entities[i].update();
			}
		}
	}
};

class AISystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e)
	{
		entities.push_back(e);
	}

	void update()
	{
		std::cout << "AISystem Update" << std::endl;
		for (int i = 0; i < entities.size(); i++)
		{
			std::vector<Component*> co = entities[i].getComponents();
			std::vector<Component*>::iterator it;
			std::vector<char> n;
			for (it = co.begin(); it != co.end(); ++it)
			{
				Component *c = *it;
				n.push_back(c->getName());
			}
			if (std::find(n.begin(), n.end(), 'P') != n.end() &&
				std::find(n.begin(), n.end(), 'H') != n.end())
			{
				std::cout << "pos & hp" << std::endl;
				entities[i].update();
			}
		}
	}
};
