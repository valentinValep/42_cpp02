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

	// inf and NaN tests
	Point point6(0.0f / 0.0f, 0.0f / 0.0f);
	Point point7(0.0f / 0.0f, 1.0f / 0.0f);
	Point point8(0.0f / 0.0f, -1.0f / 0.0f);
	Point point9(1.0f / 0.0f, 1.0f / 0.0f);
	Point point10(1.0f / 0.0f, 0.0f / 0.0f);
	Point point11(1.0f / 0.0f, -1.0f / 0.0f);
	Point point12(-1.0f / 0.0f, -1.0f / 0.0f);
	Point point13(-1.0f / 0.0f, 0.0f / 0.0f);
	Point point14(-1.0f / 0.0f, 1.0f / 0.0f);

	std::cout << "point6 = " << point6 << std::endl;
	std::cout << "point7 = " << point7 << std::endl;
	std::cout << "point8 = " << point8 << std::endl;
	std::cout << "point9 = " << point9 << std::endl;
	std::cout << "point10 = " << point10 << std::endl;
	std::cout << "point11 = " << point11 << std::endl;
	std::cout << "point12 = " << point12 << std::endl;
	std::cout << "point13 = " << point13 << std::endl;
	std::cout << "point14 = " << point14 << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point6) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point7) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point8) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point9) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point10) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point11) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point12) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point13) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point14) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(point9, point12, point6, point) << std::endl;
	std::cout << "bsp(a, b, c, point) = " << bsp(point9, point12, point6, point14) << std::endl;
	return 0;
}
