#include "Fixed.hpp"

Fixed::Fixed() : fixedPointNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed (const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	fixedPointNumber = copy.getRawBits();
}

Fixed::Fixed(const int value) : fixedPointNumber(0) {
	std::cout << "Int constructor called" << std::endl;
	// fixedPointNumber = value;
	fixedPointNumber = value << bit;
}

Fixed::Fixed(const float value) : fixedPointNumber(0) {
	std::cout << "Float constructor called" << std::endl;
	// fixedPointNumber = value;
	fixedPointNumber = roundf(value * (1 << bit));
}

Fixed& Fixed::operator = (const Fixed& copy) { //operator needs toreturn smth always
	std::cout << "Assignation operator called" << std::endl;
	fixedPointNumber = copy.getRawBits();
	return *this;
}


int	Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return fixedPointNumber;
}

void Fixed::setRawBits( int const raw ) {
	// std::cout << "setRawBits member function called" << std::endl;
	fixedPointNumber = raw;
}

float Fixed::toFloat( void ) const {
	return (float) fixedPointNumber / (1 << bit);
}

int Fixed::toInt( void ) const {
	return fixedPointNumber >> bit;
}


std::ostream	&operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat() << std::endl;

	return os;
}
