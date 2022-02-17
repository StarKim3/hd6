#include <iostream>

// 함수만 틀(template) 을 만들수 있는 것이 아니라
// 클래스도 틀(template)을 만들수 있습니다.

template<typename T> 
class vector
{
	T* ptr;
	int size;
public:
	vector(int sz)
	{
		size = sz;
		ptr = new T[size];
	}
	~vector() { delete[] ptr; }

	void resize(int newsize)
	{
		if (newsize > size)
		{
			T* temp = new T[newsize];

			memcpy(temp, ptr, sizeof(T) * size);
			delete[] ptr;
			ptr = temp;
			size = newsize;
		}
	}

	void setAt(int idx, const T& value)
	{
		ptr[idx] = value;
	}
	T getAt(int idx)
	{
		return ptr[idx];
	}
};

int main()
{
	vector<int> v(5);
	vector<double> v2(5);

	v.setAt(0, 10); 
	v.setAt(1, 20);

	v.resize(10);

	std::cout << v.getAt(0) << std::endl; 
}