#include <iostream>

// ���� �����̳� 3��
// ��Ұ� ���ٷ� ���� �ִ�.
// �Է� ������ ���� ������, �˻����� ������.
#include <vector>
#include <list>
#include <deque> 

// ���� �����̳�
// �Ѱ��� ����
#include <set>	
#include <unordered_set> 

// key-value �� ���� ����
#include <map>			// tree �� �� ����
#include <unordered_map>// hash �� �� ����

#include <string>

int main()
{
	std::set<std::string> s = { "mon", "tue", "wed" };

	std::map<std::string, std::string> m = { {"mon","������"}, {"tue", "ȭ����"} };

	// [] �� ��밡��
	m["wed"] = "������";

	std::cout << m["mon"] << std::endl; // ������

	
}

