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

Fixed& Fixed::operator = (const Fixed& copy) { //operator needs toreturn smth always
	std::cout << "Assignation operator called" << std::endl;
	fixedPointNumber = copy.getRawBits();
	return *this;
}


int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointNumber;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	fixedPointNumber = raw;
}
