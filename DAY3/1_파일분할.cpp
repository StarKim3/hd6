// 1_파일분할

// C++에서 클래스 만드는 방법
// 1. 클래스 안에 멤버 함수 구현을 포함
// 2. 클래스 안에는 멤버 함수의 선언만 포함하고, 멤버 함수 구현을 외부(소스파일)로 분리

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}
	~Point() {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
};
int main()
{
	Point p(1, 2);
}