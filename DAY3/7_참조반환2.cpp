#include <iostream>

class Counter
{
public:
	int cnt = 0;

//	Counter  increment()  // <<== �̷��� ����� main ó�� ���� ���� �Դϴ�. �ӽð�ü����
	Counter& increment()  // <<== �̷��� ���� ��ȯ �ؾ� �մϴ�.
	{
		++cnt;
		return *this;
	}
	~Counter()
	{
		std::cout << "~Counter()" << std::endl;
	}
};
int main()
{
	Counter c;
//	c.increment();
//	c.increment();
	std::cout << "----------------------" << std::endl;
	c.increment().increment().increment(); 
	std::cout << "----------------------" << std::endl;

	std::cout << c.cnt << std::endl; // ???
}