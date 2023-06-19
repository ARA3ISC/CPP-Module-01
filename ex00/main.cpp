#include "zombie.hpp"

int main() {

	Zombie *z;
	z = newZombie("zombie 1");
	z->announce();
	// randomChump("  zombie 2  ");

	delete z;
	// delete z2;
	// system("leaks zombie");
	return 0;
}
