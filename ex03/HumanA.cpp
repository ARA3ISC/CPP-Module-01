#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_wpn)  : wpn(_wpn){
	this->name = _name;
	std::cout<< GREEN << "HumanA constructor was called "<< RESET << std::endl;
}

void HumanA::attack() {
	std::cout << std::endl << name << " attacks with their " << wpn.getType() << std::endl << std::endl;
}

HumanA::~HumanA() {
	std::cout<< RED << "HumanA destructor was called "<< RESET << std::endl;
}
