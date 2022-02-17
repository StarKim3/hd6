// 6_생성자3 - 78 page ~
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
	Rect r; // 화면 출력결과 예측해 보세요.
}
// 객체 생성시
// 1. 멤버 의 생성자가 먼저 호출되고
// 2. 객체 자신의 생성자가 호출된다.


