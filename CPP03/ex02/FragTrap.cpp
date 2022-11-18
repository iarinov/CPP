#include "FragTrap.hpp"

FragTrap::FragTrap() {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::FragTrap(std::string name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap name Constructor called" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "HighFiveGuys has been called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &other) {
	ClapTrap::operator=(other);
	return *this;
}
