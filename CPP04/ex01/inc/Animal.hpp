#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &copy);
		~Animal();
		void	makeSound()const;
		std::string	getType() const;
};


