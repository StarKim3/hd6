// 12_상속과생성자4
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	Person() {}
	Person(const std::string& s, int a) : name(s), age(a) {}
};

class Student : public Person
{
	int id;
};

int main()
{
	Person p1;
	Person p2("lee", 28);
}
