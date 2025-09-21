#include <iostream>
#include <cmath>
#include <stdio.h>

//#define t 0.5
//#define z 6
//#define y (t + (2 * (1/tan(z))))
//#define SQUARE(X) (X) * (X)
//#define x ((3*SQUARE(y)) /(4 * tan(z) - 2*SQUARE(t)))
//#define PX std::cout << x << std::endl;

//#define x 1.54
//#define y 3.26
//#define z (15/(x+exp(y)))
//#define b (x + pow(y, 3.0))/ (x+pow(z, 2.0))
//#define PB std::cout << b << std::endl;




int main()
{
	//PX;
	//PB;

	double alpha;
	std::cout << "Enter angle: ";
	std::cin >> alpha;
	double PI = acos(-1.0);

	std::cout << PI << std::endl;

	double radians = alpha * PI / 180.0;
	double y = 1 - 0.25 * pow(sin(2 * radians), 2) + cos(2 * radians);

	std::cout << "y = " << y << std::endl;
	return 0;

}
	
