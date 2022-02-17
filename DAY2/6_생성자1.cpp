// 6_생성자1
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int age;

public:
	// 생성자 : 클래스 이름과 동일한 이름의 함수
	//			반환 타입을 적을수 없고, 값을 반환 할수도 없다.
	//			인자는 있어도 되고 없어도 된다.
	//		    객체를 생성하면 자동으로 호출된다.
//	void init()
	Person()
	{
		name = "lee";
		age = 28;
	}
};

int main()
{
	// 멤버데이타가 public 에 있다면 아래처럼 초기화 하면 됩니다.(C 언어 구조체 초기화 문법)
//	Person p = { "lee", 28 };

	// 하지만, 멤버 데이타 private에 있다면 위처럼 초기화 안됩니다.
	// public 영역에 초기화 함수를 제공해야 합니다.
	Person p;
	p.init();
}



