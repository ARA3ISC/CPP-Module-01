#include "harl.hpp"

Harl::Harl() {
	std::cout << "Constructor was invoked" << std::endl;
}

void	Harl::debug ( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info ( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning ( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error ( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain (std::string level) {

	std::string myArr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*myPtr[4])();
	myPtr[0] = &Harl::debug;
	myPtr[1] = &Harl::info;
	myPtr[2] = &Harl::warning;
	myPtr[3] = &Harl::error;

	for (size_t i = 0; i < 4; i++) {
		if (level == myArr[i]) {
			(this->*myPtr[i])();
			break;
		}
		else if (i == 3)
			std::cout << "Invalid level" << std::endl;
	}

}

Harl::~Harl() {
	std::cout << "Destructor was invoked" << std::endl;
}
