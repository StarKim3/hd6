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
	// ��� ��� �Լ� : ��� �Լ� () �ڿ� const�� ���̴� ����
	//				   �ش� ����Լ������� "�������Ÿ�� �������� �ʴ´ٰ�"
	//				   �����Ϸ����� �˷��ִ� ��
	void print() const 
	{
//		x = 10; // error
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point pt(1, 2);

//	pt.x = 10;		// error. x�� public �� ������ ��� �̹Ƿ�
//	pt.set(10, 20);	// error. 
	pt.print();		// error. 
					// ��, print �� ��� ��� �Լ� ��� ȣ�� ����.

	// "��� ��ü�� ��� ����Լ� �� ȣ�� �Ҽ� �ִ�"
}



