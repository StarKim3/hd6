// 3_nullptr3
#include <iostream>

void fn(int   n) { std::cout << "int" << std::endl; }  
void fn(void* p) { std::cout << "void*" << std::endl; }  

void goo(char* p) { std::cout << "char*" << std::endl; }

int main()
{
	fn(0); // int
	fn((void*)0); // (void*)0

	// C���� (void*)0 �� �߿��߽��ϴ�. �׷��� ��ũ�η� ��������ϴ�.
#define NULL (void*)0

	fn(NULL); // void*

	goo(NULL); // �����غ�����.
}