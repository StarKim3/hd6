// 4_static����1
#include <iostream>

// ���α׷����� ��¥�� �ٷ�� �ʹ�. 
// "Date" ��� Ÿ���� ���� ����
// 1. �ϳ��� Ŭ������ �ϳ��� å�Ӹ� ������ �Ѵ�. "��¥ �� �ð�"�� ���°��� ���� �ʴ�.
class Date
{
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	// ���� �� �ȿ� ����ϱ� ����, ������ ���� ��� �Լ��� �����ϸ� �����ϴ�.
};
int main()
{
	Date today(2022, 2, 19);
}




