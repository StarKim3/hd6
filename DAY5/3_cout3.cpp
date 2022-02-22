#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p1(1, 1);

	std::cout << p1; // 이 코드가 실행되게 하려면 어떻게 해야 할까요 ?
					 // cout.operator<<(Point) 가 있으면 됩니다.
					 // 이미 표준에 있는 ostream 클래스 안에 사용자가 멤버함수를
					 // 추가할수는 없습니다.
					 // 즉, 멤버함수로는 할수 없습니다
					 // 하지만, 일반함수로 하면 됩니다.
					 // operator<<(cout, p1) 즉, 
					 // operator<<(ostream, Point) 가 있으면 됩니다.
}
