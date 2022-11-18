#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed
{
private:
	int	fixedPointNumber;
	static const int	bit = 8;

public:
	//constructors
	Fixed();
	Fixed (const Fixed &copy);
	Fixed (const int value);
	Fixed (const float value);


	//operators
	Fixed& operator = (const Fixed &copy);

	//public member funcitions
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	//destructor
	~Fixed();
};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);

#endif

