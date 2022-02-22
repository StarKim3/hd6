#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::vector<int> c = { 1,2,3,4,5 };

	// �����̳��� ��� ��Ҹ� ���� �ϴ� ��� 

	// 1. range-for, ��� �����̳� ����. ���� ����, ���� ���. ����!!
	for (auto e : c)  
	{
		// e = 0; // �̷� �ڵ带 �Ϸ��� auto& e �� �ϼ���.
		std::cout << e << ", ";
	}
	std::cout << std::endl;

	// 2. �ݺ��ڷ� ����. 
	// C++11 ���� ������ �θ� ����ϴ� ���. ��� �����̳ʿ� ����
	auto p1 = c.begin();

	while (p1 != c.end())
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

	// 3. [] ������ �� ����, list �� �ȵ�. vector�� deque �� ����
	for (int i = 0; i < c.size(); i++)
	{
		std::cout << c[i] << ", ";
	}
	std::cout << std::endl;
}