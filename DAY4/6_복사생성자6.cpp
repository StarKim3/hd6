#include <iostream>
#include <cstring>
#include <string>

// 현재 문제가 되는 것은 이름을 관리하기 위해, "char*"를 사용하고, 
// "메모리를 사용자가 직접 동적할당"하기 때문입니다.
// ==> STL 의 "std::string" 을 사용하면 모든 문제가 해결된다.

class People
{
//	char* name;
	std::string name;
	int age;
public:
	People(const std::string& s, int a) : name(s), age(a)
	{
	}
};
int main()
{
	People p1("kim", 2);
	People p2 = p1;
}