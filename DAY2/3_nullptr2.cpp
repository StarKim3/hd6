#include <iostream>

void fn(int  n) { std::cout << "int"  << std::endl; } // 1
void fn(int* p) { std::cout << "int*" << std::endl; } // 2

int main()
{
	fn(0);       // int..  0�� ��ü�� ����(int Ÿ��) �Դϴ�. 
	fn((int*)0); // int*
	fn(nullptr); // int*

	auto ret = foo();

//	if ( ret == 0) // �� �ڵ常 ���� ret�� Ÿ���� ���� ����, ������ ���� ���������Ѱ��� ?
	if ( ret == nullptr) // �� �ڵ� ���� �������� �����ϴ�.
	{
	}
}