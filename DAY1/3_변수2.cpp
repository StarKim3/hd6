#include <iostream>

// �ϰ��� �ʱ�ȭ ���� - �߿��մϴ�. - 20 page
struct Point
{
	int x = 0;
	int y = 0; 
};

int main()
{
	int n1 = 10;
	int x1[3] = { 1,2,3 };
	Point pt1 = { 1,2 };

	// ��� ������ ������ �ʱ�ȭ �Ҷ�
	// "�ϰ���(uniform) ���·� �ʱ�ȭ ����."
	// ����, "�߰�ȣ �ʱ�ȭ(brace init)" ��� �մϴ�. - C++11 ���� �߰��� ����
	int n2 = { 10 };
	int x2[3] = { 1,2,3 };
	Point pt2 = { 1,2 };

	// =�� ��� �˴ϴ�.
	int n3 { 10 };
	int x3[3] { 1,2,3 };
	Point pt3 { 1,2 };

	// ���� �ʱ�ȭ(direct initialization) : = �� ���� �ʱ�ȭ
	// ���� �ʱ�ȭ(copy   initialization) : = �� �ִ� �ʱ�ȭ
}