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
	void print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	Point pt(1, 2);
	pt.x = 10;
	pt.set(10, 20);
	pt.print();
}
