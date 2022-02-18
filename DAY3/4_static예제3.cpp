#include <iostream>

class Date
{
	int year;
	int month;
	int day;
	static int days[12];
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	Date afterDays(int ds)
	{
		Date temp(year, month, day + ds);

		return temp;
	}
	// �Ʒ� ���� �Լ��� static ���� ���� �������� �� �Ǵ��ؾ� �մϴ�.
	static int howManyDays(int m) { return days[m - 1]; }
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	Date today(2022, 2, 19);

	Date d = today.afterDays(1000);

	// 2���� ���ϱ��� �ִ��� �˰� �ͽ��ϴ�
	int ds1 = today.howManyDays(2);
	int ds2 = Date::howManyDays(2);

	Date d2 = today.tomorrow(); // static �̾�� �ұ�� ?
								// �ƴϾ�� �ұ�� ?
								// static �� �ƴϾ�� �մϴ�.
								// => ������ �غ�����.
}




