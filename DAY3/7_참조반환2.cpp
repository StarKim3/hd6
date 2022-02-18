#include <iostream>

class Counter
{
public:
	int cnt = 0;

//	Counter  increment()  // <<== 이렇게 만들면 main 처럼 사용시 버그 입니다. 임시객체생성
	Counter& increment()  // <<== 이렇게 참조 반환 해야 합니다.
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