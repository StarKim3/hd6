#include <iostream>

struct Rect
{
	int left, top, right, bottom;
};

void draw(? r)
{
}
int main()
{
	Rect rc = { 1,1,10,10 };

	draw(rc); // draw 에서는 절대 rc를 수정하지 않기로 약속하고 싶다.
}