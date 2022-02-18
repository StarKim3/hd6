// 6_this1 - 126 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20);
	p2.set(10, 20);
}