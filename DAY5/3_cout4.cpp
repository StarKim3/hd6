#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
// �ٽ� : ����� ���� Ÿ���� cout ���� ����Ϸ��� �Ʒ� ���� �Լ��� ����� �˴ϴ�.
std::ostream& operator<<(std::ostream& os, Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}


int main()
{
	Point p1(1, 1);

	std::cout << p1; 
}
