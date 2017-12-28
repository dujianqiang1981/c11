#include <memory>
#include <iostream>
class Test
{
public:
	Test()
    {
        std::cout << "Default Test()" << std::endl;
    }
    Test(int v)
    {
        std::cout << "Test()" << std::endl;
		value = v;
    }
    ~Test()
    {
        std::cout << "~Test()" << std::endl;
    }
	int value;
};


void test_shared_ptr()
{
    std::shared_ptr<Test> p1 = std::make_shared<Test>();
    std::cout << "1 ref:" << p1.use_count() << std::endl;
    {
        std::shared_ptr<Test> p2 = p1;
        std::cout << "1 ref:" << p1.use_count() << std::endl;
		std::cout << "2 ref:" << p2.use_count() << std::endl;
    }
    std::cout << "3 ref:" << p1.use_count() << std::endl;
}

void test_unique_ptr()
{
    std::unique_ptr<Test> p1(new Test(8));
    std::cout << "p1 value =" << p1->value << std::endl;
    //std::unique_ptr<int> p2 = p1;
	std::unique_ptr<Test> p2 = std::move(p1);
	//std::cout << "p1 value =" << *p1 << std::endl;
	std::cout << "p2 value =" << p2->value << std::endl;
}

	int main()
{
	int v;

	//test_shared_ptr();
	test_unique_ptr();
	std::cin>>v;
    return 0;
}