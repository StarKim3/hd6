// 4_�Լ�6 - ���� ��ȯ Ÿ�� - 37 page

// �������� �Լ� ���
int square1(int a)
{
	return a * a;
}

// C++11 ���� ���� ���� "���� ��ȯ Ÿ��(suffix return type)" �̶�� ����
// Ư¡ : ��ȯ Ÿ���� �Լ� () �ڿ� �ֽ��ϴ�.
// swift, kotlin, Go ���� �� ���� Ÿ���� ���ʿ� ǥ�� �մϴ�.
// Python ( type annotation ����)�� �ڿ� ǥ�� �մϴ�.
auto square2(int a) -> int
{
	return a * a;
}


int main()
{
	square1(3);
}