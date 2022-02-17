#include <iostream>

// ��ü���� ���α׷��� �ٽ�
// 1. ���α׷����� �ʿ��� Ÿ���� ���� ��������!!!

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

// Rect ��� Ÿ���� �����Ƿ� 
// �簢���� �ʿ� �Ҷ� int * 4�� �� ������� ���� Rect �� ����ϸ� �˴ϴ�.

// ��, Rect �� ����� ���� Ÿ���̹Ƿ� call by value ���ٴ� const reference��
// �����ϴ�.
int getRectArea(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

void drawRect(const Rect& rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	Rect rc = { 1, 1, 10, 10 };
	int n = getRectArea(rc);
	drawRect(rc);
}