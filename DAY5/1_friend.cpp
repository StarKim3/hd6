// 1_friend - 75 page

class Bike
{
	int gear;
public:

	// friend 함수 : 멤버 함수는 아니지만 private 멤버에 접근할수 있게 
	//				 해달라는 의미.
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