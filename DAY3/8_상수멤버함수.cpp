// 8_�������Լ� - 119 page �̾߱� �Դϴ�
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
