#include <iostream>
#include <cstring> // <string.h> 의 C++ 버전.
				   // 즉, strcmp() 등의 함수를 사용하기 위해

#include <string> // std::string 을 사용하려면 이 헤더가 필요 합니다.
// 26page 아래 내용

int main()
{
	// C언어에서의 문자열 - char배열 또는 char* 사용
//	char s1[] = "hello";
//	char s2[6];
//	s2 = s1; // error. 
			 // 문자열 복사를 하고 싶었다면 strcpy( s2, s1) 또는 strcpy_s()

//	if (s2 == s1) {} // 에러는 아니지만 문자열 비교가 아닌 주소 비교
					// 항상 false .. 문자열 비교하고 싶었다면 strcmp(s2, s1) == 0

	// C++ 에서의 문자열은 std::string 타입으로 하면 됩니다.
	std::string s3 = "hello";
	std::string s4 = s3;  // ok

	s4 = s3 + s3; // "hello" + "hello"  =>"hellohello"
				  // "s3 * 10" 은 안됩니다.
	
	if (s4 == s3) {}
	
	std::cout << s4 << std::endl;
}

