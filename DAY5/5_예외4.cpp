#include <iostream>



int connectServer()
{
	if (1)       
		throw 1;
	return 0;
}
int main()
{
	try
	{
		connectServer();

		std::cout << "���� ������ ���ϵ�..." << std::endl;
	}
	catch (int e)
	{
		std::cout << "���� �߻�" << std::endl;

		// 1. ���⼭ ���� ������ ���̻� �����Ҽ� ���ٸ� ����ڿ��� �˷��ְ� ���� �մϴ�.(exit())
		// 2. �������� ������ ���α׷��� ��� ����˴ϴ�.
	}

	std::cout << "���α׷� ��� ����" << std::endl;
}