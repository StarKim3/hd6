// 2_연산자재정의1 - 182 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 2개의 점을 더할수 있게 하려고 합니다.
	// 다음중 가장 보기 좋은 코드는 ?
	Point p3 = add(p1, p2); // 1. C 스타일.
	Point p4 = p1.add(p2);  // 2. java 등의 언어의 선택..
	Point p5 = p1 + p2;     // 3. C++ 스타일
							//    "단축 표기의 미학"

	// "a + b" 를 컴파일러가 해석하는 방법
	// 1. a, b 가 모두 primitive type 이면 "덧셈수행"
	// 2. a, b 중 한개라도 user type 이 있으면
	//   A. a.operator+(b) 가 가능하면 호출, 안되면 
	//   B. operator+(a, b) 가 가능한지 조사, 
	//   A, B가 모두 안되면 error.
}
