// 9_상속 - 132 page
#include <iostream>
#include <string>

// 상속(inheritance)
// 기존 타입을 확장해서 새로운 타입을 설계하는 문법
// C++    : class Student : public Person
// C#     : class Student : Person
// Python : class Student(Person)
// java   : class Student extends Person

// Person  : Base class(기반클래스), Super class, Parent class 
// Student : Derived class(파생클래스), Sub class, Child class



// 모든 사람의 공통의 특징을 먼저 타입으로 설계
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
