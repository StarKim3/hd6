
struct Point
{
	int x;
	int y;
};

int main()
{
	Point pt = { 1,2 };

	// ����ü�� ��� ��Ҹ� ���ٷ� ������ �ֽ��ϴ�
	auto [a, b] = pt;	// auto a = pt.x
						// auto b = pt.y �� �ǹ� �Դϴ�.
}