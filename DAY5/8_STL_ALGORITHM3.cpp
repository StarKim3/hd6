// 8_STL_ALGORITHM1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool is_3_times(int n)
{
	return n % 3 == 0;
}
int main()
{
	std::vector<int> v = { 1, 6, 7, 8, 9, 3, 10 };

	auto ret2 = std::find_if(v.begin(), v.end(), is_3_times);


	// 람다 표현식(lambda expression)
	// 함수(함수 주소)가 필요한 자리에 함수구현을 직접 표기하는 문법
	// "익명의 함수를 만드는 문법"
	// [] : lambda introducer. 람다가 시작됨을 알리는 기호
	// 
	// C++11 부터 지원

	// STL 의 xxx_if 알고리즘 사용시 함수 보다 "람다표현식"을 사용하세요
	auto ret3 = std::find_if(v.begin(), v.end(), 
						[](int n) {return n % 3 == 0;} );


	// 람다표현식을 auto 변수에 담아서 사용해도 됩니다.
	auto f = [](int a) { return a % 3 == 0; };

	auto ret4 = std::find_if(v.begin(), v.end(), f); // ok

}