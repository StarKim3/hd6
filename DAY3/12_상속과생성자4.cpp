// 12_��Ӱ�������4
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
//	Person() {}
	Person(const std::string& s, int a) : name(s), age(a) {}
};
// 1. Ÿ���� �����Ҷ� "�ǵ������� ����Ʈ �����ڸ� �������� �ʴ� ��쵵 �����ϴ�."
//    => "��� ��� ����Ÿ�� ����ڰ� ������ ������ �ʱ�ȭ �Ǵ� ���� �����ϴ�" ��� ö��

// 2. ����Ʈ �����ڰ� ���� Person ���� ���� ��ӹ޾Ƽ� Ÿ���� ���鶧..
class Student : public Person
{
	int id;
public:
	// �����Ϸ��� ������ ����Ʈ ������ ���
//	Student() : Person() {}  <== �׷���, Person �� ����Ʈ �����ڰ� ����.

	// �ذ�å�� 
	// �Ļ� Ŭ�������� �����ڸ� �����Ŀ�, Person �� �ٸ� �����ڸ� ���������
	// ȣ���ؾ� �Ѵ�.
	Student(const std::string& name, int age, int n) 
				: Person(name, age), id(n) {}


	Student(const std::string& name, int age) : Person(name, age), id(-1) {}
};

int main()
{
//	Person p1;
//	Person p2("lee", 28);

	Student s1("lee", 28, 99);
	Student s2("park", 32);
}
// ä��â ������
// int& r1 = 10; // error. lvalue reference �� lvalue �� ����Ų��.
// const int& r2 = 10; // ok. const lvalue reference �� lvalue, rvalue �� ��� ����Ų��.
//							��� ������ �ֽ��ϴ� "const�� �߿��մϴ�."
