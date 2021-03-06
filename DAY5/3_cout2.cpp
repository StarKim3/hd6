// 3_cout1 - 187
//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n)			{ printf("%d", n); return *this; }
		ostream& operator<<(double d)		{ printf("%f", d); return *this; }
		ostream& operator<<(const char* s)	{ printf("%s", s); return *this; }
	};
	ostream cout; 
}
int main()
{
	int n = 3;
	double d = 3.4;

	std::cout << n << ", " << d << "\n";
}