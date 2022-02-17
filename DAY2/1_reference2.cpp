#include <iostream>

// 43 page 입니다.
void inc1(int  n) { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a); // call by value,
			 // a 자체를 변경할수는 없다. 실패
	inc2(&b);// call by pointer
			 // b 를 변경할수 있다. 성공
	inc3(c); // call by reference
			 // c 를 변경할수 있다. 성공

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}
// 포인터와 레퍼런스는 함수 인자 사용시
// 원본 변수를 수정할수 있다는 점에서 유사합니다.
// 그런데, 레퍼런스가 편하고, 안전 합니다.
/*
void f1(int* p) 
{
	// 포인터 사용시 안전하게 하려면 아래 처럼해야 합니다.
	if (p != 0)
	{
	}
}
void f2(int& r) 
{
	// r는 그냥 사용해도 안전합니다.
}

f1(0); // 이 코드가 가능합니다.
f2(0); // error. 반드시 인자로 변수를 전달해야 합니다.
int n;
f2(n);
*/