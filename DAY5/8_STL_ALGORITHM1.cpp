// 8_STL_ALGORITHM1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// �����̳ʿ��� 3�� ã�� �ʹ�.
//	s.find(3); // �̷� ��� �Լ��� ������ٸ�!!  ����ϱ�� ����.!
//	v.find(3); // ��� �����̳ʿ� find�� �־�� �Ѵ�.

	// STL �� find �� ����� �ƴ� �Ϲ� �Լ�(���ø�)���� �Ǿ� �ֽ��ϴ�
	// �ϳ��� find �� ��� �����̳ʿ� ���ؼ� "�����˻�"�� �����ϵ��� �Ǿ� �ֽ��ϴ�.
	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);

	// ���(ret2)
	// �˻� ���н� : v.end() �� ��ȯ �˴ϴ�.
	// �˻� ������ : 3�� �ִ� ���� ����Ű�� �ݺ��� ��ȯ
	if (ret2 == v.end())
		std::cout << "�˻� ����" << std::endl;
	else
		std::cout << "�˻� ���� : " << *ret << std::endl;
}