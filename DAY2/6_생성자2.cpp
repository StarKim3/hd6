#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int age;

public:
	Person()
	{
		name = "lee";
		age = 28;
	}
	// 생성자는 인자가 있어도 되고 없어도 됩니다. 
	// 2개 이상 만들수 있습니다.(overloading 된다는 의미)
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
	// 소멸자 : 객체가 파괴 될때 호출.
	// 인자를 가질수 없고, 오직 한개만 만들수 있다.
	~Person()
	{
		std::cout << "~Person()" << std::endl;
	}
};
int main()
{
	Person p1;				// 인자가 없는 생성자 호출
	Person p2("kim", 30);	// 인자가 2개인 생성자 호출

	std::cout << "-----------" << std::endl;
} // <== 이순간, p2, p1 파괴. 소멸자 호출.

// 생성자는 왜 사용하는지 알겠는데, 소멸자는 왜 만드나요 ?
//  => 필요할때만 만들면 됩니다. 다음예제에서.. 


