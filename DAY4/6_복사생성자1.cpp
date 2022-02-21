// 6_복사생성자1 - 102 page 
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()				: x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2
};

int main()
{
	Point p1;
	Point p2(1, 2);
	Point p3(1);  // ?
	Point p4(p2); // ?
}