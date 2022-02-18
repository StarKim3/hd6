// 9_��� - 132 page
#include <iostream>
#include <string>

// ���(inheritance)
// ���� Ÿ���� Ȯ���ؼ� ���ο� Ÿ���� �����ϴ� ����
// C++    : class Student : public Person
// C#     : class Student : Person
// Python : class Student(Person)
// java   : class Student extends Person

// Person  : Base class(���Ŭ����), Super class, Parent class 
// Student : Derived class(�Ļ�Ŭ����), Sub class, Child class



// ��� ����� ������ Ư¡�� ���� Ÿ������ ����
class Person				
{
	std::string name;
	int age;
};

class Student : public Person
{
	int id;
};

class Professor : public Person
{
	int major;
};

int main()
{
	Student s;
	Professor p;
}
