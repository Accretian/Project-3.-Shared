#include <iostream>
#include <string>
#include <vector>

int main() {

	std::string pleaseDontCloseThisProgram;

	std::vector<int> vector1(100);
	for (int i = 0; i < 100; i++) {
		vector1[i] = i + 1;
	}

	for (int i = 1; i <= vector1.size(); i++) {
		std::cout << vector1[i - 1] << ".";
		if (i % 10 == 0) {
			std::cout << "\n";
		}
	}

	std::cout << "\n\n\n";


	std::cin >> pleaseDontCloseThisProgram;
	















	return 0;
}