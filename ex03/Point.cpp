#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
	// Default constructor
}

Point::Point(Fixed const x, Fixed const y): _x(x), _y(y)
{
	// Constructor
}

Point::Point(const Point &src): _x(src._x), _y(src._y)
{

}

Point::~Point()
{
	// Destructor
}

Point	&Point::operator=(const Point &src)
{
	if (this == &src)
		return (*this);
	(Fixed)this->_x = src._x;
	(Fixed)this->_y = src._y;
	return (*this);
}

Fixed	Point::getX() const
{
	return (this->_x);
}

Fixed	Point::getY() const
{
	return (this->_y);
}

std::ostream	&operator<<(std::ostream &out, const Point &src)
{
	out << "Point(" << src.getX() << ", " << src.getY() << ")";
	return (out);
}
