#include "ClapTrap.hpp"

int main() {

	std::string s1 = "Gertrude";
	std::string s2 = "Gilbert";

	ClapTrap claptrap1(s1);
	ClapTrap claptrap2(s2);

	// claptrap2 = claptrap1;

	// claptrap2.setEnergyPoints(claptrap1.getEnergyPoints());

	std::cout << std::endl;
	claptrap1.attack(s2);
	claptrap2.takeDamage(4);
	claptrap2.beRepaired(3);
	claptrap2.beRepaired(18);

	claptrap2.attack(s1);
	claptrap1.takeDamage(9);
	claptrap2.attack(s1);
	claptrap1.takeDamage(9);
	claptrap2.attack(s1);

	claptrap1.beRepaired(3);
	claptrap1.beRepaired(64);
	std::cout << std::endl;
	return (0);
}
