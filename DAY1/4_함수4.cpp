// �Լ� ���ø� - 33page.. ���� �߿��մϴ�. �ݵ�� ���� �ϼž� �մϴ�.

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// ������ ����(����)�� �Լ��� ������ �ʿ� �ϸ�
// �Լ��� ������ ����
// �Լ��� ����� Ʋ(���ø�)�� ����� ���մϴ�.

// �Ʒ� �ڵ�� "�Լ�"�� �ƴմϴ�. �Լ��� ���� "Ʋ" �Դϴ�.
template<typename T>  
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3);
	square<double>(3.3);
}
