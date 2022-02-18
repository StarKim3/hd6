class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d) {}

	int getArea() { return w * h; }
};

void fn(Rect rc)
{
	int n = rc.getArea();
}
int main()
{
	Rect r(1, 1, 10, 10);
	int n = r.getArea(); // ok.. 아무 문제 없습니다.
	fn(r);
}
// 위 코드의 단점을 찾아 보세요..