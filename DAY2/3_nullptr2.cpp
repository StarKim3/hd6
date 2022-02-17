#include <iostream>

void fn(int  n) { std::cout << "int"  << std::endl; } // 1
void fn(int* p) { std::cout << "int*" << std::endl; } // 2

int main()
{
	fn(0);       // int..  0의 정체는 정수(int 타입) 입니다. 
	fn((int*)0); // int*
	fn(nullptr); // int*

	auto ret = foo();

//	if ( ret == 0) // 이 코드만 보면 ret의 타입이 정수 인지, 포인터 인지 예측가능한가요 ?
	if ( ret == nullptr) // 위 코드 보다 가독성이 좋습니다.
	{
	}
}