// 8_STL_ALGORITHM1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 단항 함수 : 인자가 한개인 함수
// 이항 함수 : 인자가 두개인 함수
bool is_3_times(int n)
{
	return n % 3 == 0;
}
int main()
{
	std::vector<int> v = { 1, 6, 7, 8, 9, 3, 10 };

	// 주어진 구간에서 3을 찾고 싶다.
	auto ret1 = std::find(v.begin(), v.end(), 3); // "값 검색"

	// 주어진 구간에서 1번째 나오는 "3의 배수" 를 찾고 싶다. ??
	// std::find    : 값검색
	// std::find_if : 조건검색(인자로 함수 전달)
	auto ret2 = std::find_if(v.begin(), v.end(), is_3_times);

	if (ret2 != v.end())
		std::cout << *ret2 << std::endl; // 6

}