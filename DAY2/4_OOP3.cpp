#include <iostream>

// ��ü���� ���α׷��� �ٽ�
// 1. ���α׷����� �ʿ��� Ÿ���� ���� ��������!!!

// 2. Ÿ���� ���鶧 
//    "���¸� ��Ÿ���� ����Ÿ�� ���¸� ������ ������ �����ϴ� �Լ�"�� 
//	  ��� ������!

// C ���  : ����ü�ȿ� �Լ��� ������ ����.
// C++��� : ����ü�ȿ� �Լ��� ������ �ִ�.
struct Rect
{
	// ��� ����Ÿ ( �ٸ� ������ �ʵ� ��� �մϴ�.)
	int left;
	int top;
	int right;
	int bottom;

	// ��� �Լ� ( �޼ҵ� ��� �մϴ�.)
	// �ٽ� ) ��� �Լ��� �Ǿ 1��° ���ڿ��� Rect �� ������� �˴ϴ�.
	//       ��� �Լ������� �������Ÿ ���� ���� ����
	int getRectArea()
	{
		return (right - left) * (bottom - top);
	}
	void drawRect()
	{
		std::cout << "draw rect" << std::endl;
	}
};
int main()
{
	Rect rc = { 1, 1, 10, 10 };
//	int n = getRectArea(rc);
//	drawRect(rc);

	int n = rc.getRectArea();
	rc.drawRect();
}