// 1_reference4
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	for (int e : x)  
//	for (int& e : x)
	for (auto& e : x)
	{
		e = 0;  // 위 처럼 참조로 했을때 이코드는
				// 원본 배열을 수정할수 있게 됩니다.
	}

	for (int e : x)
	{
		std::cout << e << std::endl;
	}
}