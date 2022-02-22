#include <iostream>
#include <cstdlib>

// C 캐스팅은 너무 위험 합니다.
// 대부분 성공하는데, 위험한 캐스팅이 개발자의 의도 인지, 실수인지 구별되지 않습니다.

// 그래서 C++에서는 용도별로 캐스팅연산자를 제공합니다.

// static_cast      : 위험하지 않고, 논리적으로 필요한 것만 허용
// reinterpret_cast : 다른 타입의 주소를 캐스팅할때 사용
int main()
{
	// void* => int* : 반드시 필요한 작업이다.
	int* p1 = (int*)malloc(20);				 // C 스타일   - ok
	int* p2 = static_cast<int*>( malloc(20) );// C++스타일 - ok

	// int* => double* : 아주 위험하다.!
	int n = 3;
	double* p3 = (double*)&n;	// ok
//	double* p4 = static_cast<double*>(&n); // error
	double* p4 = reinterpret_cast<double*>(&n); // ok.

	const int c = 10;
	int* p5 = (int*)&c;              // ok. 하지만 너무 위험하다.
	int* p6 = static_cast<int*>(&c); // error
	int* p7 = reinterpret_cast<int*>(&c); // error
	int* p8 = const_cast<int*>(&c); // ok. 

	// 즉, C++은 용도별로 다른 형태로 캐스팅해서.
	// 의도를 명확히 코드에 표현한다.
}