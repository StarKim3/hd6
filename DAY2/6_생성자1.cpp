// 6_������1
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int age;

public:
	// ������ : Ŭ���� �̸��� ������ �̸��� �Լ�
	//			��ȯ Ÿ���� ������ ����, ���� ��ȯ �Ҽ��� ����.
	//			���ڴ� �־ �ǰ� ��� �ȴ�.
	//		    ��ü�� �����ϸ� �ڵ����� ȣ��ȴ�.
//	void init()
	Person()
	{
		name = "lee";
		age = 28;
	}
};

int main()
{
	// �������Ÿ�� public �� �ִٸ� �Ʒ�ó�� �ʱ�ȭ �ϸ� �˴ϴ�.(C ��� ����ü �ʱ�ȭ ����)
//	Person p = { "lee", 28 };

	// ������, ��� ����Ÿ private�� �ִٸ� ��ó�� �ʱ�ȭ �ȵ˴ϴ�.
	// public ������ �ʱ�ȭ �Լ��� �����ؾ� �մϴ�.
	Person p;
	p.init();
}



