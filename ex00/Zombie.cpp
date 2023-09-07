#include "zombie.hpp"

void Zombie::announce(void) {

	std::cout << name << ": BraiiiiiiinnnzzzZ\n";
}

Zombie::Zombie (std::string _name) {

	name = _name;
	std::cout << name << " was created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " was destroyed" << std::endl;
}
