// 6_this1 - 126 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	void set(int x, int y) 
	{
		// this Ȱ�� 1. �ڽ��� ����� �����ϴ� ���� ��Ȯ�� ǥ���ϰ� ������
		this->x = x;
		this->y = y;
	}
	// this Ȱ�� 2. this�� ��ȯ�ϴ� ��� �Լ�
	Point* f1() { return this; }
//	Point  f2() { return *this; } // <== ���� �̷��� �ϸ� �ȵ˴ϴ�.
	Point& f2() { return *this; } // �̷��� �ؾ� �մϴ�.
};

int main()
{
	Point p1;
	p1.set(10, 20);

	// ��� �Լ��� this�� ��ȯ�ϸ� "����Լ�ȣ��"�� ���������� �Ҽ� �ֽ��ϴ�.
	p1.f1()->f1()->f1()->f1();
	p1.f2().f2().f2().f2();

	std::cout << "A" << "B" << "C" << "D";
	// cout.operator<<("A").operator<<("B").operator<<("C").operator<<("D")
}
