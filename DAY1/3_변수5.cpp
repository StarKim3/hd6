
struct Point
{
	int x;
	int y;
};

int main()
{
	Point pt = { 1,2 };

	// ����ü�� ��� ��Ҹ� ���ٷ� ������ �ֽ��ϴ�
	// C++17 ���� �߰��� "structure binding" �̶�� ���� �Դϴ� - 25page
	// "g++ �ҽ�.cpp -std=c++17" �ʿ� �մϴ�
	auto [a, b] = pt;	// auto a = pt.x
						// auto b = pt.y �� �ǹ� �Դϴ�.

	int[a1, b1] = pt; // error. auto�� �����մϴ�. !!


	int arr[3] = { 1,2,3 };

	auto [n1, n2, n3] = arr; // �迭�� �˴ϴ�.
	auto [n4, n5] = arr; // error. ������ �����ؾ߸� �մϴ�.
}