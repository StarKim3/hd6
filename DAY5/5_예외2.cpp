// 5_예외1 - 231
#include <iostream>

// 방법 2. 실패 했음을 호출자에게 알려준다.
// C 언어 : 함수 반환값으로 알려주어야 한다.
//			=> 그래서, void 를 반환하는 함수는 "실패 하지 않음" 의 의미도 가지고 있다.

// 이 방식의 한계점.
// 1. 반환값과 실패의 전달이 명확히 분리되지 않는다.
// 2. 호출자는 함수 실패를 무시할수 있다.

int connectServer()
{
	if (실패)
		return -1;

	return 0;
}

int main()
{
	connectServer();

	std::cout << "프로그램 계속 실행" << std::endl;
}