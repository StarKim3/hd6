
struct Point
{
	int x;
	int y;
};

int main()
{
	Point pt = { 1,2 };

	// 구조체의 모든 요소를 한줄로 꺼낼수 있습니다
	auto [a, b] = pt;	// auto a = pt.x
						// auto b = pt.y 의 의미 입니다.
}