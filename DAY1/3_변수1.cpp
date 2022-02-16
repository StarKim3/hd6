// 3_변수1 - C 보다 발전된 C++ 변수(타입)관련 문법들 - 18 page ~
#include <iostream>

struct Point
{
	int x = 0;
	int y = 0; // 구조체 만들때 멤버 초기화 가능(C++11 부터)
};
int main()
{
	int n1 = 0b1000;  // 2진수 가능. C++11 부터 지원
	int n2 = 1'000'000; // 자릿수 표기법 가능. C++11부터
						// 정확한 의미 : 정수 리터럴 사이의 ' 는 무시해달라는 의미
						//			결국 주석같은 용도
	
	// 구조체 형 변수 만들때 struct 안붙여도 됩니다.
	struct Point p1; // C 스타일
	Point p2;		 // C++ 스타일

	// C에 없는 새로운 타입
	bool b = true;  // 또는 false,  1바이트 크기

	long long n = 100; // 64bit 정수 ( 8byte)
}