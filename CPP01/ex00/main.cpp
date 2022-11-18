#include "Zombie.hpp"

int	main() {

	Zombie*	newZom = newZombie("Foo");
	newZom->announce();
	randomChump("Anna");
	delete newZom;
}
