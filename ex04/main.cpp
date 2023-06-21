#include "replace.hpp"

// ! still -> turn in my own tests
int main(int argc, char *argv[]) {

	if (argc == 4) {
		readFromFile(argv[1], argv[2], argv[3]);
	}
	else
		std::cout << "Invalid arguments! try again." << std::endl;

}
