// 10_���������� - 134 page
// C++ �� ���������ڴ� 3�� �Դϴ�. : private, protected, public 
class Base
{
private:   int a; // �ڽ��� ��� �Լ��� ���� ����
protected: int b; // �ڽ��� ��� �Լ� �� �Ļ� Ŭ������ ����Լ����� ���� ����
public:    int c; // ��𼭵� ���� ����.
};
class Derived : public Base
{
public:
	void fn() 
	{
		a = 10; // error. �Ļ� Ŭ������, ��� Ŭ������ private �� ���� �ȵ�
				// �����Ϸ��� ��� Ŭ������ �����ϴ� �Լ� ��� setA(10)
		b = 10; // ok
		c = 10; // ok. 
	}
};
int main()
{
	Base base;
	base.a = 10; // error. private ���
	base.b = 10; // error. protected ���
	base.c = 10; // ok.    public 
}