// 1409.cpp 

#include <iostream>
int main( ) 
{
	int a, b;
	std::cin >> a >> b;
	int s = a + b - 1;
	std::cout << s - a << " " << s - b << std::endl;
	return 0;
}