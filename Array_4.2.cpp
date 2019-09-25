#include <iostream>
#include <vector>

int main() {
	int userInput;
	int n = 0;
	std::vector<int>fib;
	std::cout << "Enter a number\n";
	std::cin >> userInput;

	int first = 0;
	int second = 1;

	for (int i = 0; i < userInput; i++) {

		if (i <= 1) {
			n = i;
		}
		else {
			n = first + second;
			first = second;
			second = n;
		}
		fib.push_back(n);
	}
	std::cout << fib[userInput - 1] << "\n";


	system("pause");
	return EXIT_SUCCESS;
}

