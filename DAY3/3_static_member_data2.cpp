// 3_static_member_data1 - 110 page
#include <iostream>
// 방법 2. 전역변수 cnt 
//		==> 프로그램 실행시 만들어지고, 누구나 접근 가능하다.
//		==> Car 객체를 여러개 만들어도 cnt는 한개이다.
//		==> 객체의 갯수 파악하는데, 성공!!!
// 그런데!!!
//		==> 전역변수 어디서나 접근 가능하므로 위험하다.
//      ==> 접근지정자(private) 으로 보호할수 없을까 ????
//		    ==> 보호 하려면 "클래스의 멤버가 되어야 한다."
int cnt = 0;

class Car
{
	int color;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	cnt = 100; // 사용자가 실수로 전역변수 값을 변경했다!!!

	// 자동차 객체가 몇대나 생성되었는지 갯수를 파악하고 싶다.
	std::cout << cnt << std::endl; // 2
}