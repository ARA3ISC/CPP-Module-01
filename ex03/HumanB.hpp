#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
	public :
		HumanB(std::string _name);
		std::string name;
		Weapon *wpn;
		void attack();
		void setWeapon(Weapon &_wpn);
		~HumanB();
};

#endif
