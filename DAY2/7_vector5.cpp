#include <iostream>

// 객체지향 : 필요한 타입을 먼저 만들자.

// "Person", "Rect" 같은 타입만 있는것은 아닙니다.

// "동적배열(vector, 크기를 변경할수 있는 배열)" 타입을 만들어 봅시다.

class vector
{
	int* ptr;
	int size;
public:
	vector(int sz)
	{
		size = sz;
		ptr = new int[size];
	}
	// 생성자에서 자원(메모리)할당등을 하는 코드가 
	// 있을때는 대부분 소멸자를 만들어서
	// 자원 반납을 하면 됩니다.
	// 자원할당을 하는 코드가 없는 클래스는 소멸자를 만들 필요는 거의 없습니다.
	~vector()
	{
		delete[] ptr;
	}
};

int main()
{
	vector v(5); // 초기 크기는 5
//	v.resize(10); // 10개로 키워 달라!
}