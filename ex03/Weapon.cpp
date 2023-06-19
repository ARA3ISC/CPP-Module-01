#include "Weapon.hpp"

Weapon::Weapon (std::string _type) {
	std::cout << "Weapon constructor was called" << std::endl;
	this->type = _type;
};

void	Weapon::setType(std::string _type) {
	this->type = _type;
}

const std::string& Weapon::getType() const {
	return type;
}

Weapon::~Weapon () {
	std::cout << "Weapon destructor was called" << std::endl;
};
