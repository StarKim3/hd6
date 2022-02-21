// 1_virtual1 - 144page
#include <iostream>

class Animal
{
	int age;
public:
	void cry1() { std::cout << "Animal cry1" << std::endl; } // 1
	
	// �����Լ� : �����Ϸ����� ��� �Լ��� ȣ������ �����ϴ� ����
	//           ������ �ð��� �ƴ϶� ����ð�(dynamic binding)�� �ش޶�� ��.
	virtual void cry2() { std::cout << "Animal cry2" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// function override : �Ļ� ũ���� ���� ��� Ŭ���� ����Լ��� �ٽ� ����°�
	// overloading �� �򰥸��� ������.
	void cry1() { std::cout << "Dog cry1" << std::endl; }  // 2
	virtual void cry2() { std::cout << "Dog cry2" << std::endl; }  // 2
};

int main()
{
	Animal a; a.cry1(); // 1
	Dog    d; d.cry1(); // 2

	Animal* p = &d;

//	if (������Է� == 1) p = &a; // ����� �Է�(����ð��� ����)
								// p�� ����Ű�� ��ü�� ����!

	// �����Ϸ��� p�� � ��ü�� ����Ű���� �˼� �����ϴ�.
	p->cry1();	// 1 ? 2 �� ��� �Լ��� ȣ���ұ�� ? - Animal 
				// ����Լ��� ȣ���ϴ°��� �������� ������� ? - dog
	p->cry2();
}

// 161 page ����
// p->cry1() �� ��� �Լ��� �����Ұ��ΰ� ? 
// => �Լ� ���ε�(function binding) ����

// 1. static binding : �����Ϸ��� ������ �ð��� ��� �Լ��� ȣ������ ����
//                     �����Ϸ��� p�� � ��ü�� ����Ű���� �˼� ����.
//					   ����, p�� Ÿ��(Animal*) ������ �Լ��� ȣ�� ����
//						Animal cry1 ȣ���.
// ��������, �������� �ʴ�.
// C++ �⺻ ��å, C#


// 2. dynamic binding : ������ �Ҷ� p �� ����Ű�� ��(�޸�)�� �����ϴ� ���� �ڵ����
//					����� �ش� �޸𸮿� � ��ü�� �־������� ������ ȣ��
//					dog ��ü�� �־��ٸ� dog cry1 ȣ��
// ��������, �����̴�. 
// java, swift, python, objective-c
// C++ �� C#�� virtual function(�����Լ�)