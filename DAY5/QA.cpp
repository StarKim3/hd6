#include <iostream>
#include <vector>
#include <list>

// vector �� list�� ���� �޸� ������ �ٸ��ϴ�.
// ����, vector �ݺ��ڿ� list�ݺ��ڵ� ���� ������ �մϴ�.
// �׷���, reverse iterator �� �Ѱ��� ������ �˴ϴ�.
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

	reverse_iterator p(v.end()); // ������Ʈ-�Ӽ��޴����� C++17�� ���߼���..
	++p;
	++p;
	std::cout << *p << std::endl;
}
