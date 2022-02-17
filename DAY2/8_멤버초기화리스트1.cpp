// 8_멤버초기화리스트1 - 85page
#include <iostream>
#include <string>

// 약간 까다로운 내용인데, 결론만 아셔도 됩니다.
class Person
{
	std::string name;
	int age;
public:
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};
int main()
{
	Person p("kim", 28);
}
