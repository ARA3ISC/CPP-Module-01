#include "HumanB.hpp"

HumanB::HumanB(std::string _name) {
	this->name = _name;
	std::cout << GREEN << "HumanB constructor was called " << RESET << std::endl;
}

void HumanB::attack() {
	std::cout <<std::endl<< name << " attacks with their " << wpn->getType() << std::endl << std::endl;
}

HumanB::~HumanB() {
	std::cout << RED << "HumanB destructor was called " << RESET<< std::endl;
}

void HumanB::setWeapon(Weapon& _wpn) {
	this->wpn = &_wpn;
}
