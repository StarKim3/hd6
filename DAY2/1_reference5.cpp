int main()
{
	int n = 10;

	// ���� ���۷����� ������ ����Ű��, ��(literal)�� ����ų�� �����ϴ�.
	// "lvalue reference" ��� �մϴ�.
	int& r1 = n; // ok
	int& r2 = 10; // error

	// C++11 ���� 10 �� ���� ���ͷ��� ����Ű�� ���۷���(����) �� ���Խ��ϴ�.
	// "rvalue reference" ��� �մϴ�.
	int&& r3 = 10;// ok
	int&& r4 = n; // error

}
// 46page