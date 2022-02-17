#include <iostream>
#include <vector>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	for (int e : x)
	{
	}
	// 위 코드를 컴파일 하면 아래 처럼 변경됩니다.
	// 결국 x 자리에 오는 것(배열, vector) 가 std::begin()이라는 함수의 인자로
	// 전달될수 있으면 됩니다.
	/*
	auto p1 = std::begin(x); // 처음을 가리키는 반복자(포인터)라는 것을 꺼내는 작업
	auto p2 = std::end(x);

	for (; p1 != p2; ++p1)
	{
		int e = *p1;
		//--------------------
	}
	*/
}
