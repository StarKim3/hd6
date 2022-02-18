// 8_상수멤버함수 - 119 page 이야기 입니다
#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	// 상수 멤버 함수 : 멤버 함수 () 뒤에 const를 붙이는 문법
	//				   해당 멤버함수에서는 "멤버데이타를 변경하지 않는다고"
	//				   컴파일러에게 알려주는 것
	void print() const 
	{
//		x = 10; // error
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point pt(1, 2);

//	pt.x = 10;		// error. x는 public 에 있지만 상수 이므로
//	pt.set(10, 20);	// error. 
	pt.print();		// error. 
					// 단, print 가 상수 멤버 함수 라면 호출 가능.

	// "상수 객체는 상수 멤버함수 만 호출 할수 있다"
}



