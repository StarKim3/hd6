// QA1-1.cpp
#include <iostream>

#define SQUARE(x) x * x

inline int square(int a)
{
	return a * a;
}
int main()
{
	int a = 3, b = 3;
	int n1 = SQUARE(a+1);
	int n2 = square(b+1);

	// 아래 2줄 결과 예측해 보세요
	std::cout << n1 << std::endl;
	std::cout << n2 << std::endl;
}
