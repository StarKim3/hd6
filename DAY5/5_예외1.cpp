// 5_예외1 - 231
#include <iostream>

// 모든 함수는 실패 할수 있습니다.
void connectServer()
{
	// 방법 1. 실패하면 그냥 프로그램을 종료 하자.
	exit(-1); // 일반적으로 비정상 종료의 경우 -1등을 넣게 됩니다.

}

int main()
{
	connectServer();

	std::cout << "프로그램 계속 실행" << std::endl;
}