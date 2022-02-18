// 5_static_quiz
// 
// �ٽ� : static ��� �Լ� ������ static ���(����Ÿ, �Լ�) �� ���ٰ����ϴ�.
class Test
{
	int idata;
	static int sdata;
public:
	// ������ ������ ��� ��� ������
	// f1�� ȣ��Ǿ��ٴ� ���� ��ü�� �ִٴ� ���� �ǹ� �մϴ�.
	void f1()
	{
		int n1 = idata; // 1. ok
		int n2 = sdata;	// 2. ok
		f2();			// 3. ok
	}
	static void f2()
	{
		int n1 = idata;	// 4. error. idata �� ��ü�� �־�߸� �޸𸮿� ���� �˴ϴ�.
		int n2 = sdata;	// 5. ok..   sdata �� ��ü�� ��� �޸𸮿� �ֽ��ϴ�.
		f1();			// 6. error. 
	}
};
int Test::sdata = 0;
int main()
{
	// �ٽ� 1. static ��� ����Ÿ�� ��ü�� ��� �޸𸮿� �ֽ��ϴ�
	//      2. static ��� �Լ��� ��ü���� ȣ�Ⱑ���մϴ�.
	Test::f2();
}