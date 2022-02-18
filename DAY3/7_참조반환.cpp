// 7_참조반환
#include <iostream>

class Point
{
public:
	int x;
	int y;

	~Point() { std::cout << "~Point()" << std::endl; }
};
// 핵심 1. 함수 호출과 객체 복사. 
/*
void f1(Point  p1) {} // call by value : 복사본 객체가 생성된다.
void f2(Point& p2) {} // call by reference : 복사본을 만들지 않는다.

int main()
{
	Point pt = { 1,2 };

	f1(p1);
	f2(p2);
}
*/
// 핵심 2. 함수 반환과 객체 복사
Point pt = { 1,2 }; // 전역변수

Point f3() // return by value 
{
	return pt; // 이순간 pt를 복사한 복사본 객체
			   // (반환을 위한 임시객체) 가 생성되어서
			   // 반환됩니다.
			   // 리턴용 임시객체는 함수 호출 문장이 끝에서
			   // 파괴 됩니다.
}	

Point& f4() // return by reference
{			// 리턴용 임시객체를 만들지 말라는 의미
	return pt; // pt의 별명을 반환
}
int main()
{
	std::cout << "--------------" << std::endl;
//	f3();
	f4();
	std::cout << "--------------" << std::endl;
}


