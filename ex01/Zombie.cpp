#include "zombie.hpp"

Zombie::Zombie (std::string _name) {
	this->name = _name;
	std::cout << "Constructor was called" << std::endl;
}
Zombie::Zombie (void) {
	std::cout << "Constructor was called" << std::endl;
}

void Zombie::announce(void) {

	std::cout << name << std::endl;
}
void Zombie::setName(std::string _name){
	this->name = _name;
}
Zombie::~Zombie() {
	std::cout << "Destructor was called" << std::endl;
}
