#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
	public :
		std::string name;
		Weapon *wpn;
		HumanB(std::string _name);
		void attack();
		void setWeapon(Weapon &_wpn);
		~HumanB();
};

#endif
