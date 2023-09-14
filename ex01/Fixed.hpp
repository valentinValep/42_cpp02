#pragma once

class Fixed
{
private:
	int		_value;
	static const int	_fractional_bits = 8;
public:
	Fixed(); // Default constructor
	Fixed(const Fixed &src); // Copy constructor
	Fixed(const int value);
	Fixed(const float value);
	Fixed	&operator=(const Fixed &src); // Assignment operator

	~Fixed(); // Destructor
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &src);
