#include <iostream>
#include <cstring>
#include <string>

// ���� ������ �Ǵ� ���� �̸��� �����ϱ� ����, "char*"�� ����ϰ�, 
// "�޸𸮸� ����ڰ� ���� �����Ҵ�"�ϱ� �����Դϴ�.
// ==> STL �� "std::string" �� ����ϸ� ��� ������ �ذ�ȴ�.

class People
{
//	char* name;
	std::string name;
	int age;
public:
	People(const std::string& s, int a) : name(s), age(a)
	{
	}
};
int main()
{
	People p1("kim", 2);
	People p2 = p1;
}