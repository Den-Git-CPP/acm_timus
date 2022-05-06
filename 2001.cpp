// 2001.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>

int main() {
	unsigned int a1, a2, a3, b1, b2, b3;
	std::cin >> a1 >> b1;
	std::cin >> a2 >> b2;
	std::cin >> a3 >> b3;
	std::cout << (a1 - a3) << " " << (b1 - b2) << '\n';
	return 0;
}