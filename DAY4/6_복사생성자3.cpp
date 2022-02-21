// 6_복사생성자3 - 102 page !!
#include <iostream>
#include <cstring>

class People
{
	char* name;
	int age;
public:
	People(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
};
int main()
{
	People p1("lee", 28);
}