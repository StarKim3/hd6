#include <iostream>

// 43 page �Դϴ�.
void inc1(int  n) { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a); // call by value,
			 // a ��ü�� �����Ҽ��� ����. ����
	inc2(&b);// call by pointer
			 // b �� �����Ҽ� �ִ�. ����
	inc3(c); // call by reference
			 // c �� �����Ҽ� �ִ�. ����

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}
// �����Ϳ� ���۷����� �Լ� ���� ����
// ���� ������ �����Ҽ� �ִٴ� ������ �����մϴ�.
// �׷���, ���۷����� ���ϰ�, ���� �մϴ�.
/*
void f1(int* p) 
{
	// ������ ���� �����ϰ� �Ϸ��� �Ʒ� ó���ؾ� �մϴ�.
	if (p != 0)
	{
	}
}
void f2(int& r) 
{
	// r�� �׳� ����ص� �����մϴ�.
}

f1(0); // �� �ڵ尡 �����մϴ�.
f2(0); // error. �ݵ�� ���ڷ� ������ �����ؾ� �մϴ�.
int n;
f2(n);
*/