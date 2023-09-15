#pragma once

class Fixed
{
private:
	int		_value;
	static const int	_fractional_bits = 8;
public:
	// Constructors and destructor
	Fixed(); // Default constructor
	Fixed(const Fixed &src); // Copy constructor
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(); // Destructor

	// Operators
	Fixed	&operator=(const Fixed &src); // Assignment operator
	bool	operator>(const Fixed &src) const; // Comparison operators
	bool	operator<(const Fixed &src) const;
	bool	operator>=(const Fixed &src) const;
	bool	operator<=(const Fixed &src) const;
	bool	operator==(const Fixed &src) const;
	bool	operator!=(const Fixed &src) const;
	Fixed	operator+(const Fixed &src) const; // Arithmetic operators
	Fixed	operator-(const Fixed &src) const;
	Fixed	operator*(const Fixed &src) const;
	Fixed	operator/(const Fixed &src) const;
	Fixed	&operator++(); // Increment and decrement operators
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	// Member functions
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

	// Static functions
	static Fixed	&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &src);
