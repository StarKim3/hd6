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
	// 아래 같은 함수를 static 으로 할지 안할지를 잘 판단해야 합니다.
	static int howManyDays(int m) { return days[m - 1]; }
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	Date today(2022, 2, 19);

	Date d = today.afterDays(1000);

	// 2월이 몇일까지 있는지 알고 싶습니다
	int ds1 = today.howManyDays(2);
	int ds2 = Date::howManyDays(2);

	Date d2 = today.tomorrow(); // static 이어야 할까요 ?
								// 아니어야 할까요 ?
								// static 이 아니어야 합니다.
								// => 과제로 해보세요.
}




