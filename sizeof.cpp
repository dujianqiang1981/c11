#include <iostream>

class A {
public:
	A() {std::cout<<"A construct"<<std::endl; };
	A(int a) {x =a;};
	virtual void test(){};
	~A() {std::cout<<"A desturct"<<std::endl;};  //4 byte
private:
	int x;
	char y;
	short z;
	static int a;
};


void test_sizeof()
{
	A a(10);
	//A* a = new A;
	std::cout<<sizeof(a)<<std::endl;
	//delete a;
}

int main()
{
	int v;
	test_sizeof();
	std::cin>>v;
	return 0;
}