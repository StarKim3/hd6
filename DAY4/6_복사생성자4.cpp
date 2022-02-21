// 6_복사생성자3 - 102 page !!
#include <iostream>
#include <cstring>

// 클래스 내부에 포인터 멤버가 없다면
// => 컴파일러가 제공하는 복사 생성자를 그냥 사용하면 됩니다.

// 클래스 내부에 포인터 멤버가 있다면
// => 컴파일러가 제공하는 복사 생성자 사용시 
//    "얕은복사(shallow copy)"  현상이 있습니다.
// 
// => 개발자가 직접 복사 생성자를 만들어서 해결해야 합니다

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
};
int main()
{
	People p1("kim", 2);
	People p2 = p1; // 이 순간의 메모리 그림을 잘 생각해 보세요(그림 그려 보세요, 103 page)
					// 사용자가 복사 생성자를 만들지 않았으므로
					// 컴파일러가 제공하는 복사 생성자 사용.
					// ==> 모든 멤버를 복사.
}