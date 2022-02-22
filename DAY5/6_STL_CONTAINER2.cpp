// 6_STL_CONTAINER1 - 214p ~ 
#include <iostream>

#include <vector>
#include <list>
#include <deque> // "덱" 또는 "디큐" 라고 합니다.

int main()
{
	// 연속된 메모리
	// 장점 : 요소 순회가 빠르고, 캐쉬 적중률이 높다.
	// 단점 : 중간에 삽입/삭제가 많아지만 오버헤드가 있다.
	std::vector<int> v = { 1,2,3,4,5 }; 

	// 모든 요소가 떨어진 메모리
	// 중간 삽입 삭제시 성능이 좋다.
	// 요소 순회 등은 vector 보다 느리다.
	std::list<int>   s = { 1,2,3,4,5 };
	
	// vector 와 list 구조의 혼합!
	std::deque<int>  d = { 1,2,3,4,5 };

	// 컨테이너 : 여러개의 요소를 보관하는 타입(vector, list, deque)
	// 
	// 핵심 1. 사용법(멤버함수)가 거의 동일하다.

	// 끝에 추가
	v.push_back(10);
	s.push_back(10);
	d.push_back(10);

	// 첫번재 요소 얻기
	int n1 = v.front();
	int n2 = s.front();
	int n3 = d.front();

	// 핵심 2. vector 는 앞에 넣을수 없다.
	s.push_front(10); // ok
	d.push_front(10); // ok
	v.push_front(10); // error
					 // 앞에 넣는것은 vector의 경우 너무 오버헤드가 크다.
					 // 다른 컨테이너를 사용하라고 의도적으로 제공안함

	// 핵심 3. [] 연산은 vector와 deque 만가능
	v[0] = 10;
	d[0] = 10;
	s[0] = 10; // error. 

	// 선택기준
	// 전방삽입이 필요 없고, [] 연산이 필요 하다. : vector
	// 전방삽입이 필요 있고, [] 연산이 필요 하다. : deque
	// 중간에 삽입/삭제가 많고, [] 는 필요 없다.  : list

	// 멤버 함수가 동일하므로 컨테이너를 변경하면서 성능 확인 가능.
//	std::vector<int> c = { 1,2,3 };
	std::list<int>   c = { 1,2,3 };

	// c사용
	c.push_back(5);

	//....

}