// 7_STL_ITERATOR1
#include <iostream>
#include <list>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	// 배열은 1번째 요소의 주소를 알면 모든 요소를 열거할수 있습니다.
	int* p1 = x;
	++p1;

	std::list<int> s = { 1,2,3,4,5 };

	// STL 은 반복자(iterator)를 꺼내면 모든 요소를 열거할수 있습니다
	auto p2 = s.begin();
	++p2;
	std::cout << *p2 << std::endl;
}