#include <iostream>
#include <vector>

int main()
{
	// -1�Է��Ҷ� ���� �Է� �޾ƶ� - C++ ����
	std::vector<int> v;
	int num;
	while (1)
	{
		std::cin >> num;
		if (num == -1) break;

		v.push_back(num); // �ڵ����� �˾Ƽ� ���� �մϴ�.
	}
	std::cout << "�Էµ� ���� : " << v.size() << std::endl;

	// range-for ��밡���մϴ�.
	for (auto e : v)
		std::cout << e << ", ";

	// ���� ������ vector�� �˾Ƽ� ���ֹǷ� ����ڴ� �Ű澵 �ʿ� �����ϴ�.
}
// C++�� ���� ��
// 1. std::vector ���� �ϳ��� Ÿ���� �߸���� ���� ���°� - ���� ���� ����
// 2. std::vector ���� ǥ���� �����ϴ� Ÿ���� ������ ���� �� - �ణ ����, 5����
// 3. ��ü���� �������� �����ϴ°� => ����� ���� 4����!