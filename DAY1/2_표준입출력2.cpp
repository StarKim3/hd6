#include <iostream>
#include <iomanip>  // C++ ����� ���� "������(iomanipulator)" �� ���ؼ�

// ���� 16page �߰��� � �����ڵ��� �ִ��� �����Ǿ� �ֽ��ϴ�.
// �׷���, "cppreference.com" ���� �����ϴ°� �����ϴ�.
int main()
{
	int n1, n2;
//	std::cin >> n1 >> n2; // �����մϴ�. �׷���, ���� ��������� �ʽ��ϴ�.

	n1 = 10;
	std::cout << n1 << std::endl;
	std::cout << std::hex << n1 << std::endl; // 16������ ���	
	std::cout << std::dec << n1 << std::endl; // �ٽ� 10������

	std::cout << std::setw(10) << n1 << std::endl; // 10ĭ�� ���缭 ���

	std::cout << std::setw(10) << std::setfill('#') <<  n1 << std::endl;
}
