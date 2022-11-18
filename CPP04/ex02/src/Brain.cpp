#include <Brain.hpp>

Brain() {
	std::cout << "Brain default constructor has been called" << std::endl;
	this->type = "Brain";
}

Brain(Brain const &copy) {
	std::cout << "Brain copy constructor has been called" << std::endl;
	*this = copy;
}

~Brain() {
	std::cout << "Brain destructor has been called" << std::endl;
}
