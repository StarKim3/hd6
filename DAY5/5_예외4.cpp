#include <iostream>



int connectServer()
{
	if (1)       
		throw 1;
	return 0;
}
int main()
{
	try
	{
		connectServer();

		std::cout << "접속 성공시 할일들..." << std::endl;
	}
	catch (int e)
	{
		std::cout << "오류 발생" << std::endl;

		// 1. 여기서 오류 때문에 더이상 실행할수 없다면 사용자에게 알려주고 종료 합니다.(exit())
		// 2. 종료하지 않으면 프로그램은 계속 실행됩니다.
	}

	std::cout << "프로그램 계속 실행" << std::endl;
}