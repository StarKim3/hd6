// 1_reference1.cpp   41 page

#include <iostream>

int main()
{
	int  n = 10;

	int* p = &n;

	int& r = n;

	r = 20;

	std::cout << n << std::endl;
	std::cout << &n << std::endl;
	std::cout << &r << std::endl;
}