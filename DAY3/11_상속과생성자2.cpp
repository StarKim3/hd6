#include <iostream>

class Base
{
	int value;
public:
	Base()      { }
	Base(int a) { }
	~Base()     { }
};

class Derived : public Base
{
public:
	// 사용자가 만든 코드		// 컴파일러가 변경한 코드
	Derived()      { }		//
	Derived(int a) { }		//
	~Derived()     { }		// 
};
int main()
{
	//	Derived d1;
	Derived d2(5);
}