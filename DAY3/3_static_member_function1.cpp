// static_member_function1.cpp

#include <iostream>

class Car
{
	int color;
	static int cnt;	
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	// 자동차 갯수를 반환하는 멤버 함수
//	int getCount() { return cnt; } // 반드시 객체가 있어야만 호출가능한 함수

	static int getCount() { return cnt; } // 객체 없이 호출가능한 함수
										 // "클래스이름::함수이름" 으로 호출
};
int Car::cnt = 0; // private  에 있어도 외부 선언시 초기화는 가능합니다.

int main()
{
	// static 멤버 함수는 객체없이 호출가능합니다.
	std::cout << Car::getCount() << std::endl;

	Car c1;
	Car c2;

	std::cout << c1.getCount() << std::endl; // 2
//	std::cout << Car::cnt << std::endl;
}
