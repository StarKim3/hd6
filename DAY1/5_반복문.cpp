// 5_반복문 - 38page
#include <iostream>
#include <string>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 전통적인 for 문
	for (int i = 0; i < 10; i++)
	{
		std::cout << x[i] << std::endl;
	}

	// C++11에서 새로 도입된 for 문
	for (int e : x)
	{
		std::cout << e << std::endl;
	}
}