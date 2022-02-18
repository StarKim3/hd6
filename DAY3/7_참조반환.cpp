// 7_참조반환
#include <iostream>

class Point
{
public:
	int x;
	int y;
};

void f1(Point  p1) {}
void f2(Point& p2) {}

int main()
{
	Point pt = { 1,2 };

	f1(p1);
	f2(p2);
}
