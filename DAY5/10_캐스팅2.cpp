#include <iostream>

int main()
{
	int n = 3;

//	double* p1 = &n; // 타입이 다르므로 error 
	double* p1 = (double*)&n; // ok.. 명시적 캐스팅은 대부분 성공

//	*p1 = 3.4;

	const int c = 10;
	int* p2 = (int*)&c; // ok

	// 위 코드가 에러가 없으므로
	*p2 = 20; // 이 코드도 됩니다.

	std::cout << c << std::endl; // 얼마 나올까요 ?
								// 컴파일러마다 다를수 있는데, 대부분 10 입니다.

	std::cout << *p2 << std::endl; // 20
}


