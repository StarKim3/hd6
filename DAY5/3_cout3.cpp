#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p1(1, 1);

	std::cout << p1; // �� �ڵ尡 ����ǰ� �Ϸ��� ��� �ؾ� �ұ�� ?
					 // cout.operator<<(Point) �� ������ �˴ϴ�.
					 // �̹� ǥ�ؿ� �ִ� ostream Ŭ���� �ȿ� ����ڰ� ����Լ���
					 // �߰��Ҽ��� �����ϴ�.
					 // ��, ����Լ��δ� �Ҽ� �����ϴ�
					 // ������, �Ϲ��Լ��� �ϸ� �˴ϴ�.
					 // operator<<(cout, p1) ��, 
					 // operator<<(ostream, Point) �� ������ �˴ϴ�.
}
