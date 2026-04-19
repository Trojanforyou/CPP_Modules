#pragma once

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &_gun;
	public:
		std::string	getName();
		void	attack();
		HumanA(std::string name, Weapon &gun);
		
};

