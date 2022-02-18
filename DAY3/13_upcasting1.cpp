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
	Dog*    p1 = &dog;
	int*    p2 = &dog;
	Animal* p3 = &dog;
}
