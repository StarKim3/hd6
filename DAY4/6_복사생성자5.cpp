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
	~People() { delete[] name; }

	// 깊은 복사(deep copy)로 구현한 복사 생성자
	People(const People& p) : age(p.age)
	{
		// 1. 포인터가 아닌 경우는 그대로 복사 합니다.
//		age = p.age; // 복사 생성자도 "생성자의 일종" 이므로 초기화 리스트에서 하세요

		// 2. 포인터의 경우는 메모리 할당후, 메모리 자체를 복사합니다.
		name = new char[strlen(p.name) + 1];
		strcpy_s(name, strlen(p.name) + 1, p.name);
	}
};
int main()
{
	People p1("kim", 2);
	People p2 = p1; 
}