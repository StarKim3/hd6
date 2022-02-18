#include <iostream>

// �Ʒ� �迭�� "Date" Ÿ�Կ����� ����մϴ�.
// �������� ���°� ���ٴ� "Date" Ÿ�Ծȿ��� private���� �����ϴ°��� �����մϴ�.
//int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

class Date
{
	int year;
	int month;
	int day;
	// �ٽ� 1. ��� ��¥ ��ü�� �Ʒ� �迭�� ���� ���� �ʿ�� �����ϴ�
	//        static ��� ����Ÿ�� �ؾ� �մϴ�.
	//		  Ŭ���� �ܺο� ������ ����� �ʱ�ȭ �ؾ� �մϴ�.
	static int days[12];
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	Date afterDays(int ds)
	{
		// �Ʒ� ó�� ����ϸ� �ȵ˴ϴ�...!!
		// ==> ������ �� �Լ� �ϼ��� ������..
		Date temp(year, month, day + ds); 

		return temp;
	}
};
// ��ü�� ��� �����ǰ�, �����ڰ� ȣ����� �ʾƵ� �ʱ�ȭ �Ǿ�� �մϴ�.
// �׷��� �ܺ� ������ �����, ���⼭ �ʱ�ȭ �ϰ� �˴ϴ�.
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };



int main()
{
	Date today(2022, 2, 19);

	Date d = today.afterDays(1000);
}




