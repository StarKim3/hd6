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
	// 현재 위 코드는 x2, x3 초기화는 동일합니다. 
	// 그런데, 직접과 복사 초기화는 상황에따라 약간 다른 경우가 있습니다. - explicit

	int n4 = 3.4; // 아주 나쁜 코드지만, C/C++에서는 허용됩니다.
				  // C#, java 등의 다른 언어에서는 대부분 에러!

	int n5{ 3.4 }; // error. 새로운 초기화 문법에서는 error

	char c{ 300 }; // error. 1byte 에는 300을 담을수 없습니다.

	// 권장은 "{}" 초기화를 권장합니다.
	// 그런데, 아직도 많은 개발자가 예전 스타일 초기화 사용하고 있습니다.
}