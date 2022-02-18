// 5_static_quiz

class Test
{
	int idata;
	static int sdata;
public:
	// 다음중 에러를 모두 골라 보세요
	void f1()
	{
		int n1 = idata;
		int n2 = sdata;
		f2();
	}
	static void f2()
	{
		int n1 = idata;
		int n2 = sdata;
		f1();
	}
};
int Test::sdata = 0;
int main()
{
}