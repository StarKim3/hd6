#include <iostream>
#include <list>
#include <vector>

// iterator(�ݺ���) : �����̳��� ���� ������ ������� ������ ������� �����ϱ����Ѱ�ü
//					  ������ó�� ++�� �̵�, * �� ��� ����


int main()
{
	//std::list<int> s = { 1,2,3,4,5 };
	//std::vector<int> s = { 1,2,3,4,5 };

	int s[5] = { 1,2,3,4,5 }; //

	// 1. ��Ȯ�� Ÿ��. �׷��� �Ʒ� ó�� �ϸ�
	// A. ������ ���̰�
	// B. �����̳� ����� �ڵ� �����ȴ�.
	// std::list<int>::iterator p1 = s.begin();

	// 2. C++11 �� �����Ǵ� ȯ���̶�� auto�� �ϼ���
//	auto p1 = s.begin(); // p1�� ������ �ƴմϴ�... ��ü �Դϴ�.
						 // ���� �����Ϳ� ������ �����һ��Դϴ�.
						// error. s�� raw array �̹Ƿ� ����Լ��� ������ �����ϴ�.

	// 3. �ݺ��ڸ� ������ ���� ���� ǥ����� �Ʒ� �ڵ� �Դϴ�.
	auto p1 = std::begin(s); // s�� STL �̾ �ǰ�, 
							 // raw array �� �˴ϴ�
							 // raw array ��� p1 �� int* �Դϴ�.
							// �׷���,
							// int* p = std::begin(s) �˴ϴ�. ��, s�� raw array�϶���
}


/*
namespace std
{
	template<typename T> 
	class list
	{
	public:
		class iterator
		{
		};
	};
}
*/