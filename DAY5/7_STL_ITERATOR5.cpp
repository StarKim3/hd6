#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::vector<int> c = { 1,2,3,4,5 };

	// 컨테이너의 모든 요소를 열거 하는 방법 

	// 1. range-for, 모든 컨테이너 가능. 가장 쉽고, 편리한 방법. 권장!!
	for (auto e : c)  
	{
		// e = 0; // 이런 코드를 하려면 auto& e 로 하세요.
		std::cout << e << ", ";
	}
	std::cout << std::endl;

	// 2. 반복자로 열거. 
	// C++11 이전 시절에 널리 사용하던 방식. 모든 컨테이너에 가능
	auto p1 = c.begin();

	while (p1 != c.end())
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

	// 3. [] 연산자 로 열거, list 는 안됨. vector와 deque 만 가능
	for (int i = 0; i < c.size(); i++)
	{
		std::cout << c[i] << ", ";
	}
	std::cout << std::endl;
}