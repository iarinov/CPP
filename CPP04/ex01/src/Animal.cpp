#include "inc/Animal.hpp"

Animal::Animal() {
	std::cout << "animal default constructor has been called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal const &copy) {
	std::cout << "Animal copy constructor has been called" << std::endl;
	*this = copy;
}

Animal::~Animal() {
	std::cout << "Animal destructor has been called" << std::endl;
}

void	Animal::makeSound()const {
	std::cout << "I am" << this->type << std::endl;
}

std::string	Animal::getType() const {
	return this->type;
}
