#include <iostream>

class Point
{
public:
	int x;
	int y;

	~Point() { std::cout << "~Point()" << std::endl; }
};

// �Ʒ� �Լ� �� ������ ������
Point& fn()
{
	Point pt = { 1,2 };

	return pt;  
}
int main()
{
	fn();
}

