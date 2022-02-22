// 8_STL_ALGORITHM1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


int main()
{
	std::vector<int> v = { 1,2,3,4,5, 1,2,3,4,5 };

	// �־��� �������� 3�� 0���� �����ض�
//	std::replace(v.begin(), v.end(), 3, 0);   // A

	// ¦���� 0���� 
	std::replace_if(v.begin(), v.end(), [](int n) -> bool { return n % 2 == 0; }, 0);   // A

	for (auto e : v)
		std::cout << e << ", ";
}


// �����ؼ� ��� Ȯ���� ������..
// Ȯ���Ͻ� ����
// "A" �� �ּ����� ����, 
// "�־��� �������� ��� ¦���� 0���� ����� ������"
// "����ǥ�������� �غ�����"