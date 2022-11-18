#include "ClapTrap.hpp"


ClapTrap::ClapTrap() {
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string var ) {
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Constructor called" << std::endl;
	name = var;
}

ClapTrap::ClapTrap(const ClapTrap & b ) {
	std::cout << "Copy constructor called" << std::endl;
	hitPoints = b.hitPoints;//when do we use just hiPoints and when this->hitpoints
	energyPoints = b.energyPoints;
	attackDamage = b.attackDamage;
}

void ClapTrap::attack(const std::string& target) {
	if (this->energyPoints > 0) {
		this->energyPoints -= 1;
		std::cout << "ClapTrap " << name << " attacks " << target << " ,causing " << attackDamage << " points of damage!" << std::endl;
	}
	else {
		std::cout << this->name << " is out of energy!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " takes damage " << amount << std::endl;
	if (amount > this->hitPoints) {
		amount = this->hitPoints;
	}
	this->hitPoints -= amount;

}
void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0) {
		this->hitPoints += amount;
		this->energyPoints -= 1;
		std::cout << "ClapTrap " << name << " was repaired by this " << amount << " of hit points." << std::endl;
	}
	else {
		std::cout << this->name << " is out of energy!" << std::endl;
	}
}


//setters
void	ClapTrap::setName(std::string name) {
	this->name = name;
}

void	ClapTrap::setHitPoints (unsigned int hitPoints) {
	this->hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
	this->attackDamage = attackDamage;
}

//getters
std::string	ClapTrap::getName()const {
	return(this->name);
}

unsigned int	ClapTrap::getHitPoints() const {
	return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const {
	return (this->energyPoints);
}

unsigned int ClapTrap::getAttackDamage() const {
	return (this->attackDamage);
}

ClapTrap&	ClapTrap::operator=( const ClapTrap & b ) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &b) {
		this->name = b.name;
		this->attackDamage = b.attackDamage;
		this->energyPoints = b.energyPoints;
		this->hitPoints = b.hitPoints;
	}

	return *this;
}
