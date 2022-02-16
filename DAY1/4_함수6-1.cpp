// 4_함수6-1
#include <iostream>

template<typename T>
T add(T a, T b)
{
	return a + b;
}
int main()
{
	// 아래 코드가 정확한 표기법 입니다.
	std::cout << add<int>(1,   2)   << std::endl;
	std::cout << add<double>(1.1, 2.2) << std::endl;

	// 타입 생략 가능합니다
	std::cout << add(1, 2) << std::endl;

	// 그런데.. 아래 경우는 어떨까요 ?
	std::cout << add(1, 2.2) << std::endl; // error
										// 함수 인자를 보고 추론할수 없습니다.

	std::cout << add<double>(1, 2.2) << std::endl; // ok.. 
}