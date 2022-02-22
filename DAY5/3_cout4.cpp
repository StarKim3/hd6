#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};
// 핵심 : 사용자 정의 타입을 cout 으로 출력하려면 아래 같은 함수를 만들면 됩니다.
std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	Point p1(1, 1);
	std::cout << p1; // operator<<(std::cout, p1 )

//	std::ostream& os = std::cout;  // os 는 결국 cout 의 별칭입니다.
//	os << 10; // os 는 cout 이므로 이렇게 사용하면 됩니다.

//	const std::ostream& cos = std::cout; // 이렇게 하면 상수 별명입니다.
//	cos << 10; // error 입니다. 상수객체는 상수 함수만 호출가능한데
			   // cos.operator<<(10) 에서 "operator<<" 는 상수 멤버함수 아닙니다.

}
