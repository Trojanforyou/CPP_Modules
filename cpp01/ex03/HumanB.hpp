#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

struct HumanB
{
	private:
		Weapon *_gun;
		std::string _name;
	public:
		Weapon	getName();
		void	setWeapon(Weapon &gun);
		void	attack();

		HumanB(std::string name): _name(name){}

};


#endif