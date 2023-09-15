#pragma once

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	Point(); // Default constructor
	Point(Fixed const x, Fixed const y);
	Point(const Point &src); // Copy constructor
	~Point(); // Destructor

	Point	&operator=(const Point &src); // Assignment operator

	Fixed	getX() const;
	Fixed	getY() const;
};

std::ostream	&operator<<(std::ostream &out, const Point &src);
