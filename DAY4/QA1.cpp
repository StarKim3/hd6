// QA1
#include <vector>
class Shape
{
	int color;
};
class Point : public  Shape
{
	int x, y;
};

int main()
{
	Point pt;

	// 아래 2줄의 차이점을 알아 두세요.
	Shape* p = &pt;
	Shape  s = pt;
}