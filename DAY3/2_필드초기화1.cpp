// 2_필드초기화1 - 91 page 아래 박스

class Point
{
	int x = 0; // C++11 부터는 멤버 데이타를 직접 초기화 할수 있습니다.
	int y{0};  // 이렇게 해도 됩니다.
public:
	// 위 처럼 "필드 초기화"를 사용하면 컴파일러가 생성자를 변경합니다.
	// 사용자가 만든 코드						// 컴파일러가 변경한 코드
	Point() {}								// Point()      : x(0), y(0) {}
	Point(int a)        : x(a) {}			// Point(int a) : x(a), y(0) {}
	Point(int a, int b) : x(a), y(b) {}		// Point(int a, int b) : x(a), y(b){}
};

int main()
{
	Point p1;
	Point p2(1, 2);
}