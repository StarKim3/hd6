#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};
int main()
{
	// 가끔 혼란스러워 하는 내용 정리
	// 1. 변수 vs 객체
	//    변수 : primitive 타입인 경우에 사용
	//    객체 : user define 타입 인 경우, 변수 보다는 객체라고 합니다.
	int  n; // 변수
	Rect r; // 객체


	Rect rc1 = { 1, 1, 10, 10 };
	Rect rc2 = { 1, 1, 10, 10 };



}