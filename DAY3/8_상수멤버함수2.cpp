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
	int n = r.getArea(); // ok.. �ƹ� ���� �����ϴ�.
	fn(r);
}
// �� �ڵ��� ������ ã�� ������..