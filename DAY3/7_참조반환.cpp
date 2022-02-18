// 7_������ȯ
#include <iostream>

class Point
{
public:
	int x;
	int y;

	~Point() { std::cout << "~Point()" << std::endl; }
};
// �ٽ� 1. �Լ� ȣ��� ��ü ����. 
/*
void f1(Point  p1) {} // call by value : ���纻 ��ü�� �����ȴ�.
void f2(Point& p2) {} // call by reference : ���纻�� ������ �ʴ´�.

int main()
{
	Point pt = { 1,2 };

	f1(p1);
	f2(p2);
}
*/
// �ٽ� 2. �Լ� ��ȯ�� ��ü ����
Point pt = { 1,2 }; // ��������

Point f3() // return by value 
{
	return pt; // �̼��� pt�� ������ ���纻 ��ü
			   // (��ȯ�� ���� �ӽð�ü) �� �����Ǿ
			   // ��ȯ�˴ϴ�.
			   // ���Ͽ� �ӽð�ü�� �Լ� ȣ�� ������ ������
			   // �ı� �˴ϴ�.
}	

Point& f4() // return by reference
{			// ���Ͽ� �ӽð�ü�� ������ ����� �ǹ�
	return pt; // pt�� ������ ��ȯ
}
int main()
{
	std::cout << "--------------" << std::endl;
//	f3();
	f4();
	std::cout << "--------------" << std::endl;
}


