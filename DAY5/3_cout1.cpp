// 3_cout1 - 187
//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		void operator<<(int n) { printf("%d", n); }
		void operator<<(double d) { printf("%f", d); }
		void operator<<(const char* s) { printf("%s", s); }
		// 1. 그외에 모든 기본 타입에 대해서 "operator<<" 제공
		// 2. 실제 출력은 printf 가 아닌 "버퍼에 출력하고", 각 OS별 시스템콜사용
	};
	ostream cout;
}

int main()
{
	int n = 3;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)
}