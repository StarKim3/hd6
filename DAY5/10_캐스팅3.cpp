#include <iostream>
#include <cstdlib>

// C 캐스팅은 너무 위험 합니다.
// 대부분 성공하는데, 위험한 캐스팅이 개발자의 의도 인지, 실수인지 구별되지 않습니다.

// 그래서 C++에서는 용도별로 캐스팅연산자를 제공합니다.

int main()
{
	int* p1 = (int*)malloc(20);				 // C 스타일
	int* p2 = static_cast<int*>( malloc(20) );// C++스타일

	int n = 3;
	double* p3 = (double*)&n;
	double* p4 = static_cast<double*>(&n);
}