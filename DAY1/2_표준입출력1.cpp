// 2_표준입출력1 - 12 page
#include <cstdio>  // C 언어 표준 입출력을 위한 헤더.
#include <iostream>// C++ 언어 표준 입출력을 위한 헤더.

int main()
{
	int n = 3;

	// C 언어 표준 출력
	printf("%d\n", n);

	// C++언어 표준 출력
	// 특징 1. "%d" 등이 필요 없다.
	//      2. 연속적으로 << 를 사용해서 출력 가능.
	// printf 는 함수 인데, std::cout 은 정체가 뭔가요 ? (객체, 5일차에 cout 직접 만들게됩니다)
	std::cout << "n = " << n << std::endl; // std::endl 은 개행("\n") 을 의미.

	// 표준 입력
	scanf_s("%d", &n); // C 언어
	std::cin >> n;     // C++ 언어, 핵심 "&n" 가 아닌 "n" 입니다.
					   // ">>" 방향에 주의 하세요
}
