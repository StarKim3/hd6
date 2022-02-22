#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};
// �ٽ� : ����� ���� Ÿ���� cout ���� ����Ϸ��� �Ʒ� ���� �Լ��� ����� �˴ϴ�.
std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	Point p1(1, 1);
	std::cout << p1; // operator<<(std::cout, p1 )

//	std::ostream& os = std::cout;  // os �� �ᱹ cout �� ��Ī�Դϴ�.
//	os << 10; // os �� cout �̹Ƿ� �̷��� ����ϸ� �˴ϴ�.

//	const std::ostream& cos = std::cout; // �̷��� �ϸ� ��� �����Դϴ�.
//	cos << 10; // error �Դϴ�. �����ü�� ��� �Լ��� ȣ�Ⱑ���ѵ�
			   // cos.operator<<(10) ���� "operator<<" �� ��� ����Լ� �ƴմϴ�.

}
