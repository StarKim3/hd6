class Point
{
	int x;
	int y;
	const int c; // 상수 멤버 데이타 입니다.
public:
	Point(int value) : c(value) // ok.. 초기화 입니다.
	{
//		c = value; // 될까요 ? 대입.. error
	}
};

int main()
{
	Point pt(10);

	const int c1 = 10; // 상수는 초기화는 됩니다.

	const int c2; // error. 일단 초기값없어서 안되고
	c2 = 10;      // error. 이 코드도 안됩니다. 상수는 대입할수 없습니다.
}


