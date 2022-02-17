#include <iostream>
#include <vector>

int main()
{
	// -1입력할때 까지 입력 받아라 - C++ 버전
	std::vector<int> v;
	int num;
	while (1)
	{
		std::cin >> num;
		if (num == -1) break;

		v.push_back(num); // 자동으로 알아서 증가 합니다.
	}
	std::cout << "입력된 갯수 : " << v.size() << std::endl;

	// range-for 사용가능합니다.
	for (auto e : v)
		std::cout << e << ", ";

	// 버퍼 관리는 vector가 알아서 해주므로 사용자는 신경쓸 필요 없습니다.
}
// C++을 배우는 것
// 1. std::vector 같은 하나의 타입을 잘만드는 법을 배우는것 - 쉽지 않은 내용
// 2. std::vector 같은 표준이 제공하는 타입의 사용법을 배우는 것 - 약간 쉽다, 5일차
// 3. 객체지향 디자인을 적용하는것 => 어려운 내용 4일차!