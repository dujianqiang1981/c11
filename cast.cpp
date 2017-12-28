#include <iostream>

class CDummy {
public:
	float i, j;
	CDummy():i(0),j(10)
	{ }
};

class DDummy {
	int *x, y;
public:
	DDummy(int a, int b)
	{ 
		x = &a;
		y =b;
	}
	int result()
	{
		return (*x + y);
	}
};

void test_static_cast()
{
	CDummy d;
	DDummy *p;
	p = (DDummy*)(&d);//c type 
	p = static_cast<DDummy*>(&d); //safety check when compile
	//p = reinterpret_cast<DDummy*>(&d); //similar to c style
	//p = dynamic_cast<DDummy*>(&d);
	std::cout<<p->result()<<std::endl;

	//dynamic_cast 

}

int main()
{
	int v;
	test_static_cast();
	std::cin>>v;
	return 0;
}