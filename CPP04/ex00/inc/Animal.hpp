#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &copy);
		virtual ~Animal();
		void	makeSound()const;
		std::string	getType() const;
};


//virtual? overwrite the dependent functions
