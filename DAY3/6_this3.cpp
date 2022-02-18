// 6_this1 - 126 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	void set(int x, int y) 
	{
		// this 활용 1. 자신의 멤버에 접근하는 것을 명확히 표현하고 싶을때
		this->x = x;
		this->y = y;
	}
	// this 활용 2. this를 반환하는 멤버 함수
	Point* f1() { return this; }
//	Point  f2() { return *this; } // <== 절대 이렇게 하면 안됩니다.
	Point& f2() { return *this; } // 이렇게 해야 합니다.
};

int main()
{
	Point p1;
	p1.set(10, 20);

	// 멤버 함수가 this를 반환하면 "멤버함수호출"을 연속적으로 할수 있습니다.
	p1.f1()->f1()->f1()->f1();
	p1.f2().f2().f2().f2();

	std::cout << "A" << "B" << "C" << "D";
	// cout.operator<<("A").operator<<("B").operator<<("C").operator<<("D")
}
