// 11_��Ӱ�������1 - 135page
#include <iostream>

// Derived �� ��ü�� �����ϸ�
// 1. Base�� �����ڰ� ���� ȣ��ǰ�(�׻� ����Ʈ ������ ȣ��)
// 2. Derived ������ ȣ��.

// �׷���, ��Ȯ�� ������ �˾ƾ� �մϴ�.

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