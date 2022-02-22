#include <iostream>

/*
std::ostream& operator<<(int n, std::ostream& os)
{
	os << n;
	return os;
}
*/
template<typename T>
std::ostream& operator<<(T n, std::ostream& os)
{
	os << n;
	return os;
}

int main()
{
	int n = 20;
//	std::cout << n; // ok
	n << std::cout; // operator<<(int, std::ostream)

	3.4 << std::cout;

	"hello" << std::cout;

//	3.4 << n << std::cout; // 을 되게 할수 없나요 ??
	// operator<<(double, int) << std::cout; 입니다. 
	// 그런데, 연산자 재정의 함수는 반드시 인자중에 한개는 user type 이어야 한다는
	// 규칙이 있습니다. 아래 참고
}
int operator+(int a, int b) // error. 인자중에 한개는 user type 이어야 합니다.
{
	return a - b;
}