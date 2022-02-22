#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::vector<int> c = { 1,2,3,4,5 };

	// �ٽ� 1. reverse iterator
	auto p1 = c.rbegin(); // std::rbegin(c) �� �ص� �˴ϴ�.
	auto p2 = c.rend();   // std::rend(c)

	while (p1 != p2)
	{
		std::cout << *p1 << ", ";

		++p1; // reverse iterator �� ++�� �Ųٷ� �̵��մϴ�
	}

	std::reverse_iterator a;
}