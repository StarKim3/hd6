#include <algorithm> // �� ��� �ȿ� C++ ǥ�� "min" �Լ��� �ֽ��ϴ�.
//using namespace std; // �̷��� �ϰ� �������� �ֽ��ϴ�.
					// �����մϴ�. �ǹ������� �̷��� ���� ������.

// ��� C++ ǥ���� "std" ��� �̸������� �ֽ��ϴ�

int count = 0;

int main()
{
//	int n1 = min(10, 3); // error
	int n2 = std::min(10, 3); // ok

	int n3 = count; // ��, ���⼭ ������ ���ñ�� ?
					// C++ ǥ�ؿ� "std::count() �Լ��� �ֽ��ϴ�."
					// using namespace std ������
					// �������� count �� ǥ�� �Լ� count �� �̸��浹�߻�
}