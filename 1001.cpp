#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cmath>
#include <vector>

int main() {
	uint64_t input_data;
	std::vector<double> output_data;
	output_data.reserve(256 * 1024 / 2);

	while (std::cin >> input_data) {
		output_data.push_back(std::sqrt((double)input_data));
	}

	std::cout.precision(4);
	std::cout << std::fixed;

	for (std::vector<double>::reverse_iterator itr = output_data.rbegin(), end = output_data.rend(); itr != end; ++itr) {
		std::cout << *itr << std::endl;
	}

	return 0;
}