#include <iostream>

// 아래 배열은 "Date" 타입에서만 사용합니다.
// 전역으로 놓는것 보다는 "Date" 타입안에서 private으로 관리하는것이 안전합니다.
//int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

class Date
{
	int year;
	int month;
	int day;
	// 핵심 1. 모든 날짜 객체에 아래 배열이 따로 놓일 필요는 없습니다
	//        static 멤버 데이타로 해야 합니다.
	//		  클래스 외부에 선언을 만들고 초기화 해야 합니다.
	static int days[12];
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	Date afterDays(int ds)
	{
		// 아래 처럼 계산하면 안됩니다...!!
		// ==> 숙제로 이 함수 완성해 보세요..
		Date temp(year, month, day + ds); 

		return temp;
	}
};
// 객체가 없어도 생성되고, 생성자가 호출되지 않아도 초기화 되어야 합니다.
// 그래서 외부 선언을 만들고, 여기서 초기화 하게 됩니다.
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };



int main()
{
	Date today(2022, 2, 19);

	Date d = today.afterDays(1000);
}




