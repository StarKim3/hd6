#include <iostream>

int main()
{
	int n = 3;

//	double* p1 = &n; // Ÿ���� �ٸ��Ƿ� error 
	double* p1 = (double*)&n; // ok.. ����� ĳ������ ��κ� ����

//	*p1 = 3.4;

	const int c = 10;
	int* p2 = (int*)&c; // ok

	// �� �ڵ尡 ������ �����Ƿ�
	*p2 = 20; // �� �ڵ嵵 �˴ϴ�.

	std::cout << c << std::endl; // �� ���ñ�� ?
								// �����Ϸ����� �ٸ��� �ִµ�, ��κ� 10 �Դϴ�.

	std::cout << *p2 << std::endl; // 20
}


