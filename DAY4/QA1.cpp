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

	// �Ʒ� 2���� �������� �˾� �μ���.
	Shape* p = &pt;
	Shape  s = pt;
}