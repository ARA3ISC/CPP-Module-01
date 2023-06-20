#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("AKA-47");
		bob.attack();
	}
	std::cout << "\n--------------------\n\n";
	{
		Weapon club = Weapon("SCAR");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("MP40");
		jim.attack();
	}
	return 0;
}
