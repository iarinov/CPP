#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;
}

ScavTrap::ScavTrap(std::string name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &src) {
		hitPoints = src.hitPoints;
		energyPoints = src.energyPoints;
		attackDamage = src.attackDamage;
	}
	return *this;
}

void ScavTrap:: attack(const std::string &target) {
	std::cout << "ScavTrap " << name << " attacks " << target << " causing ";
	std::cout << hitPoints << " points of damage!" << std::endl;
}

void ScavTrap:: guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}
