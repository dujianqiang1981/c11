#include <string>
#include <iostream>
#include <vector>

void test_add()
{
	int v;
	std::string s1("Hello World!");
	std::string s2(s1);
	std::string s3 =s1+"and"+s2;


	std::cout<<s1<<s2<<s3<<std::endl;
}

void test_null()
{
	int v;
	std::string s1;


	std::cout<<s1[0]<<std::endl;  //abort
}

void test_vector()
{
	std::vector<int> ivec(10,5);
	ivec.push_back(6);
	ivec.push_back(7);
	ivec.push_front(8);
	ivec.pop_back();
	for(int i=0; i<ivec.size();i++)
		std::cout<<ivec[i]<<std::endl;

	//for(std::vector<int>::const_iterator iter = ivec.begin() ;iter!=ivec.end(); ++iter) {
	for(std::vector<int>::iterator iter = ivec.begin() ;iter!=ivec.end(); ++iter) {
		*iter =0;
		std::cout<<*iter<<std::endl;
	}
}

int main()
{
	int v;
    //test_null();
	test_vector();
	std::cin>>v;
	return 0;
}