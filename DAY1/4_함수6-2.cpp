// 4_함수6-1
#include <iostream>

// ? 채워 보세요
template<typename T1, typename T2>
//? add(T1 a, T2 b)				 // ? 를 채우기가 어려웠습니다
//decltype(a + b)  add(T1 a, T2 b) // 그래서 decltype()을 만들었습니다. 그런데 왜 에러일까요 ?
								 // a, b 변수를 선언전에 사용하는 코드 입니다.

//auto add(T1 a, T2 b) -> decltype(a + b) // ok..이런 문제를 해결하기 위해 후위반환타입 문법생김
										  // C++11 부터 가능.
auto add(T1 a, T2 b) // C++14 부터 이렇게도 가능합니다
{					 // return 문장을 보고 타입을 추론
	return a + b;
}




int main()
{
	// 정확한 표기법
	std::cout << add<int, double>(1, 2.2) << std::endl; 

	// 타입인자 생략가능
	std::cout << add(1, 2.2) << std::endl;

//	a = 20;    // error. 선언전에 사용
//	int a = 0; // 변수 선언
//	a = 10;    // ok.. 선언뒤 사용
}