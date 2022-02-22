#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::vector<int> c = { 1,2,3,4,5 };

	// 핵심 1. reverse iterator
	auto p1 = c.rbegin(); // std::rbegin(c) 로 해도 됩니다.
	auto p2 = c.rend();   // std::rend(c)

	while (p1 != p2)
	{
		std::cout << *p1 << ", ";

		++p1; // reverse iterator 의 ++은 거꾸로 이동합니다
	}

	std::reverse_iterator a;
}