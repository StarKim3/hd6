// 4_�Լ�6-1
#include <iostream>

// ? ä�� ������
template<typename T1, typename T2>
? add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	// ��Ȯ�� ǥ���
	std::cout << add<int, double>(1, 2.2) << std::endl; 

	// Ÿ������ ��������
	std::cout << add(1, 2.2) << std::endl;

}