#include <iostream>
#include <vector>

// C++ ǥ�� ���̺귯���� STL ���� ���ܴ� ���� ������� �ʽ��ϴ�.
// �׷���, ���ܰ� ������ �ʰ�, �Ϻ� �Լ��� ���н� ���� �߻��մϴ�.

int main()
{
	std::vector<int> v = { 1,2,3 };

	try
	{
		v[10] = 0; // �߸��� �ε��� ���
	}
	catch (...)
	{
		std::cout << "���� �߻�" << std::endl;
	}

}