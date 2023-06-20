#include "replace.hpp"

int main(int argc, char *argv[]) {

	if (argc == 4) {
		readFromFile(argv[1], argv[2], argv[3]);
	}
	else
		std::cout << "Invalid arguments! try again." << std::endl;

}
