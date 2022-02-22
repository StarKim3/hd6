// 7_STL_ITERATOR1
#include <iostream>
#include <list>
#include <vector>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	// �迭�� 1��° ����� �ּҸ� �˸� ��� ��Ҹ� �����Ҽ� �ֽ��ϴ�.
	int* p1 = x;
	++p1;

//	std::list<int> s = { 1,2,3,4,5 };
	std::vector<int> s = { 1,2,3,4,5 };

	// STL �� �ݺ���(iterator)�� ������ ��� ��Ҹ� �����Ҽ� �ֽ��ϴ�
	auto p2 = s.begin();
	
	++p2; // p2.operator++() ȣ��˴ϴ�
	
	std::cout << *p2 << std::endl;
			// p2.operator*()
			// ��, p2�� ��¥ �����ʹ� �ƴ�����
			// ������ ó�� ��밡���ϰ�
			// ������ ������ �Ǿ� �ֽ��ϴ�.
}