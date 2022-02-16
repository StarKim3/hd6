// 4_�Լ�6-1
#include <iostream>

// ? ä�� ������
template<typename T1, typename T2>
//? add(T1 a, T2 b)				 // ? �� ä��Ⱑ ��������ϴ�
//decltype(a + b)  add(T1 a, T2 b) // �׷��� decltype()�� ��������ϴ�. �׷��� �� �����ϱ�� ?
								 // a, b ������ �������� ����ϴ� �ڵ� �Դϴ�.

//auto add(T1 a, T2 b) -> decltype(a + b) // ok..�̷� ������ �ذ��ϱ� ���� ������ȯŸ�� ��������
										  // C++11 ���� ����.
auto add(T1 a, T2 b) // C++14 ���� �̷��Ե� �����մϴ�
{					 // return ������ ���� Ÿ���� �߷�
	return a + b;
}




int main()
{
	// ��Ȯ�� ǥ���
	std::cout << add<int, double>(1, 2.2) << std::endl; 

	// Ÿ������ ��������
	std::cout << add(1, 2.2) << std::endl;

//	a = 20;    // error. �������� ���
//	int a = 0; // ���� ����
//	a = 10;    // ok.. ����� ���
}