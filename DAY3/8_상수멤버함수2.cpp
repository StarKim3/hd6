// 상수 멤버 함수(const member function ) 문법은 선택이 아닌 필수 문법입니다.

// 객체의 상태를 변경(멤버데이타 변경)하지 않는 모든 멤버 함수는

// "반드시 상수 멤버 함수 가 되어야 합니다"

// getter(getxxx() 모양의 함수들) 은 반드시 상수 멤버 함수로 하세요


class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d) {}

	int getArea() const  { return w * h; }
};

//void fn(Rect rc)		// call by value : 복사본 생성에 대한 오버헤드가 있습니다.
void fn(const Rect& rc) // <== 이 코드가 아주 좋은 코드 입니다.
{
	int n = rc.getArea();
}

int main()
{
	Rect r(1, 1, 10, 10); // 상수객체 아님.
	int n = r.getArea();  // ok.. 아무 문제 없습니다.
	fn(r);
}
// 위 코드의 단점을 찾아 보세요..