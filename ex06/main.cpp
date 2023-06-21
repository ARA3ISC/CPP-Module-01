#include "harl.hpp"

int	getChoice(std::string argv) {
	std::string myArr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < 4; i++) {
		if (argv == myArr[i]) {
			return i;
		}
	}
	return -1;
}

int main(int argc, char *argv[]) {
	if (argc == 2) {
		int choice = getChoice(argv[1]);
		if (choice != -1) {
			Harl myObj;
			switch (++choice) {
				case 1:
					myObj.complain("DEBUG");
					choice = 2;
				case 2:
					myObj.complain("INFO");
					choice = 3;
				case 3:
					myObj.complain("WARNING");
					choice = 4;
				case 4:
					myObj.complain("ERROR");
			}
		}
		else
			std::cout << "Invalid level" << std::endl;
	}
	else
		std::cout << "Invalid argument number! try again." << std::endl;
}
