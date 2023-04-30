#include <iostream>

constexpr int greater(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	constexpr int g{ greater(5, 6) };
	std::cout << g << " is greater!\n";	//case 1: evaluated at compile-time

	int x{ 5 };
	std::cout << greater(x, 6) << " is greater!\n";	//case 2: evaluated at
													//run-time

	std::cout << greater(5, 6) << " is greater!\n";	//case 3: evaluated at
	return 0;									//compile-time or run-time
}	




