// 8_STL_ALGORITHM1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


int main()
{
	std::vector<int> v = { 1,2,3,4,5, 1,2,3,4,5 };

	// 주어진 구간에서 3을 0으로 변경해라
//	std::replace(v.begin(), v.end(), 3, 0);   // A

	// 짝수를 0으로 
	std::replace_if(v.begin(), v.end(), [](int n) -> bool { return n % 2 == 0; }, 0);   // A

	for (auto e : v)
		std::cout << e << ", ";
}


// 실행해서 결과 확인해 보세요..
// 확인하신 분은
// "A" 를 주석으로 막고, 
// "주어진 구간에서 모든 짝수를 0으로 만들어 보세요"
// "람다표현식으로 해보세요"