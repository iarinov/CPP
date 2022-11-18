#pragma once

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
private:
	/* data */
public:
	Cat();
	Cat(Cat const &copy);
	~Cat();
};
