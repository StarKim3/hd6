// 1_friend - 75 page

class AAA
{
public:
	void f()
	{
//		Bike b;
//		b.gear = 10;
	}
};

class Bike
{
	int gear;
public:
	// friend �Լ� : ��� �Լ��� �ƴ����� private ����� �����Ҽ� �ְ� 
	//				 �ش޶�� �ǹ�.
	// 1. ����Լ��� �ϸ� ���ٵ�, �� ����� �ƴ� �Լ��� �ϳ���
	//    => ����� ����� ����� ��찡 �ֽ��ϴ�(������ ������ ����..)
	// 2. setter/getter �� ����� ���� �ʳ��� ?
	//    => setter/getter�� ����� ���� "��𼭳� ���� ����" �ϰڴٴ� �ǵ�.
	//    => �Ʒ� friend �� "foo"�� ���� ����.
	friend void foo();
	friend class AAA; // AAA �� ��� ��� �Լ� ���� ���� private ���� ����.
	friend void AAA::f();
};


void foo() 
{
	Bike b;
	b.gear = 10;
}
int main()
{
	foo();
}