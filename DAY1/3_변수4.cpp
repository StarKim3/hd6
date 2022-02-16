// 3_변수4 - 23page
//typedef int DWORD;
//typedef void(*PF)(); // 함수 포인터 타입

// typedef : type에 대한 별칭 
// using   : type에 대한 별칭 + template 에 대한 별칭

// C++11 부터는 아래 처럼 해도 됩니다.
using DWORD = int;
using PF    = void(*)();

int main()
{
	DWORD n; // int n
	PF    f; // 함수 포인터 변수
}
