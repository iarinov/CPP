#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed
{
private:
	int fixedPointNumber;
	static const int bit = 8;

public:
	Fixed();
	Fixed (const Fixed &copy);
	Fixed& operator = (const Fixed &copy);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	~Fixed();
};

#endif
