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


	// 2. 객체 생성시 멤버 데이타만 따로 놓이게 되고
	//    멤버 함수는 코드 메모리에 한개만 있습니다.(자세한 것은 this 배울때 )
	Rect rc1 = { 1, 1, 10, 10 };
	Rect rc2 = { 1, 1, 10, 10 };


	// 3. -> 와 .
	Rect  r = { 1,1,10,10 };
	Rect* p = &r;

	// 객체를 가지고 멤버에 접근할때는 . 입니다.
	int n1 = r.left;
	int n2 = r.getArea();

	// 포인터를 사용해서 멤버에 접근할때는 -> 입니다.
	int n3 = p->left;
	int n4 = p->getArea();

}