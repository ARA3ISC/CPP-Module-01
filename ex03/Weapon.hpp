#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# define RED "\033[31m"
#define GREEN "\033[92m"
#define RESET "\033[0m"
#define CYAN "\033[96m"

class Weapon {
	private:
		std::string type;
	public:
		Weapon (std::string _type);
		void	setType(std::string _type);
		const std::string& getType() const;
		~Weapon ();
};

#endif
