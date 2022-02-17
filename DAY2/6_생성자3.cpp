// 6_생성자3 - 78 page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 1. 모든 객체는 생성시 생성자가 호출됩니다.
	// 2. 사용자가 생성자를 한개도 만들지 않으면 컴파일러가 인자 없는 생성자 제공
	//    => 인자 없는 생성자를 "default(기본) 생성자" 라고 합니다.
	//	  => 컴파일러가 제공하는 버전은 아무일도 하지 않습니다.
	Point()				{ x=0; y=0; std::cout << "Point()" << std::endl; }			// 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; }	// 2
};
int main()
{
	Point p1;
	Point p2(1, 2);

	// C++11 부터 아래 처럼 객체생성 가능 ( 일관된 초기화 문법 )
	Point p3{ 1,2 };
	Point p4 = { 1,2 };
	//---------------------------
	Point arr1[5]; // 1번 생성자 5회 호출
	Point arr2[5] = { {0,0}, {1,1} }; // 2번 생성자 2회 호출, 1번 3회 호출

	Point* p; // 객체 생성이 아니므로 생성자 호출 안됨.

	p = (Point*)malloc(sizeof(Point)); // 8 byte 메모리 할당일뿐.. Point와 관련없음
										// 생성자 호출안됨.
	free(p); 

	p = new Point; // 1번 생성자 호출
	delete p;		// 소멸자 호출

	p = new Point(1, 2); // 2번 생성자 호출
	delete p;
}


