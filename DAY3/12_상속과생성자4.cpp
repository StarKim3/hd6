// 12_상속과생성자4
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
//	Person() {}
	Person(const std::string& s, int a) : name(s), age(a) {}
};
// 1. 타입을 설계할때 "의도적으로 디폴트 생성자를 제공하지 않는 경우도 많습니다."
//    => "모든 멤버 데이타는 사용자가 전달한 값으로 초기화 되는 것이 안전하다" 라는 철학

// 2. 디폴트 생성자가 없는 Person 으로 부터 상속받아서 타입을 만들때..
class Student : public Person
{
	int id;
public:
	// 컴파일러가 생성한 디폴트 생성자 모양
//	Student() : Person() {}  <== 그런데, Person 은 디폴트 생성자가 없다.

	// 해결책은 
	// 파생 클래스에서 생성자를 만든후에, Person 의 다른 생성자를 명시적으로
	// 호출해야 한다.
	Student(const std::string& name, int age, int n) 
				: Person(name, age), id(n) {}
};

int main()
{
//	Person p1;
//	Person p2("lee", 28);

	Student s("lee", 28, 99);
}
