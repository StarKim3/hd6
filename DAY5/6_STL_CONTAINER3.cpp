#include <iostream>

// 선형 컨테이너 3개
// 요소가 한줄로 놓여 있다.
// 입력 순서를 유지 하지만, 검색등은 느리다.
#include <vector>
#include <list>
#include <deque> 

// 연관 컨테이너
#include <set>	// tree 라는 자료구조를 사용해서 보관
				// 검색이 빠르고, 왼쪽 마지막 자식 부터 오늘쪽으로 이동하면
				// 크기 순서로 되어 있다(정렬되어 있다)

#include <unordered_set> // hash table 에 데이타 보관
						// 장점 : 검색이 가장 빠릅니다. set(tree) 보다 빠릅니다.
						// 단점 : 정렬(크기순서)를 유지 하지는 않습니다.

// 검색 속도가 가장 중요하다. : unordered_set(hash) 사용
// 검색도 중요 한데, 크기순서로 되어 있어야 한다. : set(tree)

// 검색 자체가 많이 사용되지는 않는다면 : 선형컨테이너(vector, list, deque)


// 데이타는 메모리에 보관할때 어떤 형태로 보관할것인가를 배우는 학문
// => 자료구조(data structure)

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	std::set<int> s = { 50, 30, 80, 40, 70, 20, 90, 10 };

	// 그런데.. 왜 이름이 set 인가요 ?
	// => 집합 관련 연산을 제공 합니다.
	// => s1 | s2 => 합집합,   s1 & s2 => 교집합등.

	std::unordered_set<int> us = { 50, 30, 80, 40, 70, 20, 90, 10 };
}

