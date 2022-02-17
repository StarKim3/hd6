#include <iostream>
#include <string>

// C++ 스타일 
class Person
{
private:				
	std::string name;
	int  age;

public:
	void setAge(int value)
	{
		if (value > 0 && value < 150)
			age = value;
	}
};
// java, C# 등의 다른 언어는 각 멤버에 모두 접근지정자를 표기 합니다.
class Person
{
	private std::string name;
	private int  age;

	public  void setAge(int value)
	{
		if (value > 0 && value < 150)
			age = value;
	}
};
// 파이썬에는 접근지정자 문법이 없습니다.