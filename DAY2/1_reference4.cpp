// 1_reference4
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	for (int e : x)  
//	for (int& e : x)
	for (auto& e : x)
	{
		e = 0;  // �� ó�� ������ ������ ���ڵ��
				// ���� �迭�� �����Ҽ� �ְ� �˴ϴ�.
	}

	for (int e : x)
	{
		std::cout << e << std::endl;
	}
}