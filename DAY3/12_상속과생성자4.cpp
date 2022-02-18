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
};

int main()
{
//	Person p1;
//	Person p2("lee", 28);

	Student s("lee", 28, 99);
}
