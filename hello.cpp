#include <iostream>

int main()
{
	std::cout<<"enter two numbers:"<<std::endl;
	int v1=0,v2=0;
	while(std::cin>>v1)
		v2+=v1;
	std::cout<<"the sumis"<<v2<<std::endl;
	std::cin>>v1;
	return 0;
}