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

int main()
{
	vector v(5);

	v.setAt(0, 10); // v[0] = 10 의 의미
	v.setAt(1, 20);

	v.resize(10);

	std::cout << v.getAt(0) << std::endl; // 10
}