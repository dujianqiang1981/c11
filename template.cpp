#include <iostream>

// 函数模板
template <typename T>
int compare(const T &v1, const T &v2)
{
	if(v1 < v2)
		return -1;
	else if(v2 < v1)
		return 1;
	else
		return 0;
}

//类模板

int main() 
{ 
	std::cout<<compare(1,1)<<std::endl;

	std::cout<<compare("hello","world")<<std::endl;

	std::cin.get(); 
}