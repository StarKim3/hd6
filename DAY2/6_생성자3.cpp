// 6_������3 - 78 page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 1. ��� ��ü�� ������ �����ڰ� ȣ��˴ϴ�.
	// 2. ����ڰ� �����ڸ� �Ѱ��� ������ ������ �����Ϸ��� ���� ���� ������ ����
	//    => ���� ���� �����ڸ� "default(�⺻) ������" ��� �մϴ�.
	//	  => �����Ϸ��� �����ϴ� ������ �ƹ��ϵ� ���� �ʽ��ϴ�.
	Point()				{ x=0; y=0; std::cout << "Point()" << std::endl; }			// 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; }	// 2
};
int main()
{
	Point p1;
	Point p2(1, 2);

	// C++11 ���� �Ʒ� ó�� ��ü���� ���� ( �ϰ��� �ʱ�ȭ ���� )
	Point p3{ 1,2 };
	Point p4 = { 1,2 };
	//---------------------------
	Point arr1[5]; // 1�� ������ 5ȸ ȣ��
	Point arr2[5] = { {0,0}, {1,1} }; // 2�� ������ 2ȸ ȣ��, 1�� 3ȸ ȣ��

	Point* p; // ��ü ������ �ƴϹǷ� ������ ȣ�� �ȵ�.

	p = (Point*)malloc(sizeof(Point)); // 8 byte �޸� �Ҵ��ϻ�.. Point�� ���þ���
										// ������ ȣ��ȵ�.
	free(p); 

	p = new Point; // 1�� ������ ȣ��
	delete p;		// �Ҹ��� ȣ��

	p = new Point(1, 2); // 2�� ������ ȣ��
	delete p;
}


