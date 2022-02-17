// 5_접근지정자 - 74page
#include <iostream>
#include <string>

struct Person
{
	std::string name;
	int  age;
};

int main()
{
	Person p;
	p.age = -10;
}