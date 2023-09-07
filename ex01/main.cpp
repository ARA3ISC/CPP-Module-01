#include "zombie.hpp"

int main() {

	Zombie *zombies;

	zombies = zombieHorde(4, "vampire");
	for (size_t i = 0; i < 4; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
}
