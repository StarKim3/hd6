// 2_������������1 - 182 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 2���� ���� ���Ҽ� �ְ� �Ϸ��� �մϴ�.
	// ������ ���� ���� ���� �ڵ�� ?
	Point p3 = add(p1, p2); // 1. C ��Ÿ��.
	Point p4 = p1.add(p2);  // 2. java ���� ����� ����..
	Point p5 = p1 + p2;     // 3. C++ ��Ÿ��
							//    "���� ǥ���� ����"

	// "a + b" �� �����Ϸ��� �ؼ��ϴ� ���
	// 1. a, b �� ��� primitive type �̸� "��������"
	// 2. a, b �� �Ѱ��� user type �� ������
	//   A. a.operator+(b) �� �����ϸ� ȣ��, �ȵǸ� 
	//   B. operator+(a, b) �� �������� ����, 
	//   A, B�� ��� �ȵǸ� error.
}
