// 3_nullptr3
#include <iostream>

void fn(int   n) { std::cout << "int" << std::endl; }  
void fn(void* p) { std::cout << "void*" << std::endl; }  

void goo(char* p) { std::cout << "char*" << std::endl; }

int main()
{
	fn(0); // int
	fn((void*)0); // (void*)0

	// C언어에서 (void*)0 이 중요했습니다. 그래서 매크로로 만들었습니다.
#define NULL (void*)0

	fn(NULL); // void*

	goo(NULL); // 생각해보세요.
}