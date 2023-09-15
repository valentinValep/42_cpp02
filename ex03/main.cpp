#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point point(5, 5);
	Point point2(5, 6);
	Point point3(5, 4);
	Point point4(5, 0);
	Point point5(0.002f, 9.99f);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "point = " << point << std::endl;
	std::cout << "point2 = " << point2 << std::endl;
	std::cout << "point3 = " << point3 << std::endl;
	std::cout << "point4 = " << point4 << std::endl;
	std::cout << "point5 = " << point5 << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point2) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point3) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point4) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point5) << std::endl;
	return 0;
}
