#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};
int main()
{
	// ���� ȥ�������� �ϴ� ���� ����
	// 1. ���� vs ��ü
	//    ���� : primitive Ÿ���� ��쿡 ���
	//    ��ü : user define Ÿ�� �� ���, ���� ���ٴ� ��ü��� �մϴ�.
	int  n; // ����
	Rect r; // ��ü


	// 2. ��ü ������ ��� ����Ÿ�� ���� ���̰� �ǰ�
	//    ��� �Լ��� �ڵ� �޸𸮿� �Ѱ��� �ֽ��ϴ�.(�ڼ��� ���� this ��ﶧ )
	Rect rc1 = { 1, 1, 10, 10 };
	Rect rc2 = { 1, 1, 10, 10 };


	// 3. -> �� .
	Rect  r = { 1,1,10,10 };
	Rect* p = &r;

	// ��ü�� ������ ����� �����Ҷ��� . �Դϴ�.
	int n1 = r.left;
	int n2 = r.getArea();

	// �����͸� ����ؼ� ����� �����Ҷ��� -> �Դϴ�.
	int n3 = p->left;
	int n4 = p->getArea();

}