// 1_friend - 75 page

class Bike
{
	int gear;
public:

	// friend �Լ� : ��� �Լ��� �ƴ����� private ����� �����Ҽ� �ְ� 
	//				 �ش޶�� �ǹ�.
	friend void foo();
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