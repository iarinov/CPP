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
	Fixed& operator = (const Fixed &copy);//why here is fixed and in another int
	int operator>( Fixed const & rhs) const;
	int operator<( Fixed const & rhs) const;
	int operator>=( Fixed const & rhs) const;
	int operator<=( Fixed const & rhs) const;
	int operator==( Fixed const & rhs) const;
	int operator!=( Fixed const & rhs) const;

	Fixed operator+( Fixed const & rhs) const;
	Fixed operator-( Fixed const & rhs) const;
	Fixed operator*( Fixed const & rhs) const;
	Fixed operator/( Fixed const & rhs) const;

	Fixed & operator++( void ); // Prefix (++F)
	Fixed & operator--( void ); // Prefix (--F)
	Fixed operator++( int n ); // Postfix (F++)
	Fixed operator--( int n ); // Postfix (F--)

	static Fixed & min(Fixed & a, Fixed & b );
	static Fixed & max(Fixed & a, Fixed & b );
	static const Fixed & min(const Fixed & a, const Fixed & b );
	static const Fixed & max(const Fixed & a, const Fixed & b );

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

