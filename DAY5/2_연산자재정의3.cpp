// 2_연산자재정의1 - 182 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	Point operator+(const Point& pt)
	{
		std::cout << "member operator+" << std::endl;
		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
	friend Point operator+(const Point& p1, const Point& p2);
};
// 멤버가 아닌 함수로 구현한 "operator+"
Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "non member operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;  // 1. p1.operator+(p2)  가 가능한가 ?
						 // 2. operator+(p1, p2) 가 가능한가 ?
						 
//	Point p4 = p1.operator+(p2); 
	Point p4 = operator+(p1, p2); // 이렇게도 가능.

	// 멤버 vs non-멤버
	// 멤버가 좋다.       : private에 접근하려면 멤버가 좋다.
	// 멤버가 아닌게 좋다. : 멤버로 만들수 없을때가 있다.

	Point p6 = p1 + p2; // p1.operator+(Point)
	Point p7 = p1 + 3;  // p1.operator+(int)  함수가 필요하다.
	Point p8 = 3  + p2; // 3.operator+(Point) 함수가 필요하다. 
						// 그런데, 3은 user type 이 아니다.!
						// 멤버로 만들수 없다.
						// operator+(int, Point) 를 만들면 된다.

	// C++ : 거의 모든 연산자를 재정의 가능합니다
	//       4개만 안됩니다( .  ::   ?:   .* )
	// 
	// C#, python : 주요 연산자는 거의 연산자 재정의 가능.

	// java : + 등 일부 연산자가 예외적으로 재정의가능..(String 은 덧셈가능)
	//		  대부분 연산자 재정의 안됨.
}
// C++ private : 타입에 대한 접근 지정 부여
//			     객체에 대한 접근 지정 여부가 아닙니다.