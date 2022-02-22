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
	// throw 로 던질때, 지역변수 였습니다. 그런데, 참조로 받아도 되나요 ???
	// 네, 됩니다. 예외로 던져진 지역변수는  catch 가 실행될때 까지 사라지지 않는다는
	// 문법이 있습니다.
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
// 그런데, 예외 사용시 "어셈블리 코드가 좀 복잡하고, 메모리 사용량이 증가 합니다."
// 그래서 
// C++ : 간단한 에러는 아직도 함수 반환값 사용, 심각한 오류는 예외 사용
// 다른 언어 : 대부분의 오류를 예외 사용

// 임베디드등의 분야 : 예외를 사용하지 않는 경우가 대부분 입니다.