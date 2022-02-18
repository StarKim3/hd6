// 2_�ʵ��ʱ�ȭ1 - 91 page �Ʒ� �ڽ�

class Point
{
	int x = 0; // C++11 ���ʹ� ��� ����Ÿ�� ���� �ʱ�ȭ �Ҽ� �ֽ��ϴ�.
	int y{0};  // �̷��� �ص� �˴ϴ�.
public:
	// �� ó�� "�ʵ� �ʱ�ȭ"�� ����ϸ� �����Ϸ��� �����ڸ� �����մϴ�.
	// ����ڰ� ���� �ڵ�						// �����Ϸ��� ������ �ڵ�
	Point() {}								// Point()      : x(0), y(0) {}
	Point(int a)        : x(a) {}			// Point(int a) : x(a), y(0) {}
	Point(int a, int b) : x(a), y(b) {}		// Point(int a, int b) : x(a), y(b){}
};

int main()
{
	Point p1;
	Point p2(1, 2);
}