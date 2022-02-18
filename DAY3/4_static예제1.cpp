// 4_static예제1
#include <iostream>

// 프로그램에서 날짜를 다루고 싶다. 
// "Date" 라는 타입을 설계 하자
// 1. 하나의 클래스는 하나의 책임만 가지게 한다. "날짜 와 시간"을 묶는것은 좋지 않다.
class Date
{
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	// 이제 이 안에 사용하기 쉽고, 유용한 많은 멤버 함수를 제공하면 좋습니다.
};
int main()
{
	Date today(2022, 2, 19);
}




