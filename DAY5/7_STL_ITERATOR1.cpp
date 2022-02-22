// 7_STL_ITERATOR1
#include <iostream>
#include <list>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	// �迭�� 1��° ����� �ּҸ� �˸� ��� ��Ҹ� �����Ҽ� �ֽ��ϴ�.
	int* p1 = x;
	++p1;

	std::list<int> s = { 1,2,3,4,5 };

	// STL �� �ݺ���(iterator)�� ������ ��� ��Ҹ� �����Ҽ� �ֽ��ϴ�
	auto p2 = s.begin();
	++p2;
	std::cout << *p2 << std::endl;
}