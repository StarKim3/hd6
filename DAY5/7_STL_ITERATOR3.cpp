#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::vector<int> c = { 1,2,3,4,5 };

	// �ٽ� 1. past the end
	auto p1 = c.begin();  // std::begin(c)
	auto p2 = c.end();    // std::end(c)

	*p1 = 10; // ok
//	*p2 = 10; // runtime-error. ���� �̷��� �ϸ� �ȵ˴ϴ�.

	// c.end()�� ���� �ݺ��ڴ� ==, != ������ �뵵�θ� ����ؾ� �մϴ�.
	while (p1 != p2)
	{
		std::cout << *p1 << ", ";
		++p1;
	}
}