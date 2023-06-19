#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
	public :
		std::string name;
		Weapon &wpn;
		HumanA(std::string _name, Weapon &_wpn);
		void attack();
		~HumanA();
};

#endif
