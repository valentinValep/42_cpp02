#include <iostream>
#include <cmath>
#include "Fixed.hpp"

// Constructors & Destructor

Fixed::Fixed(): _value(0)
{
	// Default constructor
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src; // Assignment operator
}

Fixed::Fixed(const int value): _value(value << _fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _value(roundf(value * (1 << _fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// Destructor
	std::cout << "Destructor called" << std::endl;
}

// Operators Overload

Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	_value = src.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &src) const
{
	return (_value > src.getRawBits());
}

bool	Fixed::operator<(const Fixed &src) const
{
	return (_value < src.getRawBits());
}

bool	Fixed::operator>=(const Fixed &src) const
{
	return (_value >= src.getRawBits());
}

bool	Fixed::operator<=(const Fixed &src) const
{
	return (_value <= src.getRawBits());
}

bool	Fixed::operator==(const Fixed &src) const
{
	return (_value == src.getRawBits());
}

bool	Fixed::operator!=(const Fixed &src) const
{
	return (_value != src.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &src) const
{
	return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &src) const
{
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &src) const
{
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &src) const
{
	return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed	&Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	_value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	_value--;
	return (tmp);
}

// Member Functions

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float	Fixed::toFloat() const
{
	return ((float) _value / (1 << _fractional_bits));
}

int		Fixed::toInt() const
{
	return (_value >> _fractional_bits);
}

// Static Functions

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

// Non-Member Functions

std::ostream	&operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return (out);
}
