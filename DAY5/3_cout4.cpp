#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};
// 핵심 : 사용자 정의 타입을 cout 으로 출력하려면 아래 같은 함수를 만들면 됩니다.
std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}


int main()
{
	Point p1(1, 1);

	std::cout << p1; // operator<<(std::cout, p1 )
}
