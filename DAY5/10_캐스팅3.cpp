#include <iostream>
#include <cstdlib>

// C ĳ������ �ʹ� ���� �մϴ�.
// ��κ� �����ϴµ�, ������ ĳ������ �������� �ǵ� ����, �Ǽ����� �������� �ʽ��ϴ�.

// �׷��� C++������ �뵵���� ĳ���ÿ����ڸ� �����մϴ�.

int main()
{
	int* p1 = (int*)malloc(20);				 // C ��Ÿ��
	int* p2 = static_cast<int*>( malloc(20) );// C++��Ÿ��

	int n = 3;
	double* p3 = (double*)&n;
	double* p4 = static_cast<double*>(&n);
}