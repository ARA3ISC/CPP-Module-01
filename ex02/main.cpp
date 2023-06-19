#include <iostream>

int main() {

	std::string myString = "HI THIS IS BRAIN";

	// Declaring a pointer to the string
	std::string* stringPTR;
	stringPTR = &myString;

	// Declaring a reference to the string
	std::string& stringREF = myString;

	std::cout << "the memory address of the string     : " << &myString << std::endl;
	std::cout << "the memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "the memory address held by stringREF : " << &stringREF << std::endl << std::endl;

	std::cout << "the value of the string              : " << myString << std::endl;
	std::cout << "the value pointed to by stringPTR    : " << *stringPTR << std::endl;
	std::cout << "the value pointed to by stringREF    : " << stringREF << std::endl;

}
