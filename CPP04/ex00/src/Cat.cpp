#include <Cat.hpp>

Cat::Cat()
{
	std::cout << "cat default constructor has been called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called" << std::endl;
}

Cat::Cat(Cat const &copy) {
	std::cout << "Cat copy constructor has been called" << std::endl;
	*this = copy;
}
