// 6_������3 - 78 page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }			// 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }	// 2
};
class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	Rect() { std::cout << "Rect()" << std::endl; }
};
int main()
{
	Rect r; // ȭ�� ��°�� ������ ������.
}
// ��ü ������
// 1. ��� �� �����ڰ� ���� ȣ��ǰ�
// 2. ��ü �ڽ��� �����ڰ� ȣ��ȴ�.


