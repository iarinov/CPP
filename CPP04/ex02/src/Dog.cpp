#include "inc/Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor has been called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {
		std::cout << "Dog destructor has been called" << std::endl;
}

Dog::Dog(Dog const &copy) {
	std::cout << "Dog copy constructor has been called" << std::endl;
	*this = copy;
}
