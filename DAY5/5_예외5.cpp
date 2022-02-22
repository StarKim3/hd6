#include <iostream>
#include <string>

// ���� ���� Ÿ���� ����ش� ���� �Ϲ����� ���� �Դϴ�
class InvalidURLException
{
	std::string url;
	int errorcode;
public:
	InvalidURLException(const std::string& s, int n)
		: url(s), errorcode(n) {}

	int getCode() const { return errorcode; }
};
// �Ʒ� ó�� empty class �� ������ �ʽ��ϴ�.
class DisconnectWIFIException {};

int connectServer()
{
	if (1)
	{
		InvalidURLException e("www.aaa.com", 404);
		throw e;
	}
	if (2) // �ٸ� ������ ����
	{
		DisconnectWIFIException e;
		throw e;
	}
	return 0;
}

int main()
{
	try
	{
		connectServer();
	}
	catch (InvalidURLException& e)
	{
	}
	catch (DisconnectWIFIException& e)
	{
	}
	catch (...) // ������ ó������ ���� ��� ���� ó��.
	{
	}
	std::cout << "���α׷� ��� ����" << std::endl;
}