// 4_�Լ�6-1
#include <iostream>

template<typename T>
T add(T a, T b)
{
	return a + b;
}
int main()
{
	// �Ʒ� �ڵ尡 ��Ȯ�� ǥ��� �Դϴ�.
	std::cout << add<int>(1,   2)   << std::endl;
	std::cout << add<double>(1.1, 2.2) << std::endl;

	// Ÿ�� ���� �����մϴ�
	std::cout << add(1, 2) << std::endl;

	// �׷���.. �Ʒ� ���� ���� ?
	std::cout << add(1, 2.2) << std::endl; // error
										// �Լ� ���ڸ� ���� �߷��Ҽ� �����ϴ�.

	std::cout << add<double>(1, 2.2) << std::endl; // ok.. 
}