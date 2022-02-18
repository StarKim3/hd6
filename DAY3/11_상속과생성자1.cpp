// 11_상속과생성자1 - 135page
#include <iostream>

// Derived 의 객체를 생성하면
// 1. Base의 생성자가 먼저 호출되고(항상 디폴트 생성자 호출)
// 2. Derived 생성자 호출.

// 그런데, 정확한 원리를 알아야 합니다.

class Base
{
	int value;
public:
	Base()      { std::cout << "Base()"    << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()"   << std::endl; }
};
class Derived : public Base
{
public:
	Derived()      { std::cout << "Derived()"    << std::endl; }
	Derived(int a) { std::cout << "Derived(int)" << std::endl; }
	~Derived()     { std::cout << "~Derived()"   << std::endl; }
};
int main()
{
//	Derived d1;
	Derived d2(5);
}