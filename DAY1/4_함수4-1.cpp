#include <cstdio>
#include <iostream>
// typename 대신 class 로 해도 됩니다.
//template<typename T>
template<class T>
T square(T a)
{
	return a * a;
}
int main()
{
//	printf("%p\n", &square); // 될까요 ? 잘 생각해 보세요 ?
					// 주소를 구한다는 의미 : 메모리에 있다는 것
					// 그런데, 틀(template)은 ??
					// => 컴파일 시간에 함수를 찍어낼때(생성)만 사용하는 틀이므로
					//    메모리에 있는것이 아닙니다.

	printf("%p\n", &square<int>); // ok 이렇게 하면 됩니다.

	std::cout << &square<int> << std::endl;
}

