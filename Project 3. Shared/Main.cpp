#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>


int main() {

	std::string pleaseDontCloseThisProgram;

	std::vector<int> vector1(100);
	for (int i = 0; i < vector1.size(); i++) {
		vector1[i] = i + 1;
	}

	for (int i = 1; i <= vector1.size(); i++) {
		std::printf("%d", vector1[i - 1]);
		std::printf(".");
		if (i % 10 == 0) {
			std::printf("\n");
		}
	}

	std::cout << "\n\n\n";

	
	













	std::cin >> pleaseDontCloseThisProgram;

	return 0;
}