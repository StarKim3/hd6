// 8_STL_ALGORITHM1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // find 같은 일반화 함수(템플릿)

// 알고리즘 : 문제를 해결하는 방법 이라는 일반적인 용어도 있지만
//           STL 에서 "find" 같은 멤버가 아닌 일반 함수를 "알고리즘"이라고 합니다.


int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// 컨테이너에서 3을 찾고 싶다.
//	s.find(3); // 이런 멤버 함수를 만들었다면!!  사용하기는 쉽다.!
//	v.find(3); // 모든 컨테이너에 find가 있어야 한다.

	// STL 의 find 는 멤버가 아닌 일반 함수(템플릿)으로 되어 있습니다
	// 하나의 find 가 모든 컨테이너에 대해서 "선형검색"을 수행하도록 되어 있습니다.
	
	// std::find(first, last, 값) 에서 [first, last) 검색 입니다. "half-open구간"
	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);

	// 결과(ret2) 는 "반복자(iterator)" 입니다.
	// 검색 실패시 : v.end() 가 반환 됩니다.
	// 검색 성공시 : 3이 있는 곳을 가리키는 반복자 반환
	if (ret2 == v.end())
		std::cout << "검색 실패" << std::endl;
	else
		std::cout << "검색 성공 : " << *ret << std::endl;
}