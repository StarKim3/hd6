class Point
{
	int x;
	int y;
	const int c; // ��� ��� ����Ÿ �Դϴ�.
public:
	Point(int value) : c(value) // ok.. �ʱ�ȭ �Դϴ�.
	{
//		c = value; // �ɱ�� ? ����.. error
	}
};

int main()
{
	Point pt(10);

	const int c1 = 10; // ����� �ʱ�ȭ�� �˴ϴ�.

	const int c2; // error. �ϴ� �ʱⰪ��� �ȵǰ�
	c2 = 10;      // error. �� �ڵ嵵 �ȵ˴ϴ�. ����� �����Ҽ� �����ϴ�.
}


