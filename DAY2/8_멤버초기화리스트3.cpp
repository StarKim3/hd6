#include <iostream>
#include <string>

class Person1
{
	std::string name;
	int age;
public:
	Person1(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};
class Person2
{
	std::string name;
	int age;
public:
	Person2(const std::string& n, int a)
		: name(n), age(a)
	{
	}
};

int main()
{
	Person1 p1("kim", 28);
	Person2 p2("kim", 28);
}