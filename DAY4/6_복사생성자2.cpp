// 6_���������1 - 102 page 
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "copy constructor" << std::endl;
	}
};
void f1(Point  pt) {} // Point pt = p1 ���� ���ڸ� �ް� �Ǵ� ����Դϴ�.
					  //			=> ���� ������ ȣ��
void f2(Point& pt) {}

Point pt(1, 2); // ��������

Point  f3() { return pt; } // ���Ͽ� �ӽð�ü�� ����� ����
							// ���� ������ ���
Point& f4() { return pt; }

int main()
{
	// ���� �����ڰ� ȣ��Ǵ� 3���� ��� - 96 page
	// 1. �ڽŰ� ������ Ÿ���� ��ü�� �ʱ�ȭ �ɶ�
	Point p1(1, 2);
//	Point p2(p1);	// ���� ������ ȣ��
//	Point p3 = p1;	// ���� ������ ȣ��.

	// 2. �Լ��� ��ü�� call by value �� ������
//	f1(p1); // ���� ������ ȣ��
//	f2(p1);

	// 3. �Լ��� ��ü�� value �� ��ȯ �Ҷ� => �ӽð�ü ������ ���� ������ ȣ��
//	f3();  // ���� ������ ȣ��
	f4();

}





// ���� ������ - 92 page �Դϴ�.