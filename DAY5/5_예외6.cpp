#include <iostream>
#include <vector>

// C++ 표준 라이브러리인 STL 에는 예외는 거의 사용하지 않습니다.
// 그런데, 예외가 없지는 않고, 일부 함수가 실패시 예외 발생합니다.

int main()
{
	std::vector<int> v = { 1,2,3 };

	try
	{
		v[10] = 0; // 잘못된 인덱스 사용
	}
	catch (...)
	{
		std::cout << "예외 발생" << std::endl;
	}

}