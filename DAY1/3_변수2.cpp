#include <iostream>

// 일관된 초기화 문법 - 중요합니다. - 20 page
struct Point
{
	int x = 0;
	int y = 0; 
};

int main()
{
	int n1 = 10;
	int x1[3] = { 1,2,3 };
	Point pt1 = { 1,2 };

	// 모든 종류의 변수를 초기화 할때
	// "일관된(uniform) 형태로 초기화 하자."
	// 흔히, "중괄호 초기화(brace init)" 라고도 합니다. - C++11 에서 추가된 문법
	int n2 = { 10 };
	int x2[3] = { 1,2,3 };
	Point pt2 = { 1,2 };

	// =이 없어도 됩니다.
	int n3 { 10 };
	int x3[3] { 1,2,3 };
	Point pt3 { 1,2 };

	// 직접 초기화(direct initialization) : = 이 없는 초기화
	// 복사 초기화(copy   initialization) : = 이 있는 초기화
}