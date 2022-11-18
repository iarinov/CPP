#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:

	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;

public:

	ClapTrap();
	ClapTrap( std::string var);
	ClapTrap(const ClapTrap & b );
	~ClapTrap();

	ClapTrap	&operator=( const ClapTrap & b );

	//getter
	std::string		getName()const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;

	//setter
	void	setName(std::string	name);
	void	setHitPoints(unsigned int hitPoints);
	void	setEnergyPoints(unsigned int energyPoints);
	void	setAttackDamage(unsigned int attackDamage);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif
