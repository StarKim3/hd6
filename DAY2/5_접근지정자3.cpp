#include <iostream>
#include <string>

// C++ ��Ÿ�� 
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
// java, C# ���� �ٸ� ���� �� ����� ��� ���������ڸ� ǥ�� �մϴ�.
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
// ���̽㿡�� ���������� ������ �����ϴ�.