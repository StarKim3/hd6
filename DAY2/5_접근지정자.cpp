// 5_���������� - 74page
#include <iostream>
#include <string>

// �ٽ� : Ÿ���� ����µ�, ����ϱ� ����, �����ϰ� ����ϵ��� ������.
// "����� ����ϱ� ����, �߸�����ϱ� ��ư� ������"

struct Person
{
private:				// private ���� : ��� �Լ������� ���� ����
	std::string name;	//				����� �ƴ� �Լ����� ���ٽ� ����
	int  age;

public:					// public ���� : ��� ������ ���� ������ ���
	void setAge(int value)
	{
		if ( value > 0 && value < 150 )
			age = value;
	}
};
int main()
{
	Person p;
//	p.age = -10; // �߸��� ������� ��ü�� ���¶� �Ҿ��� ����.
				 // private �� �ִٸ� ������ ����
	p.setAge(-10);
}