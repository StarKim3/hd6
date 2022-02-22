#include <iostream>
#include <vector>
#include <list>

// vector 와 list의 내부 메모리 구조는 다릅니다.
// 따라서, vector 반복자와 list반복자도 따로 만들어야 합니다.
// 그런데, reverse iterator 는 한개만 있으면 됩니다.
template<typename T> class reverse_iterator
{
	T& current;
public:
	reverse_iterator(T p) : current(p) { --current; }

	reverse_iterator& operator++()
	{
		--current;
		return *this;
	}
	auto& operator*() { return *current; }
};

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	reverse_iterator p(v.end()); // 프로젝트-속성메뉴에서 C++17로 맞추세요..
	++p;
	++p;
	std::cout << *p << std::endl;
}
