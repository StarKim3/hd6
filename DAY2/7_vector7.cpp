#include <iostream>

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
	~vector() { delete[] ptr; }

	void resize(int newsize)
	{
		if (newsize > size)
		{
			int* temp = new int[newsize];
			memcpy(temp, ptr, sizeof(int) * size);
			delete[] ptr;
			ptr = temp;
			size = newsize;
		}
	}

	void setAt(int idx, int value)
	{
		// 이때, 0 <= idx < size 를 확인하면 더욱 좋습니다.
		ptr[idx] = value;
	}
	int getAt(int idx)
	{
		return ptr[idx];
	}
};
// vector 제작자 : resize()같은 복잡한 함수를 만들수 있어야 합니다.
// 
// vector 사용자 : vector 의 구현을 전혀 알필요 없습니다.
//				 사용법(public 에 있는 함수)만 알면 됩니다.

int main()
{
	vector v(5);

	v.setAt(0, 10); // v[0] = 10 의 의미
	v.setAt(1, 20);

	v.resize(10);

	std::cout << v.getAt(0) << std::endl; // 10
}