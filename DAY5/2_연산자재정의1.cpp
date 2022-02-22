// 2_연산자재정의1 - 182 page
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
	Point p2(2, 2);

	// 2개의 점을 더할수 있게 하려고 합니다.
	// 다음중 가장 보기 좋은 코드는 ?
	Point p3 = add(p1, p2); // 1
	Point p4 = p1.add(p2);  // 2
	Point p5 = p1 + p2;     // 3
}
