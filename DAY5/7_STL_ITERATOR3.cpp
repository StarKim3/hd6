#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::vector<int> c = { 1,2,3,4,5 };

	// 핵심 1. past the end
	auto p1 = c.begin();  // std::begin(c)
	auto p2 = c.end();    // std::end(c)

	*p1 = 10; // ok
//	*p2 = 10; // runtime-error. 절대 이렇게 하면 안됩니다.

	// c.end()로 얻은 반복자는 ==, != 연산의 용도로만 사용해야 합니다.
	while (p1 != p2)
	{
		std::cout << *p1 << ", ";
		++p1;
	}
}