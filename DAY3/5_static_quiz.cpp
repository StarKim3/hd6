// 5_static_quiz
// 
// 핵심 : static 멤버 함수 에서는 static 멤버(데이타, 함수) 만 접근가능하다.
class Test
{
	int idata;
	static int sdata;
public:
	// 다음중 에러를 모두 골라 보세요
	// f1이 호출되었다는 것은 객체가 있다는 것을 의미 합니다.
	void f1()
	{
		int n1 = idata; // 1. ok
		int n2 = sdata;	// 2. ok
		f2();			// 3. ok
	}
	static void f2()
	{
		int n1 = idata;	// 4. error. idata 는 객체가 있어야만 메모리에 생성 됩니다.
		int n2 = sdata;	// 5. ok..   sdata 는 객체가 없어도 메모리에 있습니다.
		f1();			// 6. error. 
	}
};
int Test::sdata = 0;
int main()
{
	// 핵심 1. static 멤버 데이타는 객체가 없어도 메모리에 있습니다
	//      2. static 멤버 함수는 객체없이 호출가능합니다.
	Test::f2();
}