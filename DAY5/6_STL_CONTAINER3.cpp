#include <iostream>

// ���� �����̳� 3��
// ��Ұ� ���ٷ� ���� �ִ�.
// �Է� ������ ���� ������, �˻����� ������.
#include <vector>
#include <list>
#include <deque> 

// ���� �����̳�
#include <set>	// tree ��� �ڷᱸ���� ����ؼ� ����
				// �˻��� ������, ���� ������ �ڽ� ���� ���������� �̵��ϸ�
				// ũ�� ������ �Ǿ� �ִ�(���ĵǾ� �ִ�)

#include <unordered_set> // hash table �� ����Ÿ ����
						// ���� : �˻��� ���� �����ϴ�. set(tree) ���� �����ϴ�.
						// ���� : ����(ũ�����)�� ���� ������ �ʽ��ϴ�.

// �˻� �ӵ��� ���� �߿��ϴ�. : unordered_set(hash) ���
// �˻��� �߿� �ѵ�, ũ������� �Ǿ� �־�� �Ѵ�. : set(tree)

// �˻� ��ü�� ���� �������� �ʴ´ٸ� : ���������̳�(vector, list, deque)


// ����Ÿ�� �޸𸮿� �����Ҷ� � ���·� �����Ұ��ΰ��� ���� �й�
// => �ڷᱸ��(data structure)

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	std::set<int> s = { 50, 30, 80, 40, 70, 20, 90, 10 };

	// �׷���.. �� �̸��� set �ΰ��� ?
	// => ���� ���� ������ ���� �մϴ�.
	// => s1 | s2 => ������,   s1 & s2 => �����յ�.

	std::unordered_set<int> us = { 50, 30, 80, 40, 70, 20, 90, 10 };
}
