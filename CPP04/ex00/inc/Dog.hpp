#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog();
	Dog(Dog const &copy);
	~Dog();
};


