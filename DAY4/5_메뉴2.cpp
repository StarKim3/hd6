// 5_메뉴1
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// 객체지향 : 프로그램은 객체를 생성하고, 객체간의 관계를 설정하고
//			 객체간의 메세지를 주고 받는것이다.(멤버함수를 호출한다는 의미)

// 필요한 타입을 먼저 설계하자.
// 

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& s, int n) : title(s), id(n) {}

	std::string getTitle() const { return title; }

	// 메뉴 선택시 호출되는 함수
	void command()
	{
		std::cout << getTitle() << " 메뉴가 선택됨" << std::endl;
		_getch(); // 키보드 누를때 까지 잠시 멈추는 함수
	}
};

int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);
	MenuItem m3("국수", 13);

	m1.command(); // 메뉴 선택시. command() 함수에서 처리하기로 약속!
}