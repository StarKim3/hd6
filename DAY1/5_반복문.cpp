// 5_�ݺ��� - 38page
#include <iostream>
#include <string>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// �������� for ��
	for (int i = 0; i < 10; i++)
	{
		std::cout << x[i] << std::endl;
	}

	// C++11���� ���� ���Ե� for ��
	for (int e : x)
	{
		std::cout << e << std::endl;
	}
}