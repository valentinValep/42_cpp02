#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c(b);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << (a < b) << std::endl; // 1
	std::cout << (a > b) << std::endl; // 2

	Fixed d( 0.0f / 0.0f ); // NaN
	Fixed e( 1.0f / 0.0f ); // +inf
	Fixed f( -1.0f / 0.0f ); // -inf
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;
	std::cout << (d < e) << std::endl;
	std::cout << (d > e) << std::endl;
	std::cout << (d == e) << std::endl;
	std::cout << (d + e) << std::endl;
	std::cout << (d - e) << std::endl;
	std::cout << (d * e) << std::endl;
	std::cout << (d / e) << std::endl;
	std::cout << d++ << std::endl;
	std::cout << d++ << std::endl;
	std::cout << ++e << std::endl;
	std::cout << e.toInt() << std::endl;
	std::cout << e.toFloat() << std::endl;
	std::cout << Fixed::max( d, e ) << std::endl;
	return 0;
}