#pragma once

class Fixed
{
private:
	int		_value;
	static const int	_fractional_bits = 8;
public:
	Fixed(); // Default constructor
	Fixed(const Fixed &src); // Copy constructor
	Fixed	&operator=(const Fixed &src); // Assignment operator
	~Fixed(); // Destructor
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
