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
	// ����ڰ� ���� �ڵ�		// �����Ϸ��� ������ �ڵ�
	Derived()      { }		//
	Derived(int a) { }		//
	~Derived()     { }		// 
};
int main()
{
	//	Derived d1;
	Derived d2(5);
}