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
	Shape* p = &pt; // p �� pt ��ü�� ����Ű�� ������
	Shape  s = pt;  // ���ο� ��ü s �� �����ϸ鼭 pt�� �ʱ�ȭ
					// �׷���, pt �� ���� color �� �ʱ�ȭ�� ���..
					// object slicing �̶�� �մϴ�.
}
void f1(Shape* p) // ��� ������ ���ڷ� ������ �ֽ��ϴ�.
{
}
void f2(Shape s)  // ��� ������ ������ ������,, �� ������ color �� ������
{				  // Shape ��ü ����, �̷��� ���Ǵ� ���� ���� �����ϴ�.
}
std::vector<Shape*> v1; // ��� ������ �����ϰڴٴ� �ǹ� �Դϴ�.
std::vector<Shape>  v2; // Shape �� �����ϰڴٴ� �ǹ� �Դϴ�.
						// Point�� �־, Point�� ����Ǵ°��� �ƴմϴ�