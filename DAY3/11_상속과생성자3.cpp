#include <iostream>

class Base
{
	int value;
public:
//	Base() { }
	Base(int a) { }
	~Base() { }
};
class Derived : public Base
{
public:
	// ����ڰ� ���� �ڵ�	// �����Ϸ��� ������ �ڵ�
//	Derived() { }		// Derived()      : Base() { }
//	Derived(int a) { }	// Derived(int a) : Base() { }
	~Derived() { }		// ~Derived()     { ....; ~Base(); }

	// ��� Ŭ������ ����Ʈ �����ڰ� ������ �� �ڵ� 15, 16 �� ���� ���� �Դϴ�.
	// �����Ϸ��� ������ �ڵ带 �� ������ ������..

	// �ذ�å�� ����ڰ� "��� Ŭ������ �ٸ� �����ڸ� ȣ���ϴ� �ڵ带 �����ؾ� �մϴ�."
	// �Ʒ� �ڵ� ����
	Derived()      : Base(0) {}
	Derived(int a) : Base(a) {}
};
int main()
{

}