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
		// 1. �׿ܿ� ��� �⺻ Ÿ�Կ� ���ؼ� "operator<<" ����
		// 2. ���� ����� printf �� �ƴ� "���ۿ� ����ϰ�", �� OS�� �ý����ݻ��
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