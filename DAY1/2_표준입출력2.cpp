#include <iostream>
#include <iomanip>  // C++ 입출력 관련 "조정자(iomanipulator)" 를 위해서

// 교재 16page 중간에 어떤 조정자들이 있는지 정리되어 있습니다.
// 그런데, "cppreference.com" 에서 참고하는게 좋습니다.
int main()
{
	int n1, n2;
//	std::cin >> n1 >> n2; // 가능합니다. 그런데, 많이 사용하지는 않습니다.

	n1 = 10;
	std::cout << n1 << std::endl;
	std::cout << std::hex << n1 << std::endl; // 16진수로 출력	
	std::cout << std::dec << n1 << std::endl; // 다시 10진수로

	std::cout << std::setw(10) << n1 << std::endl; // 10칸에 맞춰서 출력

	std::cout << std::setw(10) << std::setfill('#') <<  n1 << std::endl;
}
