#include "header.h"

int main() {

	std::vector<int> vector1, vector2;

	// set some values:
	for (int i = 1; i < 10; ++i) {
		vector1.push_back(i); // 1 2 3 4 5 6 7 8 9
		vector2.push_back(i);
	}

	// print out content:
	std::cout << "before shuffle" << std::endl;
	std::cout << "vec1 contains:";
	for (std::vector<int>::iterator it = vector1.begin(); it != vector1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	std::cout << "vec2 contains:";
	for (std::vector<int>::iterator it = vector2.begin(); it != vector2.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	auto seed = unsigned(std::time(0));
	std::srand(seed);
	std::random_shuffle(vector1.begin(), vector1.end());
	std::srand(seed);
	std::random_shuffle(vector2.begin(), vector2.end());

	// print out content:
	std::cout << "after shuffle" << std::endl;
	std::cout << "vec1 contains:";
	for (std::vector<int>::iterator it = vector1.begin(); it != vector1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	std::cout << "vec2 contains:";
	for (std::vector<int>::iterator it = vector2.begin(); it != vector2.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	system("PAUSE");
}