// 8_STL_ALGORITHM1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// ���� �Լ� : ���ڰ� �Ѱ��� �Լ�
// ���� �Լ� : ���ڰ� �ΰ��� �Լ�
bool is_3_times(int n)
{
	return n % 3 == 0;
}
int main()
{
	std::vector<int> v = { 1, 6, 7, 8, 9, 3, 10 };

	// �־��� �������� 3�� ã�� �ʹ�.
	auto ret1 = std::find(v.begin(), v.end(), 3); // "�� �˻�"

	// �־��� �������� 1��° ������ "3�� ���" �� ã�� �ʹ�. ??
	// std::find    : ���˻�
	// std::find_if : ���ǰ˻�(���ڷ� �Լ� ����)
	auto ret2 = std::find_if(v.begin(), v.end(), is_3_times);

	if (ret2 != v.end())
		std::cout << *ret2 << std::endl; // 6

}