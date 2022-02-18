// 3_static_member_data1 - 110 page
#include <iostream>

// 방법 1. 멤버 데이타 cnt 사용
//		=> 멤버 데이타는 모든 객체에 각각 생성된다.
//		=> 객체의 갯수 파악 실패!!

class Car
{
	int color;
public:
	int cnt = 0;

	Car()  { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	// 자동차 객체가 몇대나 생성되었는지 갯수를 파악하고 싶다.
	std::cout << c1.cnt << std::endl;
}