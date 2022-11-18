#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() {
	std::cout << "Wronganimal default constructor has been called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) {
	std::cout << "WrongAnimal copy constructor has been called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor has been called" << std::endl;
}

void	WrongAnimal::makeSound()const {
	std::cout << "I am" << this->type << std::endl;
}

std::string	WrongAnimal::getType() const {
	return this->type;
}

