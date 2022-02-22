// 2_������������1 - 182 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	Point operator+(const Point& pt)
	{
		std::cout << "member operator+" << std::endl;
		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
	friend Point operator+(const Point& p1, const Point& p2);
};
// ����� �ƴ� �Լ��� ������ "operator+"
Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "non member operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;  // 1. p1.operator+(p2)  �� �����Ѱ� ?
						 // 2. operator+(p1, p2) �� �����Ѱ� ?
						 
//	Point p4 = p1.operator+(p2); 
	Point p4 = operator+(p1, p2); // �̷��Ե� ����.

	// ��� vs non-���
	// ����� ����.       : private�� �����Ϸ��� ����� ����.
	// ����� �ƴѰ� ����. : ����� ����� �������� �ִ�.

	Point p6 = p1 + p2; // p1.operator+(Point)
	Point p7 = p1 + 3;  // p1.operator+(int)  �Լ��� �ʿ��ϴ�.
	Point p8 = 3  + p2; // 3.operator+(Point) �Լ��� �ʿ��ϴ�. 
						// �׷���, 3�� user type �� �ƴϴ�.!
						// ����� ����� ����.
						// operator+(int, Point) �� ����� �ȴ�.

	// C++ : ���� ��� �����ڸ� ������ �����մϴ�
	//       4���� �ȵ˴ϴ�( .  ::   ?:   .* )
	// 
	// C#, python : �ֿ� �����ڴ� ���� ������ ������ ����.

	// java : + �� �Ϻ� �����ڰ� ���������� �����ǰ���..(String �� ��������)
	//		  ��κ� ������ ������ �ȵ�.
}
// C++ private : Ÿ�Կ� ���� ���� ���� �ο�
//			     ��ü�� ���� ���� ���� ���ΰ� �ƴմϴ�.