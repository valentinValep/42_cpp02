#include "Point.hpp"

static Fixed	abs(Fixed const n)
{
	return (n < 0 ? n * -1 : n);
}

static Fixed	triangleArea(Point const a, Point const b, Point const c)
{
	return (Fixed(0.5f) *
		abs((a.getX() * (b.getY() - c.getY())) +
			(b.getX() * (c.getY() - a.getY())) +
			(c.getX() * (a.getY() - b.getY()))));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed const	areaABC = triangleArea(a, b, c);
	Fixed const	areaABP = triangleArea(a, b, point);
	Fixed const	areaACP = triangleArea(a, c, point);
	Fixed const	areaBCP = triangleArea(b, c, point);

	if (areaABC == 0 || areaABP == 0 || areaACP == 0 || areaBCP == 0)
		return (false);
	return (areaABP + areaACP + areaBCP == areaABC);
}
