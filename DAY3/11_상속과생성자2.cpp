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
	Derived()      { }		// Derived()      : Base() { }
	Derived(int a) { }		// Derived(int a) : Base() { }
	~Derived()     { }		// ~Derived()     { ....; ~Base(); }
};
int main()
{
	Derived d1;    // call Derived::Derived()
//	Derived d2(5); // call Derived::Derived(int)
}