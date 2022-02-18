// 13_upcasting1 - 140 page
class Animal
{
	int age;
public:
	void cry() {}
};
class Dog : public Animal
{
	int color;
public:
	void setColor(int c) { color = c; }
};
int main()
{
	Dog dog;
	Dog*    p1 = &dog; // ok
//	int*    p2 = &dog; // error
	Animal* p3 = &dog; // ok..

	// �ٽ� 1. ��� Ŭ���� �����ͷ� �Ļ� Ŭ���� �ּҸ� ������ �ִ�.(����ų�� �ִ�.)

	// �ٽ� 2. ��� Ŭ���� �����ͷδ� ��� Ŭ���� ����� ���ٰ����ϴ�
	p3->cry();		 // ok.
//	p3->setColor(3); // error.

	// �ٽ� 3. Dog�� ���� ����� �����Ϸ���
	//			ĳ�����Ѵ�.
	((Dog*)p3)->setColor(3); // ok

	static_cast<Dog*>(p3)->setColor(3); // ���� �ڵ� - �����Ͽ�
}
