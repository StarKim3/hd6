#include <iostream>
#include <string>

// struct vs class
// struct : 접근 지정자를 표기하지 않으면 디폴트가 public
// class  : 접근 지정자를 표기하지 않으면 디폴트가 private
//			==> 안전하려면 class 가 좋습니다.

// struct 와 class 차이는 C++에서는 위 차이점만 빼고 모두 동일합니다.
// 다른 언어에서는 많은 차이가 있습니다.

//struct Person
class Person
{
//private:				
	std::string name;	
	int  age;

public:					
	void setAge(int value)
	{
		if (value > 0 && value < 150)
			age = value;
	}
};
int main()
{
	Person p;

	p.setAge(-10);
}