#include <iostream>
#include "FractionV2.h"

int main()
{
	FractionV2 a{ 1,2 };
	FractionV2 b{ 1,3 };

	std::cout << "a = "; a.print(); std::cout << " b = "; b.print(); std::cout << '\n';
	std::cout << "a + b = "; (a + b).print(); std::cout << '\n';
	std::cout << "a - b = "; (a - b).print(); std::cout << '\n';
	std::cout << "a * b = "; (a * b).print(); std::cout << '\n';
	std::cout << "a / b = "; (a / b).print(); std::cout << '\n';

	std::cout << "a + 3 = "; (a + 3).print(); std::cout << '\n';
	std::cout << "3 + a = "; (3 + a).print(); std::cout << '\n';
	std::cout << "a - 3 = "; (a - 3).print(); std::cout << '\n';
	std::cout << "3 - a = "; (3 - a).print(); std::cout << '\n';

	std::cout << "a * 3 = "; (a * 3).print(); std::cout << '\n';
	std::cout << "3 * a ="; (3 * a).print(); std::cout << '\n';
	std::cout << "a / 3 = "; (a / 3).print(); std::cout << '\n';
	std::cout << "3 / a = "; (3 / a).print(); std::cout << '\n';

	return 0;
}