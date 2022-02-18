// 6_this1 - 126 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 참고 : 파이썬 메소드 만들때   def __init__(self, a, b) 

	void set(int a, int b) // void set(Point* this, int x, int y)
	{
		x = a; // this->x = a;  라는 의미로 변경됩니다.
		y = b; // this->y = b;
	}
};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20); // set(&p1, 10, 20) 처럼 
					// 객체주소도 함수로 전달합니다.

	p2.set(10, 20);	// set(&p2, 10, 20)

	// 주의 : 사용자가 직접 set(&p1, 10, 20) 처럼 할수는 없습니다.
	// set(&p1, 10, 20); // error
}