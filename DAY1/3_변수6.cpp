#include <iostream>
#include <cstring> // <string.h> �� C++ ����.
				   // ��, strcmp() ���� �Լ��� ����ϱ� ����

#include <string> // std::string �� ����Ϸ��� �� ����� �ʿ� �մϴ�.
// 26page �Ʒ� ����

int main()
{
	// C������ ���ڿ� - char�迭 �Ǵ� char* ���
//	char s1[] = "hello";
//	char s2[6];
//	s2 = s1; // error. 
			 // ���ڿ� ���縦 �ϰ� �;��ٸ� strcpy( s2, s1) �Ǵ� strcpy_s()

//	if (s2 == s1) {} // ������ �ƴ����� ���ڿ� �񱳰� �ƴ� �ּ� ��
					// �׻� false .. ���ڿ� ���ϰ� �;��ٸ� strcmp(s2, s1) == 0

	// C++ ������ ���ڿ��� std::string Ÿ������ �ϸ� �˴ϴ�.
	std::string s3 = "hello";
	std::string s4 = s3;  // ok

	s4 = s3 + s3; // "hello" + "hello"  =>"hellohello"
				  // "s3 * 10" �� �ȵ˴ϴ�.
	
	if (s4 == s3) {}
	
	std::cout << s4 << std::endl;
}

