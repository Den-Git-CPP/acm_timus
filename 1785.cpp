#include <iostream>
int main() {
	int a;
	std::cin >> a;

	if (a >= 1 && a < 5) {
		std::cout << "few";
 	}

	if (a >= 5 && a < 10) {
		std::cout << "several";
	}

	if (a >= 10 && a < 20) {
		std::cout << "pack";
	}

	if (a >= 20 && a < 50) {
		std::cout << "lots";
 	}

	if (a >= 50 && a < 100) {
		std::cout << "horde";
 	}

	if (a >= 100 && a < 250) {
		std::cout << "throng";
	}

	if (a >= 250 && a < 500) {
		std::cout << "swarm";
 	}

	if (a >= 500 && a < 1000) {
		std::cout << "zounds";
 	}

	if (a >= 1000) {
		std::cout << "legion";
 	}
return 0;
}