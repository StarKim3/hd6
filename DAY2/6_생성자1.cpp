// 6_생성자1
#include <iostream>
#include <string>

class Person
{
public:
	std::string name;
	int age;
};
int main()
{
	// 멤버데이타가 public 에 있다면 아래처럼 초기화 하면 됩니다.(C 언어 구조체 초기화 문법)
	Person p = { "lee", 28 };
}