#include <iostream>
#include <list>
#include <vector>

// iterator(반복자) : 컨테이너의 내부 구조에 상관없이 동일한 방법으로 열거하기위한객체
//					  포인터처럼 ++로 이동, * 로 요소 접근


int main()
{
	//std::list<int> s = { 1,2,3,4,5 };
	//std::vector<int> s = { 1,2,3,4,5 };

	int s[5] = { 1,2,3,4,5 }; //

	// 1. 정확한 타입. 그런데 아래 처럼 하면
	// A. 복잡해 보이고
	// B. 컨테이너 변경시 코드 수정된다.
	// std::list<int>::iterator p1 = s.begin();

	// 2. C++11 이 지원되는 환경이라면 auto로 하세요
//	auto p1 = s.begin(); // p1은 포인터 아닙니다... 객체 입니다.
						 // 단지 포인터와 사용법이 동일할뿐입니다.
						// error. s는 raw array 이므로 멤버함수가 있을수 없습니다.

	// 3. 반복자를 꺼내는 가장 좋은 표기법은 아래 코드 입니다.
	auto p1 = std::begin(s); // s가 STL 이어도 되고, 
							 // raw array 도 됩니다
							 // raw array 라면 p1 은 int* 입니다.
							// 그래서,
							// int* p = std::begin(s) 됩니다. 단, s가 raw array일때만
}


/*
namespace std
{
	template<typename T> 
	class list
	{
	public:
		class iterator
		{
		};
	};
}
*/