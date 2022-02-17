#include <iostream>

// 객체지향 프로그램의 핵심
// 1. 프로그램에서 필요한 타입을 먼저 설계하자!!!

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

// Rect 라는 타입이 있으므로 
// 사각형이 필요 할때 int * 4개 를 사용하지 말고 Rect 를 사용하면 됩니다.

// 단, Rect 는 사용자 정의 타입이므로 call by value 보다는 const reference가
// 좋습니다.
int getRectArea(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

void drawRect(const Rect& rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	Rect rc = { 1, 1, 10, 10 };
	int n = getRectArea(rc);
	drawRect(rc);
}