#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	// {
	// 	Weapon club = Weapon("crude spiked club");
	// 	HumanA bob("Bob", club);
	// 	bob.attack();

	// 	std::cout << club.getType() << std::endl;

	// 	// club.setType("AKA-47");
	// 	// bob.attack();
	// }
	{
	Weapon club = Weapon("SCAR");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	// club.setType("some other type of club");
	// jim.attack();
}
return 0;
}
