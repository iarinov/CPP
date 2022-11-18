#include <WrongCat.hpp>


WrongCat::WrongCat()
{
	std::cout << "Wrongcat default constructor has been called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor has been called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) {
	std::cout << "WrongCat copy constructor has been called" << std::endl;
	*this = copy;
}
