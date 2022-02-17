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
		// �̶�, 0 <= idx < size �� Ȯ���ϸ� ���� �����ϴ�.
		ptr[idx] = value;
	}
	int getAt(int idx)
	{
		return ptr[idx];
	}
};
// vector ������ : resize()���� ������ �Լ��� ����� �־�� �մϴ�.
// 
// vector ����� : vector �� ������ ���� ���ʿ� �����ϴ�.
//				 ����(public �� �ִ� �Լ�)�� �˸� �˴ϴ�.

int main()
{
	vector v(5);

	v.setAt(0, 10); // v[0] = 10 �� �ǹ�
	v.setAt(1, 20);

	v.resize(10);

	std::cout << v.getAt(0) << std::endl; // 10
}