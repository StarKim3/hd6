// 6_STL_CONTAINER1 - 214p ~ 
#include <iostream>
#include <vector>
#include <list>

int main()
{
	// C 배열 vs STL vector
	int x[5] = { 1,2,3,4,5 }; //  stack 에 5개 요소가 연속적으로 ..

	std::vector<int> v = { 1,2,3,4,5 }; // 힙에 5개 요소가 연속적으로...

	// 공통점 : 연속된 메모리, [] 로 요소 접근
	x[0] = 10;
	v[0] = 10;

	// 차이점
	// 배열 : 크기 변경이 불가능하다.
	// vector : 크기 변경이 가능하고, 다양한 멤버 함수 제공
	v.resize(10);

	std::cout << v.size() << std::endl;
}