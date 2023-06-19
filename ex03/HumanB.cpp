#include "HumanB.hpp"

HumanB::HumanB(std::string _name) {
	this->name = _name;
	std::cout << "HumanB constructor was called " << std::endl;
}

void HumanB::attack() {
	std::cout << name << " attacks with their " << wpn->getType() << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB destructor was called " << std::endl;
}

void HumanB::setWeapon(Weapon _wpn) {
	this->wpn = &_wpn;
}
