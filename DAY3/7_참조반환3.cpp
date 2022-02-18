#include <iostream>

class Point
{
public:
	int x;
	int y;

	~Point() { std::cout << "~Point()" << std::endl; }
};

// 아래 함수 잘 생각해 보세요
Point& fn()
{
	Point pt = { 1,2 };

	return pt;  
}
int main()
{
	fn();
}

