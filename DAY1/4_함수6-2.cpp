// 4_함수6-1
#include <iostream>

// ? 채워 보세요
template<typename T1, typename T2>
? add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	// 정확한 표기법
	std::cout << add<int, double>(1, 2.2) << std::endl; 

	// 타입인자 생략가능
	std::cout << add(1, 2.2) << std::endl;

}