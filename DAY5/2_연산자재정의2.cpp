// 2_������������1 - 182 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// ����� ������ "operator+" ��� �̸��� �Լ�
	Point operator+(const Point& pt)
	{
		std::cout << "member operator+" << std::endl;
		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;  // 1. p1.operator+(p2) �� �����Ѱ� ?
						 // 2. operator+(p1, p2) �� �����Ѱ� ?
						 // ��� �ȵǸ� error

}
