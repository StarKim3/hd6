// 5_반복문 - 38page
#include <iostream>
#include <string>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 전통적인 for 문
	for (int i = 0; i < 10; i++)
	{
		std::cout << x[i] << std::endl;
	}
	// C++11에서 새로 도입된 for 문 - "range for" 라고 합니다.
	// 파이썬 : for e in x 
	// C#     : foreach( int e in x)
	// C++    : for    ( int e : x)
	for ( auto e : x)   // 배열뿐 아니라 STL(C++표준라이브러리) 의 vector, list 등도 가능
	{
		std::cout << e << std::endl;
	}
	// 동적할당된 배열은 안됩니다 - 크기 정보가 없습니다.
	int* p = (int*)malloc(sizeof(int) * 10);
	
	for (auto e : p)  // error. 
	{
	}
	free(p);
}