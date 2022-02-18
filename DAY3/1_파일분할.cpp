// 1_파일분할

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