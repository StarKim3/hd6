// 2_연산자재정의1 - 182 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// 멤버로 구현한 "operator+" 라는 이름의 함수
	Point operator+(const Point& pt)
	{
		std::cout << "member operator+" << std::endl;
		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;  // 1. p1.operator+(p2) 가 가능한가 ?
						 // 2. operator+(p1, p2) 가 가능한가 ?
						 // 모두 안되면 error

}
