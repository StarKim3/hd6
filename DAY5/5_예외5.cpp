#include <iostream>
#include <string>

// 예외 전용 타입을 사용해는 것이 일반적인 관례 입니다
class InvalidURLException
{
	std::string url;
	int errorcode;
public:
	InvalidURLException(const std::string& s, int n)
		: url(s), errorcode(n) {}

	int getCode() const { return errorcode; }
};
// 아래 처럼 empty class 도 나쁘지 않습니다.
class DisconnectWIFIException {};

int connectServer()
{
	if (1)
	{
		InvalidURLException e("www.aaa.com", 404);
		throw e;
	}
	if (2) // 다른 이유로 실패
	{
		DisconnectWIFIException e;
		throw e;
	}
	return 0;
}

int main()
{
	try
	{
		connectServer();
	}
	catch (InvalidURLException& e)
	{
	}
	catch (DisconnectWIFIException& e)
	{
	}
	catch (...) // 위에서 처리되지 않은 모든 예외 처리.
	{
	}
	std::cout << "프로그램 계속 실행" << std::endl;
}