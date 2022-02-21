// 6_복사생성자3 - 102 page !!
#include <iostream>
#include <cstring>

// 아래 코드는 아무 문제 없습니다.
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
	// 생성자에서 자원할당 하는 경우 
	// 소멸자에서 자원해지 하는 것이 일반적인 코딩입니다.
	~People() { delete[] name; }
};
int main()
{
	People p1("lee", 28);
}