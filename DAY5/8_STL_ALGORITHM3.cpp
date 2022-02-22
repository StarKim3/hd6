// 8_STL_ALGORITHM1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool is_3_times(int n)
{
	return n % 3 == 0;
}
int main()
{
	std::vector<int> v = { 1, 6, 7, 8, 9, 3, 10 };

	auto ret2 = std::find_if(v.begin(), v.end(), is_3_times);


	// ���� ǥ����(lambda expression)
	// �Լ�(�Լ� �ּ�)�� �ʿ��� �ڸ��� �Լ������� ���� ǥ���ϴ� ����
	// "�͸��� �Լ��� ����� ����"
	// [] : lambda introducer. ���ٰ� ���۵��� �˸��� ��ȣ
	// 
	// C++11 ���� ����

	// STL �� xxx_if �˰��� ���� �Լ� ���� "����ǥ����"�� ����ϼ���
	auto ret3 = std::find_if(v.begin(), v.end(), 
						[](int n) {return n % 3 == 0;} );


	// ����ǥ������ auto ������ ��Ƽ� ����ص� �˴ϴ�.
	auto f = [](int a) { return a % 3 == 0; };

	auto ret4 = std::find_if(v.begin(), v.end(), f); // ok

}