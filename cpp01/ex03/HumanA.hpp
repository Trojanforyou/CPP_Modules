#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &_gun;
	public:
		std::string	getName();
		void	attack();
		HumanA(std::string name, Weapon &gun): _name(name), _gun(gun) {}
		
};

#endif