#include <iostream>

// 객체지향 언어의 오류 처리
// 1. 함수가 실패 하면 "예외를 던집니다(throw)"

// 장점 1. 반환 값과 오류의 전달이 완벽히 분리 됩니다.
//     2. 호출자는 던져진 예외를 반드시 처리해야 합니다.
//        => 처리하지 않으면 프로그램은 비정상 종료 합니다.

int connectServer()
{
	if (1)       // 실패 했다고 가정합니다
		throw 1;

	return 0;
}

int main()
{
	connectServer();

	std::cout << "프로그램 계속 실행" << std::endl;
}