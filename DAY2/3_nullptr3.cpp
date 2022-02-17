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
/*
#ifdef __cplusplus			// 현재 컴파일러가 C++이라면
	#define NULL 0
#else 
	#define NULL (void*)0
#endif
*/
	fn(NULL); // void*

	goo(NULL); // void*  ==> char* 로의 암시적 형변환이 되어야 합니다
				// C 언어 가능
				// C++ 언어 안됨.
}