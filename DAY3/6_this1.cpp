// 6_this1 - 126 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// ���� : ���̽� �޼ҵ� ���鶧   def __init__(self, a, b) 

	void set(int a, int b) // void set(Point* this, int x, int y)
	{
		x = a; // this->x = a;  ��� �ǹ̷� ����˴ϴ�.
		y = b; // this->y = b;
	}
};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20); // set(&p1, 10, 20) ó�� 
					// ��ü�ּҵ� �Լ��� �����մϴ�.

	p2.set(10, 20);	// set(&p2, 10, 20)

	// ���� : ����ڰ� ���� set(&p1, 10, 20) ó�� �Ҽ��� �����ϴ�.
	// set(&p1, 10, 20); // error
}