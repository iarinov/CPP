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
	fixedPointNumber = copy.getRawBits();//why not *this = copy
}

Fixed::Fixed(const int value) : fixedPointNumber(0) {
	std::cout << "Int constructor called" << std::endl;
	fixedPointNumber = value << bit;
}

Fixed::Fixed(const float value) : fixedPointNumber(0) {
	std::cout << "Float constructor called" << std::endl;
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


//ex02
int Fixed::operator>( Fixed const & rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<( Fixed const & rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator>=( Fixed const & rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<=( Fixed const & rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator==( Fixed const & rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator!=( Fixed const & rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (1);
	return (0);
}
//----------------

// + - * /
Fixed Fixed::operator+( Fixed const & rhs) const
{
	Fixed ret(this->toFloat() + rhs.toFloat());

	return (ret);
}

Fixed Fixed::operator-( Fixed const & rhs) const
{
	Fixed ret(this->toFloat() - rhs.toFloat());

	return (ret);
}

Fixed Fixed::operator*( Fixed const & rhs) const
{
	Fixed ret(this->toFloat() * rhs.toFloat());

	return (ret);
}

Fixed Fixed::operator/( Fixed const & rhs) const
{
	Fixed ret(this->toFloat() / rhs.toFloat());

	return (ret);
}

//----------------

// F++ ++F F-- --F
Fixed & Fixed::operator++( void ) // Prefix (++F)
{
	this->fixedPointNumber += 1;
	return (*this);
}

Fixed & Fixed::operator--( void ) // Prefix (--F)
{
	this->fixedPointNumber -= 1;
	return (*this);
}

Fixed Fixed::operator++( int ) // Postfix (F++)
{
	Fixed	temp = *this;

	(this->fixedPointNumber) +=1 ;
	return (temp);
}

Fixed Fixed::operator--( int ) // Postfix (F--)
{
	Fixed	temp = *this;

	(this->fixedPointNumber) -=1 ;
	return (temp);
}

//-----------------

// min & max

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}
