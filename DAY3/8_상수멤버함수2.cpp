// ��� ��� �Լ�(const member function ) ������ ������ �ƴ� �ʼ� �����Դϴ�.

// ��ü�� ���¸� ����(�������Ÿ ����)���� �ʴ� ��� ��� �Լ���

// "�ݵ�� ��� ��� �Լ� �� �Ǿ�� �մϴ�"

// getter(getxxx() ����� �Լ���) �� �ݵ�� ��� ��� �Լ��� �ϼ���


class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d) {}

	int getArea() const  { return w * h; }
};

//void fn(Rect rc)		// call by value : ���纻 ������ ���� ������尡 �ֽ��ϴ�.
void fn(const Rect& rc) // <== �� �ڵ尡 ���� ���� �ڵ� �Դϴ�.
{
	int n = rc.getArea();
}

int main()
{
	Rect r(1, 1, 10, 10); // �����ü �ƴ�.
	int n = r.getArea();  // ok.. �ƹ� ���� �����ϴ�.
	fn(r);
}
// �� �ڵ��� ������ ã�� ������..