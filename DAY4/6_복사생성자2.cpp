// 6_복사생성자1 - 102 page 
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "copy constructor" << std::endl;
	}
};
void f1(Point  pt) {} // Point pt = p1 으로 인자를 받게 되는 모양입니다.
					  //			=> 복사 생성자 호출
void f2(Point& pt) {}

Point pt(1, 2); // 전역변수

Point  f3() { return pt; } // 리턴용 임시객체를 만들기 위해
							// 복사 생성자 사용
Point& f4() { return pt; }

int main()
{
	// 복사 생성자가 호출되는 3가지 경우 - 96 page
	// 1. 자신과 동일한 타입의 객체로 초기화 될때
	Point p1(1, 2);
//	Point p2(p1);	// 복사 생성자 호출
//	Point p3 = p1;	// 복사 생성자 호출.

	// 2. 함수가 객체를 call by value 로 받을때
//	f1(p1); // 복사 생성자 호출
//	f2(p1);

	// 3. 함수가 객체를 value 로 반환 할때 => 임시객체 생성시 복사 생성자 호출
//	f3();  // 복사 생성자 호출
	f4();

}





// 복사 생성자 - 92 page 입니다.