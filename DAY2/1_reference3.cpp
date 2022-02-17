#include <iostream>

struct Rect
{
	int left, top, right, bottom;
};

//void draw(Rect r) // call by value : 원본 변수(인자)를 수정하지 않겠다는
				  //				약속. 복사본이 생성되므로 오버헤드가 있다.
//void draw(Rect& r) // call by reference : 복사본은 없지만
				   //				실수로 원본을 변경할수도 있다.

void draw(const Rect& r) // 가장 좋은 코드 입니다. - 45 page
{
//	r.left = 100; // error. 이제 이 함수 안에서는 r을 수정할수 없습니다.
}
int main()
{
	Rect rc = { 1,1,10,10 };

	draw(rc); // draw 에서는 절대 rc를 수정하지 않기로 약속하고 싶다.
}

// 질문 : 원본인자를 변경하지 않으려고 합니다. 
//       다음중 좋은 코드는 ?
void f1(int n) {}		// 1 => 좋은 코드!!
void f1(const int& n) {}// 2

// 레퍼런스는 정말 메모리를 사용하지 않나요 ?
// => C++ 표준 문서 : "레퍼런스는 다른 변수에 대한 별칭(alias)이다.
//int n = 0;
//int& r = n;

// 함수 인자를 받는 방법

// A. 원본 인자를 변경하는 경우
//    => 포인터도 좋고, 레퍼런스도 좋습니다. - 아래 코드 모두 좋습니다.!!!
//    void inc1(int* p) {++(*p);}
//    void inc2(int& r) {++p;}    

// B. 원본 인자를 변경하지 않는 경우
// 1. primitive type 이라면   : call by value로 하세요  void fn(int n){}
// 2. user define type 이라면 : const reference로 하세요  void fn(const Rect& r){}