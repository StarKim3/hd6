// 6_��� - 39 page

int fn()
{
	return 10;
}

int main()
{
	// �Ʒ� �ڵ�� ���� �θ� ���Ǵ� �ڵ��Դϴ�.
	int ret = fn();
	if (ret == 10)
	{
	}

	// C++17 ���� �Ʒ� ó�� ��밡���մϴ�.
	if (int ret2 = fn(); ret2 == 10) // ���ο� if �� - if with initializer ��� ����
	{
	} // <== �̼��� ret2 �ı� �˴ϴ�.

	// switch �� �ʱ�ȭ ���� ������ �ְ� �Ǿ����ϴ�. - C++17
	switch (int ret3 = fn(); ret3)
	{
	case 1: break;
	case 2: break;
	}

	// �Ʒ� ó�� while �� �ɱ�� ? ??? 
	while (int cnt = 0; cnt < 10)
	{

		++cnt;
	}

}