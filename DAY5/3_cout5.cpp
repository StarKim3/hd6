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

//	3.4 << n << std::cout; // �� �ǰ� �Ҽ� ������ ??
	// operator<<(double, int) << std::cout; �Դϴ�. 
	// �׷���, ������ ������ �Լ��� �ݵ�� �����߿� �Ѱ��� user type �̾�� �Ѵٴ�
	// ��Ģ�� �ֽ��ϴ�. �Ʒ� ����
}
int operator+(int a, int b) // error. �����߿� �Ѱ��� user type �̾�� �մϴ�.
{
	return a - b;
}