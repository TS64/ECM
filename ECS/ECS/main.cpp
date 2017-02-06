#include "Entity.h"
#include "System.h"

int main()
{
	Entity player, alien, cat, dog;
	HealthComponent playerHC;
	HealthComponent alienHC;
	HealthComponent dogHC;

	PositionComponent playerPC;
	PositionComponent alienPC;
	PositionComponent dogPC;
	PositionComponent catPC;

	ControlComponent playerCC;

	player.addComponent(&playerHC);
	player.addComponent(&playerPC);
	player.addComponent(&playerCC);

	alien.addComponent(&alienHC);
	alien.addComponent(&alienPC);
	
	dog.addComponent(&dogHC);
	dog.addComponent(&dogPC);

	cat.addComponent(&catPC);

	ControlSystem cs; AISystem as; RenderSystem rs;
	cs.addEntity(player);

	as.addEntity(alien);
	as.addEntity(cat);
	as.addEntity(dog);

	rs.addEntity(player);
	rs.addEntity(alien);
	rs.addEntity(cat);
	rs.addEntity(dog);

	int i = 0;
	while (i < 1000)
	{
		cs.update();
		as.update();
		rs.update();
		i++;
	}
	
	system("PAUSE");

	return 0;
}