// 1_reference1.cpp   41 page
#include <iostream>

int main()
{
	int  n = 10; // 프로그램에서 사용할 메모리 할당
				 // 

	int* p = &n; // 주소를 보관하는 변수

	int& r = n; // C++ 의 레퍼런스
				// 기존 변수에 별칭을 부여하는 문법

	r = 20;

	std::cout << n  << std::endl; // 20
	std::cout << &n << std::endl; // A
	std::cout << &r << std::endl; // B   A, B 는 결국 동일한 주소 입니다.

	// 주의 사항
	// 1. & 연산자의 의미는 2가지 입니다.
	int* p1 = &n; // 1. 주소 연산자 의미
	int& r1 = n;  // 2. 레퍼런스를 만들때 
	
	// 2. 위 코드에서 우변 잘 기억해 두세요.
	//    포인터 초기화는 "주소"로   레퍼런스 초기화는 "주소가 아닙니다"

	// 3. 
	int* p2; // ok. 쓰레기값
	int& r2; // error. 초기값이 없으면 에러 입니다.
}

