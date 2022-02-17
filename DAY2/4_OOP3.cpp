#include <iostream>

// 객체지향 프로그램의 핵심
// 1. 프로그램에서 필요한 타입을 먼저 설계하자!!!

// 2. 타입을 만들때 
//    "상태를 나타내는 데이타와 상태를 가지고 연산을 수행하는 함수"를 
//	  묶어서 만들자!

// C 언어  : 구조체안에 함수를 넣을수 없다.
// C++언어 : 구조체안에 함수를 넣을수 있다.
struct Rect
{
	// 멤버 데이타 ( 다른 언어에서는 필드 라고도 합니다.)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수 ( 메소드 라고도 합니다.)
	// 핵심 ) 멤버 함수가 되어서 1번째 인자였던 Rect 가 사라지게 됩니다.
	//       멤버 함수에서는 멤버데이타 직접 접근 가능
	int getRectArea()
	{
		return (right - left) * (bottom - top);
	}
	void drawRect()
	{
		std::cout << "draw rect" << std::endl;
	}
};
int main()
{
	Rect rc = { 1, 1, 10, 10 };
//	int n = getRectArea(rc);
//	drawRect(rc);

	int n = rc.getRectArea();
	rc.drawRect();
}