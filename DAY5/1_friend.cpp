// 1_friend - 75 page

class Bike
{
	int gear;
public:

	// friend 함수 : 멤버 함수는 아니지만 private 멤버에 접근할수 있게 
	//				 해달라는 의미.
	// 1. 멤버함수로 하면 될텐데, 왜 멤버가 아닌 함수로 하나요
	//    => 멤버로 만들기 어려운 경우가 있습니다(연산자 재정의 에서..)
	// 2. setter/getter 를 만들면 되지 않나요 ?
	//    => setter/getter를 만드는 것은 "어디서나 접근 가능" 하겠다는 의도.
	//    => 아래 friend 는 "foo"만 접근 가능.
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