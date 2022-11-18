#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(){
	ClapTrap clapTrap_belly("Belly");

	std::cout << std::endl << "*------ Constructing a ScavTrap ------*" << std::endl;

	ScavTrap scavTrap_jean("Jean");

	scavTrap_jean.attack("Eric");
	scavTrap_jean.beRepaired(20);
	scavTrap_jean.takeDamage(8);
	scavTrap_jean.guardGate();
	scavTrap_jean.takeDamage(200);
	std::cout << std::endl << "*------ Constructing a ScavTrap from another Scavtrap ------*" << std::endl;
	ScavTrap scavTrapCopy(scavTrap_jean);
	std::cout << std::endl << "*------ Create a reference to ScavTrap ------*" << std::endl;
	ClapTrap &clapTrapRef = scavTrap_jean;
	clapTrapRef.beRepaired(10);

	std::cout << std::endl << "*------ Destructing created objects ------*" << std::endl;

	return 0;
}
