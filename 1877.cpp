﻿// 1877.cpp 

#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;
	std::string answer = ((a % 2 == 0) || (b % 2 == 1)) ? "yes" : "no";
	std::cout << answer << std::endl;
	return 0;
}