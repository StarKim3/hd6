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

	draw(rc); // draw ������ ���� rc�� �������� �ʱ�� ����ϰ� �ʹ�.
}