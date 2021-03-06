#include <iostream>
#include <vector>

// C++ 표준 라이브러리인 STL 에는 예외는 거의 사용하지 않습니다.
// 그런데, 예외가 없지는 않고, 일부 함수가 실패시 예외 발생합니다.

int main()
{
	std::vector<int> v = { 1,2,3 };

	try
	{
//		v[10] = 0;	// 잘못된 인덱스 사용
					// 인덱스가 잘못되었는지 확인하지 않고 그냥 사용하고있습니다.
					// 잘못된 인덱스 전달해도 예외 아닙니다
		v.at(10) = 0; // 잘못된 인덱스 사용시 예외 던집니다.
	}
//	catch (...)
	catch (std::out_of_range& e)
	{
		std::cout << "예외 발생" << std::endl;
	}

	// [], at()은 하는일이 동일합니다.
	// 다음 중 좋은 코드는 ?
	for (int i = 0; i < v.size(); i++)
	{
		// 이 안에서 i 는 잘못될 확율이 없습니다.
		// 따라서 내부적으로 잘못된 index 인지 확인할 필요 없습니다.
		v[i] = 0;     // 1. 좋은 코드.
		v.at(i) = 0;  // 2. 잘못된 index 확인후 예외 전달 하고 있습니다.
						//  => 이 루프 안에서는 필요없는 작업입니다.
	}

}

