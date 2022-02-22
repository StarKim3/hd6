#include <iostream>

// 선형 컨테이너 3개
// 요소가 한줄로 놓여 있다.
// 입력 순서를 유지 하지만, 검색등은 느리다.
#include <vector>
#include <list>
#include <deque> 

// 연관 컨테이너
// 한개를 보관
#include <set>	
#include <unordered_set> 

// key-value 의 쌍을 보관
#include <map>			// tree 에 쌍 보관
#include <unordered_map>// hash 에 쌍 보관

#include <string>

int main()
{
	std::set<std::string> s = { "mon", "tue", "wed" };

	std::map<std::string, std::string> m = { {"mon","월요일"}, {"tue", "화요일"} };

	// [] 도 사용가능
	m["wed"] = "수요일";

	std::cout << m["mon"] << std::endl; // 월요일

	
}

