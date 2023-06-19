#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_wpn)  : wpn(_wpn){
	this->name = _name;
	// this->wpn = _wpn;
	std::cout << "HumanA constructor was called " << std::endl;
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << wpn.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA destructor was called " << std::endl;
}
